#ifndef INCLUDED_Box
#define INCLUDED_Box

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Box)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Box_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Box_obj OBJ_;
		Box_obj();
		Void __construct(int x,int y,int colorHex);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Box_obj > __new(int x,int y,int colorHex);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Box_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Box"); }

		int boxSize;
		int level;
		int madeColor;
		int clickSize;
		Float fallSpeed;
		virtual Void activate( );
		Dynamic activate_dyn();

		virtual Void deactivate( );
		Dynamic deactivate_dyn();

		virtual Void spawn( int lane);
		Dynamic spawn_dyn();

		virtual bool inputSquareOverlaps( Float x,Float y);
		Dynamic inputSquareOverlaps_dyn();

		virtual bool isClicked( );
		Dynamic isClicked_dyn();

		virtual bool isTouched( );
		Dynamic isTouched_dyn();

		virtual Void detectClick( );
		Dynamic detectClick_dyn();

		virtual Void explode( );
		Dynamic explode_dyn();

		Float fallTimer;
		virtual Void update( );

};


#endif /* INCLUDED_Box */ 
