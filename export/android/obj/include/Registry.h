#ifndef INCLUDED_Registry
#define INCLUDED_Registry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Box)
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Registry)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxEmitterExt)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitterExt)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(haxe,ds,IntMap)


class HXCPP_CLASS_ATTRIBUTES  Registry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Registry_obj OBJ_;
		Registry_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Registry_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Registry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Registry"); }

		static ::haxe::ds::IntMap boxTouchSounds;
		static ::flixel::effects::particles::FlxEmitterExt particleEmitter;
		static Array< ::Dynamic > boxes;
		static ::haxe::ds::IntMap boxesPresent;
		static int score;
		static int highScore;
		static int currentTotalLevel;
		static int level;
		static Void init( );
		static Dynamic init_dyn();

		static ::Box getAvailableBox( int type);
		static Dynamic getAvailableBox_dyn();

		static Void saveHighScore( int score);
		static Dynamic saveHighScore_dyn();

		static int loadHighScore( );
		static Dynamic loadHighScore_dyn();

};


#endif /* INCLUDED_Registry */ 
