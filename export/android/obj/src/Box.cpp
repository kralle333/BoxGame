#include <hxcpp.h>

#ifndef INCLUDED_Box
#include <Box.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Registry
#include <Registry.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

Void Box_obj::__construct(int x,int y,int colorHex)
{
HX_STACK_FRAME("Box","new",0x50f6e85d,"Box.new","Box.hx",10,0x9c7d11b3)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(colorHex,"colorHex")
{
	HX_STACK_LINE(91)
	this->fallTimer = (int)0;
	HX_STACK_LINE(16)
	this->fallSpeed = (int)0;
	HX_STACK_LINE(15)
	this->clickSize = (int)100;
	HX_STACK_LINE(12)
	this->boxSize = ::Std_obj::_int((Float(::flixel::FlxG_obj::width) / Float((int)4)));
	HX_STACK_LINE(20)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(21)
	this->makeGraphic(this->boxSize,this->boxSize,colorHex,null(),null());
	HX_STACK_LINE(22)
	this->madeColor = colorHex;
	HX_STACK_LINE(23)
	this->deactivate();
	HX_STACK_LINE(24)
	switch( (int)(colorHex)){
		case (int)-16776961: {
			HX_STACK_LINE(26)
			this->level = (int)1;
		}
		;break;
		case (int)-16711936: {
			HX_STACK_LINE(27)
			this->level = (int)2;
		}
		;break;
		case (int)-65536: {
			HX_STACK_LINE(28)
			this->level = (int)3;
		}
		;break;
	}
}
;
	return null();
}

//Box_obj::~Box_obj() { }

Dynamic Box_obj::__CreateEmpty() { return  new Box_obj; }
hx::ObjectPtr< Box_obj > Box_obj::__new(int x,int y,int colorHex)
{  hx::ObjectPtr< Box_obj > result = new Box_obj();
	result->__construct(x,y,colorHex);
	return result;}

Dynamic Box_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Box_obj > result = new Box_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Box_obj::activate( ){
{
		HX_STACK_FRAME("Box","activate",0xc3bfee96,"Box.activate","Box.hx",33,0x9c7d11b3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		this->set_visible(true);
		HX_STACK_LINE(35)
		this->set_active(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,activate,(void))

Void Box_obj::deactivate( ){
{
		HX_STACK_FRAME("Box","deactivate",0xa4d9edd7,"Box.deactivate","Box.hx",39,0x9c7d11b3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		this->set_visible(false);
		HX_STACK_LINE(41)
		this->set_active(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,deactivate,(void))

Void Box_obj::spawn( int lane){
{
		HX_STACK_FRAME("Box","spawn",0x92fd6f78,"Box.spawn","Box.hx",44,0x9c7d11b3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lane,"lane")
		HX_STACK_LINE(45)
		this->set_y((int)0);
		HX_STACK_LINE(46)
		this->set_x((lane * this->boxSize));
		HX_STACK_LINE(47)
		this->fallSpeed = this->level;
		HX_STACK_LINE(48)
		this->fallTimer = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,spawn,(void))

bool Box_obj::inputSquareOverlaps( Float x,Float y){
	HX_STACK_FRAME("Box","inputSquareOverlaps",0xeaaa2c70,"Box.inputSquareOverlaps","Box.hx",51,0x9c7d11b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(52)
	::flixel::FlxObject f = ::flixel::FlxObject_obj::__new((x - (Float(this->clickSize) / Float((int)2))),(y - (Float(this->clickSize) / Float((int)2))),this->clickSize,this->clickSize);		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(53)
	return f->overlaps(hx::ObjectPtr<OBJ_>(this),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC2(Box_obj,inputSquareOverlaps,return )

bool Box_obj::isClicked( ){
	HX_STACK_FRAME("Box","isClicked",0x716fa79a,"Box.isClicked","Box.hx",58,0x9c7d11b3)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Box.hx",58,0x9c7d11b3)
			{
				HX_STACK_LINE(58)
				::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(58)
				return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
			}
			return null();
		}
	};
	HX_STACK_LINE(58)
	if ((_Function_1_1::Block())){
		HX_STACK_LINE(58)
		return this->inputSquareOverlaps(::flixel::FlxG_obj::mouse->x,::flixel::FlxG_obj::mouse->y);
	}
	else{
		HX_STACK_LINE(58)
		return false;
	}
	HX_STACK_LINE(58)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,isClicked,return )

bool Box_obj::isTouched( ){
	HX_STACK_FRAME("Box","isTouched",0x503b4ed1,"Box.isTouched","Box.hx",61,0x9c7d11b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		while((true)){
			HX_STACK_LINE(62)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(62)
				break;
			}
			HX_STACK_LINE(62)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(62)
			++(_g);
			HX_STACK_LINE(64)
			if (((  (((touch->_current == (int)2))) ? bool(this->inputSquareOverlaps(touch->x,touch->y)) : bool(false) ))){
				HX_STACK_LINE(66)
				return true;
			}
		}
	}
	HX_STACK_LINE(69)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,isTouched,return )

Void Box_obj::detectClick( ){
{
		HX_STACK_FRAME("Box","detectClick",0x00f35be2,"Box.detectClick","Box.hx",75,0x9c7d11b3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		if (((  ((!(this->isClicked()))) ? bool(this->isTouched()) : bool(true) ))){
			HX_STACK_LINE(77)
			this->explode();
			HX_STACK_LINE(78)
			hx::AddEq(::Registry_obj::score,((int)10 * this->level));
			HX_STACK_LINE(79)
			Array< ::Dynamic > _g = ::Registry_obj::boxTouchSounds->get(this->madeColor);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(79)
			int _g1 = ::Std_obj::_int((Float(this->y) / Float(((Float(::flixel::FlxG_obj::height) / Float((int)4))))));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(79)
			_g->__get(_g1).StaticCast< ::flixel::system::FlxSound >()->play(null());
			HX_STACK_LINE(80)
			this->set_visible(false);
			HX_STACK_LINE(81)
			this->set_active(false);
			HX_STACK_LINE(82)
			hx::SubEq(::Registry_obj::currentTotalLevel,this->level);
			HX_STACK_LINE(83)
			{
				HX_STACK_LINE(83)
				Dynamic _g2 = ::Registry_obj::boxesPresent->get(this->level);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(83)
				int v = (_g2 - (int)1);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(83)
				::Registry_obj::boxesPresent->set(this->level,v);
				HX_STACK_LINE(83)
				v;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,detectClick,(void))

Void Box_obj::explode( ){
{
		HX_STACK_FRAME("Box","explode",0xe93f165e,"Box.explode","Box.hx",87,0x9c7d11b3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		::Registry_obj::particleEmitter->at(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(89)
		::Registry_obj::particleEmitter->start(true,(int)1,(int)0,(int)100,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,explode,(void))

Void Box_obj::update( ){
{
		HX_STACK_FRAME("Box","update",0xd965ca2c,"Box.update","Box.hx",93,0x9c7d11b3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		this->super::update();
		HX_STACK_LINE(95)
		if (((bool(this->visible) && bool((this->fallSpeed > (int)0))))){
			HX_STACK_LINE(97)
			hx::AddEq(this->fallTimer,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(99)
			Float newY = ((Float(this->fallTimer) / Float(((Float((::PlayState_obj::secondsPerBeat * (int)3)) / Float(this->level))))) * ::flixel::FlxG_obj::height);		HX_STACK_VAR(newY,"newY");
			HX_STACK_LINE(100)
			this->set_y(newY);
			HX_STACK_LINE(101)
			hx::AddEq(::Registry_obj::score,this->level);
		}
	}
return null();
}



Box_obj::Box_obj()
{
}

Dynamic Box_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		if (HX_FIELD_EQ(inName,"spawn") ) { return spawn_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"boxSize") ) { return boxSize; }
		if (HX_FIELD_EQ(inName,"explode") ) { return explode_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"madeColor") ) { return madeColor; }
		if (HX_FIELD_EQ(inName,"clickSize") ) { return clickSize; }
		if (HX_FIELD_EQ(inName,"fallSpeed") ) { return fallSpeed; }
		if (HX_FIELD_EQ(inName,"isClicked") ) { return isClicked_dyn(); }
		if (HX_FIELD_EQ(inName,"isTouched") ) { return isTouched_dyn(); }
		if (HX_FIELD_EQ(inName,"fallTimer") ) { return fallTimer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"detectClick") ) { return detectClick_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"inputSquareOverlaps") ) { return inputSquareOverlaps_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Box_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"boxSize") ) { boxSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"madeColor") ) { madeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clickSize") ) { clickSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fallSpeed") ) { fallSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fallTimer") ) { fallTimer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Box_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("boxSize"));
	outFields->push(HX_CSTRING("level"));
	outFields->push(HX_CSTRING("madeColor"));
	outFields->push(HX_CSTRING("clickSize"));
	outFields->push(HX_CSTRING("fallSpeed"));
	outFields->push(HX_CSTRING("fallTimer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Box_obj,boxSize),HX_CSTRING("boxSize")},
	{hx::fsInt,(int)offsetof(Box_obj,level),HX_CSTRING("level")},
	{hx::fsInt,(int)offsetof(Box_obj,madeColor),HX_CSTRING("madeColor")},
	{hx::fsInt,(int)offsetof(Box_obj,clickSize),HX_CSTRING("clickSize")},
	{hx::fsFloat,(int)offsetof(Box_obj,fallSpeed),HX_CSTRING("fallSpeed")},
	{hx::fsFloat,(int)offsetof(Box_obj,fallTimer),HX_CSTRING("fallTimer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("boxSize"),
	HX_CSTRING("level"),
	HX_CSTRING("madeColor"),
	HX_CSTRING("clickSize"),
	HX_CSTRING("fallSpeed"),
	HX_CSTRING("activate"),
	HX_CSTRING("deactivate"),
	HX_CSTRING("spawn"),
	HX_CSTRING("inputSquareOverlaps"),
	HX_CSTRING("isClicked"),
	HX_CSTRING("isTouched"),
	HX_CSTRING("detectClick"),
	HX_CSTRING("explode"),
	HX_CSTRING("fallTimer"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Box_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Box_obj::__mClass,"__mClass");
};

#endif

Class Box_obj::__mClass;

void Box_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Box"), hx::TCanCast< Box_obj> ,sStaticFields,sMemberFields,
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

void Box_obj::__boot()
{
}

