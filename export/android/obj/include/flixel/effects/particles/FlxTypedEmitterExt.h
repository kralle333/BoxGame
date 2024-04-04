#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitterExt
#define INCLUDED_flixel_effects_particles_FlxTypedEmitterExt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/effects/particles/FlxTypedEmitter.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitterExt)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
namespace flixel{
namespace effects{
namespace particles{


class HXCPP_CLASS_ATTRIBUTES  FlxTypedEmitterExt_obj : public ::flixel::effects::particles::FlxTypedEmitter_obj{
	public:
		typedef ::flixel::effects::particles::FlxTypedEmitter_obj super;
		typedef FlxTypedEmitterExt_obj OBJ_;
		FlxTypedEmitterExt_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Size);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxTypedEmitterExt_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTypedEmitterExt_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxTypedEmitterExt"); }

		Float angle;
		Float distance;
		Float angleRange;
		Float distanceRange;
		virtual Void setMotion( Float Angle,Float Distance,Float Lifespan,hx::Null< Float >  AngleRange,hx::Null< Float >  DistanceRange,hx::Null< Float >  LifespanRange);
		Dynamic setMotion_dyn();

		virtual Void setParticleMotion( Dynamic Particle,Float Angle,Float Distance,hx::Null< Float >  AngleRange,hx::Null< Float >  DistanceRange);
		Dynamic setParticleMotion_dyn();

		virtual Void start( hx::Null< bool >  Explode,hx::Null< Float >  Lifespan,hx::Null< Float >  Frequency,hx::Null< int >  Quantity,hx::Null< Float >  LifespanRange);

		virtual Void emitParticle( );

};

} // end namespace flixel
} // end namespace effects
} // end namespace particles

#endif /* INCLUDED_flixel_effects_particles_FlxTypedEmitterExt */ 
