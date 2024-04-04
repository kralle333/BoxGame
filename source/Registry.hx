package;

import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.system.FlxSound;
import flixel.util.FlxSave;
import flixel.effects.particles.FlxEmitterExt;

/**
 * Handy, pre-built Registry class that can be used to store 
 * references to objects and other things for quick-access. Feel
 * free to simply ignore it or change it in any way you like.
 */
class Registry
{
	public static var boxTouchSounds = new Map<Int,Array<FlxSound>>();
	public static var particleEmitter:FlxEmitterExt;
	public static var boxes:Array<Array<Box>>;
	public static var boxesPresent = [1 => 0, 2 => 0, 3 => 0];
	public static var score:Int;
	public static var highScore:Int;
	public static var currentTotalLevel = 0;
	public static var level:Int = 1;
	
	public static function init():Void
	{
		
		score = 0;
		highScore = loadHighScore();
		
		//Setting up particles for clicking a box
		particleEmitter = new FlxEmitterExt();
		particleEmitter.setRotation(0, 0);
		particleEmitter.setMotion(0, 5, 0.2, 360, 200, 1.8);
		particleEmitter.makeParticles("assets/images/particles.png", 1200, 0, true, 0);
		particleEmitter.gravity = 400;
		
		//Loading all the sounds for clicking a box
		boxTouchSounds[0xFFFF0000] = new Array<FlxSound>();
		boxTouchSounds[0xFFFF0000].push(FlxG.sound.load(AssetPaths.Blip_Select1__wav));
		boxTouchSounds[0xFFFF0000].push(FlxG.sound.load(AssetPaths.Blip_Select2__wav));
		boxTouchSounds[0xFFFF0000].push(FlxG.sound.load(AssetPaths.Blip_Select3__wav));
		boxTouchSounds[0xFFFF0000].push(FlxG.sound.load(AssetPaths.Blip_Select4__wav));
		
		boxTouchSounds[0xFF0000FF] = new Array<FlxSound>();
		boxTouchSounds[0xFF0000FF].push(FlxG.sound.load(AssetPaths.Laser_Shoot1__wav));
		boxTouchSounds[0xFF0000FF].push(FlxG.sound.load(AssetPaths.Laser_Shoot2__wav));
		boxTouchSounds[0xFF0000FF].push(FlxG.sound.load(AssetPaths.Laser_Shoot3__wav));
		boxTouchSounds[0xFF0000FF].push(FlxG.sound.load(AssetPaths.Laser_Shoot4__wav));
		
		boxTouchSounds[0xFF00FF00] = new Array<FlxSound>();
		boxTouchSounds[0xFF00FF00].push(FlxG.sound.load(AssetPaths.Pickup_Coin1__wav));
		boxTouchSounds[0xFF00FF00].push(FlxG.sound.load(AssetPaths.Pickup_Coin2__wav));
		boxTouchSounds[0xFF00FF00].push(FlxG.sound.load(AssetPaths.Pickup_Coin3__wav));
		boxTouchSounds[0xFF00FF00].push(FlxG.sound.load(AssetPaths.Pickup_Coin4__wav));
		
		boxes = new Array<Array<Box>>();
		
		boxes[0] = new Array<Box>();
		boxes[1] = new Array<Box>();
		boxes[2] = new Array<Box>();
		for (i in 0...10)
		{
			boxes[0].push(new Box(0, 0, 0xFF0000FF));
			boxes[1].push(new Box(0, 0, 0xFF00FF00));
			boxes[2].push(new Box(0, 0, 0xFFFF0000));
		}
	}

	public static function getAvailableBox(type:Int):Box
	{
		type--;
		for (i in 0...10)
		{
			if (!boxes[type][i].visible)
			{
				return boxes[type][i];
			}
			
		}
		return null;
	}
	
	public static function saveHighScore(score:Int):Void
	{
		var saveGame = new FlxSave();
		saveGame.bind("HighScore");
		saveGame.data.score = score;
		saveGame.close();
	}
	public static function loadHighScore():Int
	{
		var saveGame = new FlxSave();
		var currentHighScore:Int = 0;
		if (saveGame.bind("HighScore"))
		{
			if (saveGame.data.score == null)
			{
				saveGame.data.score = 0;
			}
			currentHighScore = saveGame.data.score;
			saveGame.close();
		}
		
		return currentHighScore;
	}
}