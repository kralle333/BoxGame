package;

import flixel.effects.particles.FlxEmitter;
import flixel.effects.particles.FlxParticle;
import flixel.effects.particles.FlxEmitterExt;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.ui.FlxTypedButton;
import flixel.util.FlxMath;
import flixel.util.FlxPoint;
import flixel.util.FlxRandom;
import flixel.util.FlxSave;
import flixel.util.FlxTimer;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	var scoreText:FlxText;
	var highScore:Int;
	
	var startGameBox:Box;
	var isGameOver:Bool = false;

	var speedIncrease:Dynamic = 0;
	
	
	public static var beatsPerMinute:Int = 122;
	public static var secondsPerBeat:Float = 0;
	public static var beatTimer:Float = 0;
	
	var currentLine:Int = 0;
	var data:Array<Int> = [];
	
	
	override public function create():Void
	{
		super.create();
		Registry.init();
		
		Clock.initialize(122,4,4);
		
		currentLine = 0;
		//Setting up the hero
		startGameBox = new Box(0, 0, 0xFF0000FF);
		startGameBox.x = FlxG.width / 2 -(FlxG.width/4 / 2);
		startGameBox.y = FlxG.height / 2 - (FlxG.width / 4 / 2);
		startGameBox.active = startGameBox.visible = true;
		add(startGameBox);
		
		//Setting up the scores
		scoreText = new FlxText(5, 5, 0, "");
		scoreText.text = "High Score: " + Registry.highScore+"\n\n\n\n\n\n\nPress box\nto play";
		scoreText.size = FlxG.width / 10;
		add(scoreText);
		
		for (boxArray in Registry.boxes)
		{
			for (box in boxArray)
			{
				add(box);
			}
		}
		add(Registry.particleEmitter);
		isGameOver = true;
		generateLevel();
		
	}
	
	private function switchElements(i:Int, j:Int, array:Array<Int>)
	{
		var temp:Int = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
	
	private function generateLevel():Void
	{
		var maxDifficultyPerLine:Int = 1;
		var newLine:Array<Int> = new Array<Int>();
		var difficultyOfLine:Int = 0;
		var lastDifficultyAdjustment = 2;
		var emptyLinesInARow:Int = 0;
		for (line in 0...500)
		{
			difficultyOfLine = FlxRandom.intRanged(1, maxDifficultyPerLine);
			newLine = [0, 0, 0, 0];
			while (true)
			{
				if (difficultyOfLine <= 0)
				{
					break;
				}
				var randIndex = FlxRandom.intRanged(0, 4);
				if (newLine[randIndex] == 0)
				{
					var newBox:Int = Std.int(Math.min(FlxRandom.intRanged(1, 3), difficultyOfLine));
					difficultyOfLine-= newBox;
					newLine[randIndex] = newBox;
				}
			}
			/*switchElements(FlxRandom.intRanged(0, 4), FlxRandom.intRanged(0, 4), newLine);
			switchElements(FlxRandom.intRanged(0, 4), FlxRandom.intRanged(0, 4), newLine);
			switchElements(FlxRandom.intRanged(0, 4), FlxRandom.intRanged(0, 4), newLine);
			switchElements(FlxRandom.intRanged(0, 4), FlxRandom.intRanged(0, 4), newLine);*/
			for (i in 0...4)
			{
				data.push(newLine[i]);
			}
			
			if (line == lastDifficultyAdjustment/2)
			{
				maxDifficultyPerLine++;
			}

		}
	}
	
	private function startGame():Void
	{
		Registry.score = 0;
		scoreText.text = "Score: " + Registry.score;
		isGameOver = false;
		startGameBox.deactivate();
	}
	
	
	var previousScore:Int = 0;
	private function updateScore():Void
	{
		if (!isGameOver && previousScore!= Registry.score)
			{
				scoreText.text = "Score " + Registry.score;
				previousScore = Registry.score;
				
				if (Registry.score % 20 == 0)
				{
					Registry.level++;
				}
			}
	}
	private function checkForGameOver():Void
	{
		if (isGameOver)
			{
				for (boxArray in Registry.boxes)
				{
					for (box in boxArray)
					{
						if (box.visible)
						{
							box.explode();
							box.deactivate();
						}
					}
				}
				startGameBox.activate();
				if (Registry.score > Registry.highScore)
				{
					Registry.highScore = Registry.score;
					Registry.saveHighScore(Registry.score);
					scoreText.text = "Game Over \n\nScore: " + Registry.score+"\nHigh Score: " + Registry.highScore+"\n\n\n\nPress box\nto play\nNew High Score!";
				}
				else
				{
					scoreText.text = "Game Over \n\nScore: " + Registry.score+"\nHigh Score: " + Registry.highScore+"\n\n\n\nPress box\nto play";
				}
			}
	}
	private function playBeat():Void
	{
		if (Clock.justChangedQuarter)
		{
			FlxG.sound.play(AssetPaths.kick__wav, 0.3);
			if (Clock.currentQuarterNote%2==0)
			{
				FlxG.sound.play(AssetPaths.snare__wav, 0.2);
			}

		}
		if (Clock.justChangedEighth && !Clock.justChangedQuarter)
		{
			FlxG.sound.play(AssetPaths.Laser_Shoot2__wav,0.2);
		}
	}
	
	
	override public function update():Void
	{
		
		super.update();
		if (isGameOver)
		{
			if (startGameBox.isClicked() || startGameBox.isTouched())
			{
				startGame();
			}
		}
		else
		{
			
			playBeat();
			
			if (Clock.justChangedQuarter)
			{	
				var boxes:String = "";
				var newBoxes:Array<Box> = new Array<Box>();
				for (i in 0...4)
				{
					var typeOfBox:Int = data[currentLine * 4 + i];
					boxes+=typeOfBox+",";
					if (typeOfBox > 0)
					{
						
						var newBox:Box = Registry.getAvailableBox(typeOfBox);
						newBox.activate();
						newBox.spawn(i);
						newBoxes.push(newBox);
						Registry.currentTotalLevel += typeOfBox;
					}
				}
				currentLine++;
			}
			var clickWasMade:Bool = false;
			for (boxArray in Registry.boxes)
			{
				for (box in boxArray)
				{
					if (box.visible)
					{
						box.detectClick();
						if ((isGameOver = box.y > FlxG.height) ||
							(clickWasMade = !box.visible))
						{
							//Game is over
							
							break;
						}
					}
				}
				if (clickWasMade || isGameOver) { break;}
			}
			checkForGameOver();
			updateScore();
			Clock.update();
		}	

		
	}	
}