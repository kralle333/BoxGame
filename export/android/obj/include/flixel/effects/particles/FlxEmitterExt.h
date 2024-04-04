#ifndef INCLUDED_flixel_effects_particles_FlxEmitterExt
#define INCLUDED_flixel_effects_particles_FlxEmitterExt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/effects/particles/FlxTypedEmitterExt.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxEmitterExt)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitterExt)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
namespace flixel{
namespace effects{
namespace particles{


class HXCPP_CLASS_ATTRIBUTES  FlxEmitterExt_obj : public ::flixel::effects::particles::FlxTypedEmitterExt_obj{
	public:
		typedef ::flixel::effects::particles::FlxTypedEmitterExt_obj super;
		typedef FlxEmitterExt_obj OBJ_;
		FlxEmitterExt_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxEmitterExt_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxEmitterExt_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxEmitterExt"); }

};

} // end namespace flixel
} // end namespace effects
} // end namespace particles

#endif /* INCLUDED_flixel_effects_particles_FlxEmitterExt */ 
