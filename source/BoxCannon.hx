package ;
import flixel.util.FlxRandom;
import flixel.util.FlxTimer;


class BoxCannon
{
	public var canShoot:Bool = false;
	
	
	public function new(x:Int, y:Int) 
	{
		
	}
	
	public function cooldownFinished(timer:FlxTimer):Void
	{
		canShoot = true;
	}
	
	public function shoot(type:Int)
	{
		var availableBox:Box = Registry.getAvailableBox(type);
		availableBox.spawn(
	}
	
	
	
}