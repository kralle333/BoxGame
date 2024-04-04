#ifndef INCLUDED_AssetPaths
#define INCLUDED_AssetPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AssetPaths)


class HXCPP_CLASS_ATTRIBUTES  AssetPaths_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetPaths_obj OBJ_;
		AssetPaths_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetPaths_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetPaths_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AssetPaths"); }

		static ::String data_goes_here__txt;
		static ::String images_go_here__txt;
		static ::String particles__png;
		static ::String kick__wav;
		static ::String music_goes_here__txt;
		static ::String snare__wav;
		static ::String Blip_Select1__wav;
		static ::String Blip_Select2__wav;
		static ::String Blip_Select3__wav;
		static ::String Blip_Select4__wav;
		static ::String Laser_Shoot1__wav;
		static ::String Laser_Shoot2__wav;
		static ::String Laser_Shoot3__wav;
		static ::String Laser_Shoot4__wav;
		static ::String Pickup_Coin1__wav;
		static ::String Pickup_Coin2__wav;
		static ::String Pickup_Coin3__wav;
		static ::String Pickup_Coin4__wav;
		static ::String sounds_go_here__txt;
};


#endif /* INCLUDED_AssetPaths */ 
