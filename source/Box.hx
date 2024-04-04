package ;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxMath;
import flixel.util.FlxPoint;
import flixel.util.FlxRandom;

class Box extends FlxSprite
{
	public var boxSize:Int = Std.int(FlxG.width / 4)-1;
	public var level:Int;
	public var madeColor:Int;
	private var clickSize:Int = 80;
	private var fallSpeed:Float = 0;
	private var isScalingUp:Bool = false;

	public function new(x:Int, y:Int, colorHex:Int) 
	{
		super();
		makeGraphic(boxSize, boxSize, colorHex);
		madeColor = colorHex;
		deactivate();
		switch(colorHex)
		{
			case 0xFF0000FF:level = 1;
			case 0xFF00FF00:level = 2;
			case 0xFFFF0000:level = 3;
		}
	}
	
	public function activate()
	{
		this.visible = true;
		this.active = true;

	}
	public function deactivate()
	{
		this.visible = false;
		this.active = false;
	}
	public function spawn(lane:Int)
	{
		y = 0;
		x = lane * boxSize;
		fallSpeed = level;
		fallTimer = 0;
	}
	private function inputSquareOverlaps(x:Float, y:Float)
	{
		var f:FlxObject = new FlxObject(x - (clickSize / 2),y - (clickSize / 2), clickSize, clickSize);
		return f.overlaps(this);
	}
	
	public function isClicked():Bool
	{
		return FlxG.mouse.justPressed && inputSquareOverlaps(FlxG.mouse.x, FlxG.mouse.y);
	}
	public function isTouched():Bool
	{
		for (touch in FlxG.touches.list)
		{
			if (touch.justPressed && inputSquareOverlaps(touch.x, touch.y))
			{
				return true;
			}
		}
		return false;
	}
	
	//Call this when the box to detect and react to click
	public function detectClick():Void
	{
		if (isClicked() || isTouched())
		{
			explode();
			Registry.score+=10*level;
			Registry.boxTouchSounds[madeColor][Std.int(y / (FlxG.height / 4))].play();
			this.visible = false;
			this.active = false;
			Registry.currentTotalLevel -= level;
			Registry.boxesPresent[level] = Registry.boxesPresent[level] - 1;
		}
	}
	public function explode():Void
	{
		Registry.particleEmitter.at(this);
		Registry.particleEmitter.start(true,1, 0,100);
	}
	var fallTimer:Float = 0;
	override public function update():Void 
	{
		super.update();
		if (this.visible && fallSpeed>0)
		{
			if (Clock.justChangedQuarter)
			{
				scale.x = 1.1;
				scale.y = 1.1;
			}
			else
			{
				scale.x *= 0.99;
				scale.y *= 0.99;
			}
			fallTimer += Clock.getTimeElapsed();
			
			var newY:Float = (fallTimer / (Clock.secondsPerBeat*4)) * FlxG.height;
			y = newY;
			Registry.score+= level;
		}
		
	}
}