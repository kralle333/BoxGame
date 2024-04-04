package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/particles.png", "assets/images/particles.png");
			type.set ("assets/images/particles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/kick.wav", "assets/music/kick.wav");
			type.set ("assets/music/kick.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/music/snare.wav", "assets/music/snare.wav");
			type.set ("assets/music/snare.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Blip_Select1.wav", "assets/sounds/Blip_Select1.wav");
			type.set ("assets/sounds/Blip_Select1.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Blip_Select2.wav", "assets/sounds/Blip_Select2.wav");
			type.set ("assets/sounds/Blip_Select2.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Blip_Select3.wav", "assets/sounds/Blip_Select3.wav");
			type.set ("assets/sounds/Blip_Select3.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Blip_Select4.wav", "assets/sounds/Blip_Select4.wav");
			type.set ("assets/sounds/Blip_Select4.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Laser_Shoot1.wav", "assets/sounds/Laser_Shoot1.wav");
			type.set ("assets/sounds/Laser_Shoot1.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Laser_Shoot2.wav", "assets/sounds/Laser_Shoot2.wav");
			type.set ("assets/sounds/Laser_Shoot2.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Laser_Shoot3.wav", "assets/sounds/Laser_Shoot3.wav");
			type.set ("assets/sounds/Laser_Shoot3.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Laser_Shoot4.wav", "assets/sounds/Laser_Shoot4.wav");
			type.set ("assets/sounds/Laser_Shoot4.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Pickup_Coin1.wav", "assets/sounds/Pickup_Coin1.wav");
			type.set ("assets/sounds/Pickup_Coin1.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Pickup_Coin2.wav", "assets/sounds/Pickup_Coin2.wav");
			type.set ("assets/sounds/Pickup_Coin2.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Pickup_Coin3.wav", "assets/sounds/Pickup_Coin3.wav");
			type.set ("assets/sounds/Pickup_Coin3.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Pickup_Coin4.wav", "assets/sounds/Pickup_Coin4.wav");
			type.set ("assets/sounds/Pickup_Coin4.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
