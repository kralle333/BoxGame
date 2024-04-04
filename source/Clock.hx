package ;
import flixel.FlxG;

class Clock
{

	public static var bpm:Int = 0;
	public static var secondsPerBeat:Float = 0;
	public static var beatTimer:Float = 0;
	
	public static var measureCount:Int;
	public static var timeSignature;
	
	public static var currentQuarterNote:Int;
	public static var previousQuarterNote:Int;
	public static var justChangedQuarter:Bool = true;
	
	public static var currentEighthNote:Int;
	public static var previousEighthNote:Int;
	public static var justChangedEighth:Bool = true;
	
	public static var currentSixteenthNote:Int;
	public static var previousSixteenthNote:Int;
	public static var justChangedSixteenth:Bool = true;
	
	public static var justChangedMeasure:Bool = true;
	public static var previousBeatTimer:Float;
	
	public static function getTimeElapsed():Float
	{
		return beatTimer - previousBeatTimer;
	}
	
	public static function initialize(beatsPerMinute:Int,timeSignatureAbove:Int, timeSignatureBelow:Int) 
	{
		bpm = beatsPerMinute;
		secondsPerBeat = 60 / beatsPerMinute;
		timeSignature = [timeSignatureAbove, timeSignatureBelow];
	}
	
	public static function update()
	{
		previousBeatTimer = beatTimer;
		beatTimer += FlxG.elapsed;
		justChangedQuarter = false;
		justChangedEighth = false;
		justChangedSixteenth = false;
		justChangedMeasure = false;
		
		currentQuarterNote = Std.int(beatTimer / (secondsPerBeat));
		currentEighthNote = Std.int(beatTimer / (secondsPerBeat / 2));
		currentSixteenthNote = Std.int(beatTimer / (secondsPerBeat / 4));
		
		if (currentQuarterNote >= 4)
		{
			beatTimer = 0;
			previousBeatTimer = 0;
			measureCount++;
			justChangedMeasure = true;
			
		}
		else
		{
			if (previousQuarterNote != currentQuarterNote) 
			{ 
				justChangedQuarter = true;
			}
			if (previousEighthNote != currentEighthNote)
			{
				justChangedEighth = true;
			}
			if (previousSixteenthNote != currentSixteenthNote)
			{
				justChangedSixteenth = true;
			}
		}
		
		
		previousQuarterNote = currentQuarterNote;
		previousEighthNote = currentEighthNote;
		previousSixteenthNote = currentSixteenthNote;
		
	}
}