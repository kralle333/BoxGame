#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

Void AssetPaths_obj::__construct()
{
	return null();
}

//AssetPaths_obj::~AssetPaths_obj() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return  new AssetPaths_obj; }
hx::ObjectPtr< AssetPaths_obj > AssetPaths_obj::__new()
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::particles__png;

::String AssetPaths_obj::kick__wav;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::snare__wav;

::String AssetPaths_obj::Blip_Select1__wav;

::String AssetPaths_obj::Blip_Select2__wav;

::String AssetPaths_obj::Blip_Select3__wav;

::String AssetPaths_obj::Blip_Select4__wav;

::String AssetPaths_obj::Laser_Shoot1__wav;

::String AssetPaths_obj::Laser_Shoot2__wav;

::String AssetPaths_obj::Laser_Shoot3__wav;

::String AssetPaths_obj::Laser_Shoot4__wav;

::String AssetPaths_obj::Pickup_Coin1__wav;

::String AssetPaths_obj::Pickup_Coin2__wav;

::String AssetPaths_obj::Pickup_Coin3__wav;

::String AssetPaths_obj::Pickup_Coin4__wav;

::String AssetPaths_obj::sounds_go_here__txt;


AssetPaths_obj::AssetPaths_obj()
{
}

Dynamic AssetPaths_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic AssetPaths_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetPaths_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("data_goes_here__txt"),
	HX_CSTRING("images_go_here__txt"),
	HX_CSTRING("particles__png"),
	HX_CSTRING("kick__wav"),
	HX_CSTRING("music_goes_here__txt"),
	HX_CSTRING("snare__wav"),
	HX_CSTRING("Blip_Select1__wav"),
	HX_CSTRING("Blip_Select2__wav"),
	HX_CSTRING("Blip_Select3__wav"),
	HX_CSTRING("Blip_Select4__wav"),
	HX_CSTRING("Laser_Shoot1__wav"),
	HX_CSTRING("Laser_Shoot2__wav"),
	HX_CSTRING("Laser_Shoot3__wav"),
	HX_CSTRING("Laser_Shoot4__wav"),
	HX_CSTRING("Pickup_Coin1__wav"),
	HX_CSTRING("Pickup_Coin2__wav"),
	HX_CSTRING("Pickup_Coin3__wav"),
	HX_CSTRING("Pickup_Coin4__wav"),
	HX_CSTRING("sounds_go_here__txt"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::particles__png,"particles__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::kick__wav,"kick__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::snare__wav,"snare__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Blip_Select1__wav,"Blip_Select1__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Blip_Select2__wav,"Blip_Select2__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Blip_Select3__wav,"Blip_Select3__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Blip_Select4__wav,"Blip_Select4__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Laser_Shoot1__wav,"Laser_Shoot1__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Laser_Shoot2__wav,"Laser_Shoot2__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Laser_Shoot3__wav,"Laser_Shoot3__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Laser_Shoot4__wav,"Laser_Shoot4__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Pickup_Coin1__wav,"Pickup_Coin1__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Pickup_Coin2__wav,"Pickup_Coin2__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Pickup_Coin3__wav,"Pickup_Coin3__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Pickup_Coin4__wav,"Pickup_Coin4__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::particles__png,"particles__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::kick__wav,"kick__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::snare__wav,"snare__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Blip_Select1__wav,"Blip_Select1__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Blip_Select2__wav,"Blip_Select2__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Blip_Select3__wav,"Blip_Select3__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Blip_Select4__wav,"Blip_Select4__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Laser_Shoot1__wav,"Laser_Shoot1__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Laser_Shoot2__wav,"Laser_Shoot2__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Laser_Shoot3__wav,"Laser_Shoot3__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Laser_Shoot4__wav,"Laser_Shoot4__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Pickup_Coin1__wav,"Pickup_Coin1__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Pickup_Coin2__wav,"Pickup_Coin2__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Pickup_Coin3__wav,"Pickup_Coin3__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Pickup_Coin4__wav,"Pickup_Coin4__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#endif

Class AssetPaths_obj::__mClass;

void AssetPaths_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("AssetPaths"), hx::TCanCast< AssetPaths_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void AssetPaths_obj::__boot()
{
	data_goes_here__txt= HX_CSTRING("assets/data/data-goes-here.txt");
	images_go_here__txt= HX_CSTRING("assets/images/images-go-here.txt");
	particles__png= HX_CSTRING("assets/images/particles.png");
	kick__wav= HX_CSTRING("assets/music/kick.wav");
	music_goes_here__txt= HX_CSTRING("assets/music/music-goes-here.txt");
	snare__wav= HX_CSTRING("assets/music/snare.wav");
	Blip_Select1__wav= HX_CSTRING("assets/sounds/Blip_Select1.wav");
	Blip_Select2__wav= HX_CSTRING("assets/sounds/Blip_Select2.wav");
	Blip_Select3__wav= HX_CSTRING("assets/sounds/Blip_Select3.wav");
	Blip_Select4__wav= HX_CSTRING("assets/sounds/Blip_Select4.wav");
	Laser_Shoot1__wav= HX_CSTRING("assets/sounds/Laser_Shoot1.wav");
	Laser_Shoot2__wav= HX_CSTRING("assets/sounds/Laser_Shoot2.wav");
	Laser_Shoot3__wav= HX_CSTRING("assets/sounds/Laser_Shoot3.wav");
	Laser_Shoot4__wav= HX_CSTRING("assets/sounds/Laser_Shoot4.wav");
	Pickup_Coin1__wav= HX_CSTRING("assets/sounds/Pickup_Coin1.wav");
	Pickup_Coin2__wav= HX_CSTRING("assets/sounds/Pickup_Coin2.wav");
	Pickup_Coin3__wav= HX_CSTRING("assets/sounds/Pickup_Coin3.wav");
	Pickup_Coin4__wav= HX_CSTRING("assets/sounds/Pickup_Coin4.wav");
	sounds_go_here__txt= HX_CSTRING("assets/sounds/sounds-go-here.txt");
}

