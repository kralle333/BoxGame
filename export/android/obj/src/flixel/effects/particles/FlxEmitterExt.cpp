#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
namespace flixel{
namespace effects{
namespace particles{

Void FlxEmitterExt_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{
HX_STACK_FRAME("flixel.effects.particles.FlxEmitterExt","new",0x1c23f838,"flixel.effects.particles.FlxEmitterExt.new","flixel/effects/particles/FlxEmitterExt.hx",21,0xe4b5ebbb)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Size,"Size")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Size = __o_Size.Default(0);
{
	HX_STACK_LINE(21)
	super::__construct(X,Y,Size);
}
;
	return null();
}

//FlxEmitterExt_obj::~FlxEmitterExt_obj() { }

Dynamic FlxEmitterExt_obj::__CreateEmpty() { return  new FlxEmitterExt_obj; }
hx::ObjectPtr< FlxEmitterExt_obj > FlxEmitterExt_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{  hx::ObjectPtr< FlxEmitterExt_obj > result = new FlxEmitterExt_obj();
	result->__construct(__o_X,__o_Y,__o_Size);
	return result;}

Dynamic FlxEmitterExt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxEmitterExt_obj > result = new FlxEmitterExt_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


FlxEmitterExt_obj::FlxEmitterExt_obj()
{
}

Dynamic FlxEmitterExt_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxEmitterExt_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxEmitterExt_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxEmitterExt_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxEmitterExt_obj::__mClass,"__mClass");
};

#endif

Class FlxEmitterExt_obj::__mClass;

void FlxEmitterExt_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.particles.FlxEmitterExt"), hx::TCanCast< FlxEmitterExt_obj> ,sStaticFields,sMemberFields,
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

void FlxEmitterExt_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
