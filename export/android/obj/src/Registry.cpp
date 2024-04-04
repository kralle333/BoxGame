#include <hxcpp.h>

#ifndef INCLUDED_Box
#include <Box.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Registry
#include <Registry.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxEmitterExt
#include <flixel/effects/particles/FlxEmitterExt.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitterExt
#include <flixel/effects/particles/FlxTypedEmitterExt.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

Void Registry_obj::__construct()
{
	return null();
}

//Registry_obj::~Registry_obj() { }

Dynamic Registry_obj::__CreateEmpty() { return  new Registry_obj; }
hx::ObjectPtr< Registry_obj > Registry_obj::__new()
{  hx::ObjectPtr< Registry_obj > result = new Registry_obj();
	result->__construct();
	return result;}

Dynamic Registry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Registry_obj > result = new Registry_obj();
	result->__construct();
	return result;}

::haxe::ds::IntMap Registry_obj::boxTouchSounds;

::flixel::effects::particles::FlxEmitterExt Registry_obj::particleEmitter;

Array< ::Dynamic > Registry_obj::boxes;

::haxe::ds::IntMap Registry_obj::boxesPresent;

int Registry_obj::score;

int Registry_obj::highScore;

int Registry_obj::currentTotalLevel;

int Registry_obj::level;

Void Registry_obj::init( ){
{
		HX_STACK_FRAME("Registry","init",0x556c1b41,"Registry.init","Registry.hx",26,0x7cc81d01)
		HX_STACK_LINE(28)
		::Registry_obj::score = (int)0;
		HX_STACK_LINE(29)
		int _g = ::Registry_obj::loadHighScore();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		::Registry_obj::highScore = _g;
		HX_STACK_LINE(32)
		::flixel::effects::particles::FlxEmitterExt _g1 = ::flixel::effects::particles::FlxEmitterExt_obj::__new(null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(32)
		::Registry_obj::particleEmitter = _g1;
		HX_STACK_LINE(33)
		::Registry_obj::particleEmitter->setRotation((int)0,(int)0);
		HX_STACK_LINE(34)
		::Registry_obj::particleEmitter->setMotion((int)0,(int)5,0.2,(int)360,(int)200,1.8);
		HX_STACK_LINE(35)
		::Registry_obj::particleEmitter->makeParticles(HX_CSTRING("assets/images/particles.png"),(int)1200,(int)0,true,(int)0,null());
		HX_STACK_LINE(36)
		::Registry_obj::particleEmitter->set_gravity((int)400);
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			Array< ::Dynamic > v = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(39)
			::Registry_obj::boxTouchSounds->set((int)-65536,v);
			HX_STACK_LINE(39)
			v;
		}
		HX_STACK_LINE(40)
		::flixel::system::FlxSound _g2 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/Blip_Select1.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(40)
		::Registry_obj::boxTouchSounds->get((int)-65536)->__Field(HX_CSTRING("push"),true)(_g2);
		HX_STACK_LINE(41)
		::flixel::system::FlxSound _g3 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/Blip_Select2.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(41)
		::Registry_obj::boxTouchSounds->get((int)-65536)->__Field(HX_CSTRING("push"),true)(_g3);
		HX_STACK_LINE(42)
		::flixel::system::FlxSound _g4 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/Blip_Select3.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(42)
		::Registry_obj::boxTouchSounds->get((int)-65536)->__Field(HX_CSTRING("push"),true)(_g4);
		HX_STACK_LINE(43)
		::flixel::system::FlxSound _g5 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/Blip_Select4.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(43)
		::Registry_obj::boxTouchSounds->get((int)-65536)->__Field(HX_CSTRING("push"),true)(_g5);
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			Array< ::Dynamic > v = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(45)
			::Registry_obj::boxTouchSounds->set((int)-16776961,v);
			HX_STACK_LINE(45)
			v;
		}
		HX_STACK_LINE(46)
		::flixel::system::FlxSound _g6 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/Laser_Shoot1.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(46)
		::Registry_obj::boxTouchSounds->get((int)-16776961)->__Field(HX_CSTRING("push"),true)(_g6);
		HX_STACK_LINE(47)
		::flixel::system::FlxSound _g7 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/Laser_Shoot2.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(47)
		::Registry_obj::boxTouchSounds->get((int)-16776961)->__Field(HX_CSTRING("push"),true)(_g7);
		HX_STACK_LINE(48)
		::flixel::system::FlxSound _g8 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/Laser_Shoot3.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(48)
		::Registry_obj::boxTouchSounds->get((int)-16776961)->__Field(HX_CSTRING("push"),true)(_g8);
		HX_STACK_LINE(49)
		::flixel::system::FlxSound _g9 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/Laser_Shoot4.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(49)
		::Registry_obj::boxTouchSounds->get((int)-16776961)->__Field(HX_CSTRING("push"),true)(_g9);
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			Array< ::Dynamic > v = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(51)
			::Registry_obj::boxTouchSounds->set((int)-16711936,v);
			HX_STACK_LINE(51)
			v;
		}
		HX_STACK_LINE(52)
		::flixel::system::FlxSound _g10 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/Pickup_Coin1.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(52)
		::Registry_obj::boxTouchSounds->get((int)-16711936)->__Field(HX_CSTRING("push"),true)(_g10);
		HX_STACK_LINE(53)
		::flixel::system::FlxSound _g11 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/Pickup_Coin2.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(53)
		::Registry_obj::boxTouchSounds->get((int)-16711936)->__Field(HX_CSTRING("push"),true)(_g11);
		HX_STACK_LINE(54)
		::flixel::system::FlxSound _g12 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/Pickup_Coin3.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(54)
		::Registry_obj::boxTouchSounds->get((int)-16711936)->__Field(HX_CSTRING("push"),true)(_g12);
		HX_STACK_LINE(55)
		::flixel::system::FlxSound _g13 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/Pickup_Coin4.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(55)
		::Registry_obj::boxTouchSounds->get((int)-16711936)->__Field(HX_CSTRING("push"),true)(_g13);
		HX_STACK_LINE(57)
		Array< ::Dynamic > _g14 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(57)
		::Registry_obj::boxes = _g14;
		HX_STACK_LINE(59)
		::Registry_obj::boxes[(int)0] = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(60)
		::Registry_obj::boxes[(int)1] = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(61)
		::Registry_obj::boxes[(int)2] = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			int _g15 = (int)0;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(62)
			while((true)){
				HX_STACK_LINE(62)
				if ((!(((_g15 < (int)10))))){
					HX_STACK_LINE(62)
					break;
				}
				HX_STACK_LINE(62)
				int i = (_g15)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(64)
				::Box _g151 = ::Box_obj::__new((int)0,(int)0,(int)-16776961);		HX_STACK_VAR(_g151,"_g151");
				HX_STACK_LINE(64)
				::Registry_obj::boxes->__get((int)0).StaticCast< Array< ::Dynamic > >()->push(_g151);
				HX_STACK_LINE(65)
				::Box _g16 = ::Box_obj::__new((int)0,(int)0,(int)-16711936);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(65)
				::Registry_obj::boxes->__get((int)1).StaticCast< Array< ::Dynamic > >()->push(_g16);
				HX_STACK_LINE(66)
				::Box _g17 = ::Box_obj::__new((int)0,(int)0,(int)-65536);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(66)
				::Registry_obj::boxes->__get((int)2).StaticCast< Array< ::Dynamic > >()->push(_g17);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Registry_obj,init,(void))

::Box Registry_obj::getAvailableBox( int type){
	HX_STACK_FRAME("Registry","getAvailableBox",0x1c3210e7,"Registry.getAvailableBox","Registry.hx",71,0x7cc81d01)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(72)
	(type)--;
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		while((true)){
			HX_STACK_LINE(73)
			if ((!(((_g < (int)10))))){
				HX_STACK_LINE(73)
				break;
			}
			HX_STACK_LINE(73)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(75)
			if ((!(::Registry_obj::boxes->__get(type).StaticCast< Array< ::Dynamic > >()->__get(i).StaticCast< ::Box >()->visible))){
				HX_STACK_LINE(77)
				return ::Registry_obj::boxes->__get(type).StaticCast< Array< ::Dynamic > >()->__get(i).StaticCast< ::Box >();
			}
		}
	}
	HX_STACK_LINE(81)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Registry_obj,getAvailableBox,return )

Void Registry_obj::saveHighScore( int score){
{
		HX_STACK_FRAME("Registry","saveHighScore",0x1a393f42,"Registry.saveHighScore","Registry.hx",85,0x7cc81d01)
		HX_STACK_ARG(score,"score")
		HX_STACK_LINE(86)
		::flixel::util::FlxSave saveGame = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(saveGame,"saveGame");
		HX_STACK_LINE(87)
		saveGame->bind(HX_CSTRING("HighScore"));
		HX_STACK_LINE(88)
		saveGame->data->__FieldRef(HX_CSTRING("score")) = score;
		HX_STACK_LINE(89)
		saveGame->close(null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Registry_obj,saveHighScore,(void))

int Registry_obj::loadHighScore( ){
	HX_STACK_FRAME("Registry","loadHighScore",0x77e48b39,"Registry.loadHighScore","Registry.hx",92,0x7cc81d01)
	HX_STACK_LINE(93)
	::flixel::util::FlxSave saveGame = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(saveGame,"saveGame");
	HX_STACK_LINE(94)
	int currentHighScore = (int)0;		HX_STACK_VAR(currentHighScore,"currentHighScore");
	HX_STACK_LINE(95)
	if ((saveGame->bind(HX_CSTRING("HighScore")))){
		HX_STACK_LINE(97)
		if (((saveGame->data->__Field(HX_CSTRING("score"),true) == null()))){
			HX_STACK_LINE(99)
			saveGame->data->__FieldRef(HX_CSTRING("score")) = (int)0;
		}
		HX_STACK_LINE(101)
		currentHighScore = saveGame->data->__Field(HX_CSTRING("score"),true);
		HX_STACK_LINE(102)
		saveGame->close(null(),null());
	}
	HX_STACK_LINE(105)
	return currentHighScore;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Registry_obj,loadHighScore,return )


Registry_obj::Registry_obj()
{
}

Dynamic Registry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"boxes") ) { return boxes; }
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"highScore") ) { return highScore; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"boxesPresent") ) { return boxesPresent; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"saveHighScore") ) { return saveHighScore_dyn(); }
		if (HX_FIELD_EQ(inName,"loadHighScore") ) { return loadHighScore_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"boxTouchSounds") ) { return boxTouchSounds; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"particleEmitter") ) { return particleEmitter; }
		if (HX_FIELD_EQ(inName,"getAvailableBox") ) { return getAvailableBox_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentTotalLevel") ) { return currentTotalLevel; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Registry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"boxes") ) { boxes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"highScore") ) { highScore=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"boxesPresent") ) { boxesPresent=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"boxTouchSounds") ) { boxTouchSounds=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"particleEmitter") ) { particleEmitter=inValue.Cast< ::flixel::effects::particles::FlxEmitterExt >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentTotalLevel") ) { currentTotalLevel=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Registry_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("boxTouchSounds"),
	HX_CSTRING("particleEmitter"),
	HX_CSTRING("boxes"),
	HX_CSTRING("boxesPresent"),
	HX_CSTRING("score"),
	HX_CSTRING("highScore"),
	HX_CSTRING("currentTotalLevel"),
	HX_CSTRING("level"),
	HX_CSTRING("init"),
	HX_CSTRING("getAvailableBox"),
	HX_CSTRING("saveHighScore"),
	HX_CSTRING("loadHighScore"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Registry_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Registry_obj::boxTouchSounds,"boxTouchSounds");
	HX_MARK_MEMBER_NAME(Registry_obj::particleEmitter,"particleEmitter");
	HX_MARK_MEMBER_NAME(Registry_obj::boxes,"boxes");
	HX_MARK_MEMBER_NAME(Registry_obj::boxesPresent,"boxesPresent");
	HX_MARK_MEMBER_NAME(Registry_obj::score,"score");
	HX_MARK_MEMBER_NAME(Registry_obj::highScore,"highScore");
	HX_MARK_MEMBER_NAME(Registry_obj::currentTotalLevel,"currentTotalLevel");
	HX_MARK_MEMBER_NAME(Registry_obj::level,"level");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Registry_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Registry_obj::boxTouchSounds,"boxTouchSounds");
	HX_VISIT_MEMBER_NAME(Registry_obj::particleEmitter,"particleEmitter");
	HX_VISIT_MEMBER_NAME(Registry_obj::boxes,"boxes");
	HX_VISIT_MEMBER_NAME(Registry_obj::boxesPresent,"boxesPresent");
	HX_VISIT_MEMBER_NAME(Registry_obj::score,"score");
	HX_VISIT_MEMBER_NAME(Registry_obj::highScore,"highScore");
	HX_VISIT_MEMBER_NAME(Registry_obj::currentTotalLevel,"currentTotalLevel");
	HX_VISIT_MEMBER_NAME(Registry_obj::level,"level");
};

#endif

Class Registry_obj::__mClass;

void Registry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Registry"), hx::TCanCast< Registry_obj> ,sStaticFields,sMemberFields,
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

void Registry_obj::__boot()
{
	boxTouchSounds= ::haxe::ds::IntMap_obj::__new();
struct _Function_0_1{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Registry.hx",19,0x7cc81d01)
		{
			HX_STACK_LINE(19)
			::haxe::ds::IntMap _g = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(19)
			_g->set((int)1,(int)0);
			HX_STACK_LINE(19)
			_g->set((int)2,(int)0);
			HX_STACK_LINE(19)
			_g->set((int)3,(int)0);
			HX_STACK_LINE(19)
			return _g;
		}
		return null();
	}
};
	boxesPresent= _Function_0_1::Block();
	currentTotalLevel= (int)0;
	level= (int)1;
}

