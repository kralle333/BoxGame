#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_Bounds
#include <flixel/effects/particles/Bounds.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void FlxTypedEmitterExt_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Size)
{
HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitterExt","new",0x88969d7c,"flixel.effects.particles.FlxTypedEmitterExt.new","flixel/effects/particles/FlxTypedEmitterExt.hx",41,0x5968d511)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Size,"Size")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Size = __o_Size.Default(0);
{
	HX_STACK_LINE(42)
	int _g = ::Std_obj::_int(Size);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(42)
	super::__construct(X,Y,_g);
	HX_STACK_LINE(45)
	this->setMotion((int)0,(int)0,0.5,(int)360,(int)100,1.5);
}
;
	return null();
}

//FlxTypedEmitterExt_obj::~FlxTypedEmitterExt_obj() { }

Dynamic FlxTypedEmitterExt_obj::__CreateEmpty() { return  new FlxTypedEmitterExt_obj; }
hx::ObjectPtr< FlxTypedEmitterExt_obj > FlxTypedEmitterExt_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Size)
{  hx::ObjectPtr< FlxTypedEmitterExt_obj > result = new FlxTypedEmitterExt_obj();
	result->__construct(__o_X,__o_Y,__o_Size);
	return result;}

Dynamic FlxTypedEmitterExt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedEmitterExt_obj > result = new FlxTypedEmitterExt_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FlxTypedEmitterExt_obj::setMotion( Float Angle,Float Distance,Float Lifespan,hx::Null< Float >  __o_AngleRange,hx::Null< Float >  __o_DistanceRange,hx::Null< Float >  __o_LifespanRange){
Float AngleRange = __o_AngleRange.Default(0);
Float DistanceRange = __o_DistanceRange.Default(0);
Float LifespanRange = __o_LifespanRange.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitterExt","setMotion",0x8d388594,"flixel.effects.particles.FlxTypedEmitterExt.setMotion","flixel/effects/particles/FlxTypedEmitterExt.hx",59,0x5968d511)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(Lifespan,"Lifespan")
	HX_STACK_ARG(AngleRange,"AngleRange")
	HX_STACK_ARG(DistanceRange,"DistanceRange")
	HX_STACK_ARG(LifespanRange,"LifespanRange")
{
		HX_STACK_LINE(60)
		this->angle = (Angle * 0.017453293);
		HX_STACK_LINE(61)
		this->distance = Distance;
		HX_STACK_LINE(62)
		this->life->min = Lifespan;
		HX_STACK_LINE(63)
		this->life->max = (Lifespan + LifespanRange);
		HX_STACK_LINE(64)
		this->angleRange = (AngleRange * 0.017453293);
		HX_STACK_LINE(65)
		this->distanceRange = DistanceRange;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxTypedEmitterExt_obj,setMotion,(void))

Void FlxTypedEmitterExt_obj::setParticleMotion( Dynamic Particle,Float Angle,Float Distance,hx::Null< Float >  __o_AngleRange,hx::Null< Float >  __o_DistanceRange){
Float AngleRange = __o_AngleRange.Default(0);
Float DistanceRange = __o_DistanceRange.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitterExt","setParticleMotion",0x58fabe7a,"flixel.effects.particles.FlxTypedEmitterExt.setParticleMotion","flixel/effects/particles/FlxTypedEmitterExt.hx",80,0x5968d511)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Particle,"Particle")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(AngleRange,"AngleRange")
	HX_STACK_ARG(DistanceRange,"DistanceRange")
{
		HX_STACK_LINE(82)
		Float a = ::flixel::util::FlxRandom_obj::floatRanged(Angle,(Angle + AngleRange),null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(83)
		Float d = ::flixel::util::FlxRandom_obj::floatRanged(Distance,(Distance + DistanceRange),null());		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(85)
		Float _g = ::Math_obj::cos(a);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(85)
		Float _g1 = (_g * d);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(85)
		Particle->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("set_x"),true)(_g1);
		HX_STACK_LINE(86)
		Float _g2 = ::Math_obj::sin(a);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(86)
		Float _g3 = (_g2 * d);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(86)
		Particle->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("set_y"),true)(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTypedEmitterExt_obj,setParticleMotion,(void))

Void FlxTypedEmitterExt_obj::start( hx::Null< bool >  __o_Explode,hx::Null< Float >  __o_Lifespan,hx::Null< Float >  __o_Frequency,hx::Null< int >  __o_Quantity,hx::Null< Float >  __o_LifespanRange){
bool Explode = __o_Explode.Default(true);
Float Lifespan = __o_Lifespan.Default(0);
Float Frequency = __o_Frequency.Default(0.1);
int Quantity = __o_Quantity.Default(0);
Float LifespanRange = __o_LifespanRange.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitterExt","start",0xbc70c07e,"flixel.effects.particles.FlxTypedEmitterExt.start","flixel/effects/particles/FlxTypedEmitterExt.hx",99,0x5968d511)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Explode,"Explode")
	HX_STACK_ARG(Lifespan,"Lifespan")
	HX_STACK_ARG(Frequency,"Frequency")
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(LifespanRange,"LifespanRange")
{
		HX_STACK_LINE(100)
		this->super::start(Explode,Lifespan,Frequency,Quantity,LifespanRange);
		HX_STACK_LINE(104)
		if ((Explode)){
			HX_STACK_LINE(106)
			this->on = false;
			HX_STACK_LINE(108)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(109)
			int l = this->_quantity;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(111)
			if (((bool((l <= (int)0)) || bool((l > this->members->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(113)
				l = this->members->__Field(HX_CSTRING("length"),true);
			}
			HX_STACK_LINE(116)
			while((true)){
				HX_STACK_LINE(116)
				if ((!(((i < l))))){
					HX_STACK_LINE(116)
					break;
				}
				HX_STACK_LINE(118)
				this->emitParticle();
				HX_STACK_LINE(119)
				(i)++;
			}
			HX_STACK_LINE(122)
			this->_quantity = (int)0;
		}
	}
return null();
}


Void FlxTypedEmitterExt_obj::emitParticle( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitterExt","emitParticle",0x930c531d,"flixel.effects.particles.FlxTypedEmitterExt.emitParticle","flixel/effects/particles/FlxTypedEmitterExt.hx",130,0x5968d511)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		Dynamic particle = this->recycle(this->_particleClass,null(),null(),null());		HX_STACK_VAR(particle,"particle");
		HX_STACK_LINE(132)
		particle->__FieldRef(HX_CSTRING("elasticity")) = this->bounce;
		HX_STACK_LINE(134)
		Float _g = this->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(134)
		Float _g1 = particle->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(134)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(134)
		int _g3 = (int(_g2) >> int((int)1));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(134)
		Float _g4 = (_g - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(134)
		int _g5 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(134)
		Float _g6 = (Float(_g5) / Float((int)2147483647));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(134)
		Float _g7 = this->get_width();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(134)
		Float _g8 = (_g6 * _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(134)
		Float _g9 = (_g4 + _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(134)
		Float _g10 = this->get_y();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(134)
		Float _g11 = particle->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(134)
		int _g12 = ::Std_obj::_int(_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(134)
		int _g13 = (int(_g12) >> int((int)1));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(134)
		Float _g14 = (_g10 - _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(134)
		int _g15 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(134)
		Float _g16 = (Float(_g15) / Float((int)2147483647));		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(134)
		Float _g17 = this->get_height();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(134)
		Float _g18 = (_g16 * _g17);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(134)
		Float _g19 = (_g14 + _g18);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(134)
		particle->__Field(HX_CSTRING("reset"),true)(_g9,_g19);
		HX_STACK_LINE(135)
		particle->__Field(HX_CSTRING("set_visible"),true)(true);
		HX_STACK_LINE(137)
		if (((this->life->min != this->life->max))){
			HX_STACK_LINE(139)
			int _g20 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(139)
			Float _g21 = (Float(_g20) / Float((int)2147483647));		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(139)
			Float _g22 = (_g21 * ((this->life->max - this->life->min)));		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(139)
			Float _g23 = (this->life->min + _g22);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(139)
			Float _g24 = particle->__FieldRef(HX_CSTRING("maxLifespan")) = _g23;		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(139)
			particle->__FieldRef(HX_CSTRING("lifespan")) = _g24;
		}
		else{
			HX_STACK_LINE(143)
			Float _g25 = particle->__FieldRef(HX_CSTRING("maxLifespan")) = this->life->min;		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(143)
			particle->__FieldRef(HX_CSTRING("lifespan")) = _g25;
		}
		HX_STACK_LINE(146)
		if (((this->startAlpha->min != this->startAlpha->max))){
			HX_STACK_LINE(148)
			int _g26 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(148)
			Float _g27 = (Float(_g26) / Float((int)2147483647));		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(148)
			Float _g28 = (_g27 * ((this->startAlpha->max - this->startAlpha->min)));		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(148)
			Float _g29 = (this->startAlpha->min + _g28);		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(148)
			particle->__FieldRef(HX_CSTRING("startAlpha")) = _g29;
		}
		else{
			HX_STACK_LINE(152)
			particle->__FieldRef(HX_CSTRING("startAlpha")) = this->startAlpha->min;
		}
		HX_STACK_LINE(154)
		particle->__Field(HX_CSTRING("set_alpha"),true)(particle->__Field(HX_CSTRING("startAlpha"),true));
		HX_STACK_LINE(156)
		Float particleEndAlpha = this->endAlpha->min;		HX_STACK_VAR(particleEndAlpha,"particleEndAlpha");
		HX_STACK_LINE(157)
		if (((this->endAlpha->min != this->endAlpha->max))){
			HX_STACK_LINE(159)
			int _g30 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(159)
			Float _g31 = (Float(_g30) / Float((int)2147483647));		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(159)
			Float _g32 = (_g31 * ((this->endAlpha->max - this->endAlpha->min)));		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(159)
			Float _g33 = (this->endAlpha->min + _g32);		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(159)
			particleEndAlpha = _g33;
		}
		HX_STACK_LINE(162)
		if (((particleEndAlpha != particle->__Field(HX_CSTRING("startAlpha"),true)))){
			HX_STACK_LINE(164)
			particle->__FieldRef(HX_CSTRING("useFading")) = true;
			HX_STACK_LINE(165)
			particle->__FieldRef(HX_CSTRING("rangeAlpha")) = (particleEndAlpha - particle->__Field(HX_CSTRING("startAlpha"),true));
		}
		else{
			HX_STACK_LINE(169)
			particle->__FieldRef(HX_CSTRING("useFading")) = false;
			HX_STACK_LINE(170)
			particle->__FieldRef(HX_CSTRING("rangeAlpha")) = (int)0;
		}
		HX_STACK_LINE(174)
		Float startRedComp = particle->__FieldRef(HX_CSTRING("startRed")) = this->startRed->min;		HX_STACK_VAR(startRedComp,"startRedComp");
		HX_STACK_LINE(175)
		Float startGreenComp = particle->__FieldRef(HX_CSTRING("startGreen")) = this->startGreen->min;		HX_STACK_VAR(startGreenComp,"startGreenComp");
		HX_STACK_LINE(176)
		Float startBlueComp = particle->__FieldRef(HX_CSTRING("startBlue")) = this->startBlue->min;		HX_STACK_VAR(startBlueComp,"startBlueComp");
		HX_STACK_LINE(178)
		Float endRedComp = this->endRed->min;		HX_STACK_VAR(endRedComp,"endRedComp");
		HX_STACK_LINE(179)
		Float endGreenComp = this->endGreen->min;		HX_STACK_VAR(endGreenComp,"endGreenComp");
		HX_STACK_LINE(180)
		Float endBlueComp = this->endBlue->min;		HX_STACK_VAR(endBlueComp,"endBlueComp");
		HX_STACK_LINE(182)
		if (((this->startRed->min != this->startRed->max))){
			HX_STACK_LINE(184)
			int _g34 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g34,"_g34");
			HX_STACK_LINE(184)
			Float _g35 = (Float(_g34) / Float((int)2147483647));		HX_STACK_VAR(_g35,"_g35");
			HX_STACK_LINE(184)
			Float _g36 = (_g35 * ((this->startRed->max - this->startRed->min)));		HX_STACK_VAR(_g36,"_g36");
			HX_STACK_LINE(184)
			Float _g37 = (this->startRed->min + _g36);		HX_STACK_VAR(_g37,"_g37");
			HX_STACK_LINE(184)
			Float _g38 = startRedComp = _g37;		HX_STACK_VAR(_g38,"_g38");
			HX_STACK_LINE(184)
			particle->__FieldRef(HX_CSTRING("startRed")) = _g38;
		}
		HX_STACK_LINE(186)
		if (((this->startGreen->min != this->startGreen->max))){
			HX_STACK_LINE(188)
			int _g39 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g39,"_g39");
			HX_STACK_LINE(188)
			Float _g40 = (Float(_g39) / Float((int)2147483647));		HX_STACK_VAR(_g40,"_g40");
			HX_STACK_LINE(188)
			Float _g41 = (_g40 * ((this->startGreen->max - this->startGreen->min)));		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(188)
			Float _g42 = (this->startGreen->min + _g41);		HX_STACK_VAR(_g42,"_g42");
			HX_STACK_LINE(188)
			Float _g43 = startGreenComp = _g42;		HX_STACK_VAR(_g43,"_g43");
			HX_STACK_LINE(188)
			particle->__FieldRef(HX_CSTRING("startGreen")) = _g43;
		}
		HX_STACK_LINE(190)
		if (((this->startBlue->min != this->startBlue->max))){
			HX_STACK_LINE(192)
			int _g44 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g44,"_g44");
			HX_STACK_LINE(192)
			Float _g45 = (Float(_g44) / Float((int)2147483647));		HX_STACK_VAR(_g45,"_g45");
			HX_STACK_LINE(192)
			Float _g46 = (_g45 * ((this->startBlue->max - this->startBlue->min)));		HX_STACK_VAR(_g46,"_g46");
			HX_STACK_LINE(192)
			Float _g47 = (this->startBlue->min + _g46);		HX_STACK_VAR(_g47,"_g47");
			HX_STACK_LINE(192)
			Float _g48 = startBlueComp = _g47;		HX_STACK_VAR(_g48,"_g48");
			HX_STACK_LINE(192)
			particle->__FieldRef(HX_CSTRING("startBlue")) = _g48;
		}
		HX_STACK_LINE(195)
		if (((this->endRed->min != this->endRed->max))){
			HX_STACK_LINE(197)
			int _g49 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g49,"_g49");
			HX_STACK_LINE(197)
			Float _g50 = (Float(_g49) / Float((int)2147483647));		HX_STACK_VAR(_g50,"_g50");
			HX_STACK_LINE(197)
			Float _g51 = (_g50 * ((this->endRed->max - this->endRed->min)));		HX_STACK_VAR(_g51,"_g51");
			HX_STACK_LINE(197)
			Float _g52 = (this->endRed->min + _g51);		HX_STACK_VAR(_g52,"_g52");
			HX_STACK_LINE(197)
			endRedComp = _g52;
		}
		HX_STACK_LINE(200)
		if (((this->endGreen->min != this->endGreen->max))){
			HX_STACK_LINE(202)
			int _g53 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g53,"_g53");
			HX_STACK_LINE(202)
			Float _g54 = (Float(_g53) / Float((int)2147483647));		HX_STACK_VAR(_g54,"_g54");
			HX_STACK_LINE(202)
			Float _g55 = (_g54 * ((this->endGreen->max - this->endGreen->min)));		HX_STACK_VAR(_g55,"_g55");
			HX_STACK_LINE(202)
			Float _g56 = (this->endGreen->min + _g55);		HX_STACK_VAR(_g56,"_g56");
			HX_STACK_LINE(202)
			endGreenComp = _g56;
		}
		HX_STACK_LINE(205)
		if (((this->endBlue->min != this->endBlue->max))){
			HX_STACK_LINE(207)
			int _g57 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g57,"_g57");
			HX_STACK_LINE(207)
			Float _g58 = (Float(_g57) / Float((int)2147483647));		HX_STACK_VAR(_g58,"_g58");
			HX_STACK_LINE(207)
			Float _g59 = (_g58 * ((this->endBlue->max - this->endBlue->min)));		HX_STACK_VAR(_g59,"_g59");
			HX_STACK_LINE(207)
			Float _g60 = (this->endBlue->min + _g59);		HX_STACK_VAR(_g60,"_g60");
			HX_STACK_LINE(207)
			endBlueComp = _g60;
		}
		HX_STACK_LINE(210)
		particle->__FieldRef(HX_CSTRING("rangeRed")) = (endRedComp - startRedComp);
		HX_STACK_LINE(211)
		particle->__FieldRef(HX_CSTRING("rangeGreen")) = (endGreenComp - startGreenComp);
		HX_STACK_LINE(212)
		particle->__FieldRef(HX_CSTRING("rangeBlue")) = (endBlueComp - startBlueComp);
		HX_STACK_LINE(214)
		particle->__FieldRef(HX_CSTRING("useColoring")) = false;
		HX_STACK_LINE(216)
		if (((bool((bool((particle->__Field(HX_CSTRING("rangeRed"),true) != (int)0)) || bool((particle->__Field(HX_CSTRING("rangeGreen"),true) != (int)0)))) || bool((particle->__Field(HX_CSTRING("rangeBlue"),true) != (int)0))))){
			HX_STACK_LINE(218)
			particle->__FieldRef(HX_CSTRING("useColoring")) = true;
		}
		HX_STACK_LINE(222)
		if (((this->startScale->min != this->startScale->max))){
			HX_STACK_LINE(224)
			int _g61 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g61,"_g61");
			HX_STACK_LINE(224)
			Float _g62 = (Float(_g61) / Float((int)2147483647));		HX_STACK_VAR(_g62,"_g62");
			HX_STACK_LINE(224)
			Float _g63 = (_g62 * ((this->startScale->max - this->startScale->min)));		HX_STACK_VAR(_g63,"_g63");
			HX_STACK_LINE(224)
			Float _g64 = (this->startScale->min + _g63);		HX_STACK_VAR(_g64,"_g64");
			HX_STACK_LINE(224)
			particle->__FieldRef(HX_CSTRING("startScale")) = _g64;
		}
		else{
			HX_STACK_LINE(228)
			particle->__FieldRef(HX_CSTRING("startScale")) = this->startScale->min;
		}
		HX_STACK_LINE(230)
		Float _g65 = particle->__Field(HX_CSTRING("scale"),true)->__Field(HX_CSTRING("set_y"),true)(particle->__Field(HX_CSTRING("startScale"),true));		HX_STACK_VAR(_g65,"_g65");
		HX_STACK_LINE(230)
		particle->__Field(HX_CSTRING("scale"),true)->__Field(HX_CSTRING("set_x"),true)(_g65);
		HX_STACK_LINE(232)
		Float particleEndScale = this->endScale->min;		HX_STACK_VAR(particleEndScale,"particleEndScale");
		HX_STACK_LINE(234)
		if (((this->endScale->min != this->endScale->max))){
			HX_STACK_LINE(236)
			int _g66 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g66,"_g66");
			HX_STACK_LINE(236)
			Float _g67 = (Float(_g66) / Float((int)2147483647));		HX_STACK_VAR(_g67,"_g67");
			HX_STACK_LINE(236)
			Float _g68 = (_g67 * ((this->endScale->max - this->endScale->min)));		HX_STACK_VAR(_g68,"_g68");
			HX_STACK_LINE(236)
			int _g69 = ::Std_obj::_int(_g68);		HX_STACK_VAR(_g69,"_g69");
			HX_STACK_LINE(236)
			Float _g70 = (this->endScale->min + _g69);		HX_STACK_VAR(_g70,"_g70");
			HX_STACK_LINE(236)
			particleEndScale = _g70;
		}
		HX_STACK_LINE(239)
		if (((particleEndScale != particle->__Field(HX_CSTRING("startScale"),true)))){
			HX_STACK_LINE(241)
			particle->__FieldRef(HX_CSTRING("useScaling")) = true;
			HX_STACK_LINE(242)
			particle->__FieldRef(HX_CSTRING("rangeScale")) = (particleEndScale - particle->__Field(HX_CSTRING("startScale"),true));
		}
		else{
			HX_STACK_LINE(246)
			particle->__FieldRef(HX_CSTRING("useScaling")) = false;
			HX_STACK_LINE(247)
			particle->__FieldRef(HX_CSTRING("rangeScale")) = (int)0;
		}
		HX_STACK_LINE(250)
		particle->__Field(HX_CSTRING("set_blend"),true)(this->blend);
		HX_STACK_LINE(253)
		this->setParticleMotion(particle,this->angle,this->distance,this->angleRange,this->distanceRange);
		HX_STACK_LINE(254)
		particle->__Field(HX_CSTRING("acceleration"),true)->__Field(HX_CSTRING("set"),true)(this->acceleration->x,this->acceleration->y);
		HX_STACK_LINE(256)
		if (((this->rotation->min != this->rotation->max))){
			HX_STACK_LINE(258)
			int _g71 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g71,"_g71");
			HX_STACK_LINE(258)
			Float _g72 = (Float(_g71) / Float((int)2147483647));		HX_STACK_VAR(_g72,"_g72");
			HX_STACK_LINE(258)
			Float _g73 = (_g72 * ((this->rotation->max - this->rotation->min)));		HX_STACK_VAR(_g73,"_g73");
			HX_STACK_LINE(258)
			Float _g74 = (this->rotation->min + _g73);		HX_STACK_VAR(_g74,"_g74");
			HX_STACK_LINE(258)
			particle->__FieldRef(HX_CSTRING("angularVelocity")) = _g74;
		}
		else{
			HX_STACK_LINE(262)
			particle->__FieldRef(HX_CSTRING("angularVelocity")) = this->rotation->min;
		}
		HX_STACK_LINE(264)
		if (((particle->__Field(HX_CSTRING("angularVelocity"),true) != (int)0))){
			HX_STACK_LINE(266)
			int _g75 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g75,"_g75");
			HX_STACK_LINE(266)
			Float _g76 = (Float(_g75) / Float((int)2147483647));		HX_STACK_VAR(_g76,"_g76");
			HX_STACK_LINE(266)
			Float _g77 = (_g76 * (int)360);		HX_STACK_VAR(_g77,"_g77");
			HX_STACK_LINE(266)
			Float _g78 = (_g77 - (int)180);		HX_STACK_VAR(_g78,"_g78");
			HX_STACK_LINE(266)
			particle->__Field(HX_CSTRING("set_angle"),true)(_g78);
		}
		HX_STACK_LINE(269)
		particle->__Field(HX_CSTRING("drag"),true)->__Field(HX_CSTRING("set"),true)(this->particleDrag->x,this->particleDrag->y);
		HX_STACK_LINE(270)
		particle->__Field(HX_CSTRING("onEmit"),true)();
	}
return null();
}



FlxTypedEmitterExt_obj::FlxTypedEmitterExt_obj()
{
}

Dynamic FlxTypedEmitterExt_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"angleRange") ) { return angleRange; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"emitParticle") ) { return emitParticle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"distanceRange") ) { return distanceRange; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setParticleMotion") ) { return setParticleMotion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedEmitterExt_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"angleRange") ) { angleRange=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"distanceRange") ) { distanceRange=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedEmitterExt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("distance"));
	outFields->push(HX_CSTRING("angleRange"));
	outFields->push(HX_CSTRING("distanceRange"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxTypedEmitterExt_obj,angle),HX_CSTRING("angle")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitterExt_obj,distance),HX_CSTRING("distance")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitterExt_obj,angleRange),HX_CSTRING("angleRange")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitterExt_obj,distanceRange),HX_CSTRING("distanceRange")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("angle"),
	HX_CSTRING("distance"),
	HX_CSTRING("angleRange"),
	HX_CSTRING("distanceRange"),
	HX_CSTRING("setMotion"),
	HX_CSTRING("setParticleMotion"),
	HX_CSTRING("start"),
	HX_CSTRING("emitParticle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedEmitterExt_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedEmitterExt_obj::__mClass,"__mClass");
};

#endif

Class FlxTypedEmitterExt_obj::__mClass;

void FlxTypedEmitterExt_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.particles.FlxTypedEmitterExt"), hx::TCanCast< FlxTypedEmitterExt_obj> ,sStaticFields,sMemberFields,
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

void FlxTypedEmitterExt_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
