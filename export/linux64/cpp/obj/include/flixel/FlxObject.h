#ifndef INCLUDED_flixel_FlxObject
#define INCLUDED_flixel_FlxObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxAxes)
HX_DECLARE_CLASS2(flixel,util,FlxPath)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxObject_obj : public ::flixel::FlxBasic_obj{
	public:
		typedef ::flixel::FlxBasic_obj super;
		typedef FlxObject_obj OBJ_;
		FlxObject_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.FlxObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxObject_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxObject","\xb1","\x78","\x2e","\x97"); }

		static void __boot();
		static bool defaultPixelPerfectPosition;
		static Float SEPARATE_BIAS;
		static int LEFT;
		static int RIGHT;
		static int UP;
		static int DOWN;
		static int NONE;
		static int CEILING;
		static int FLOOR;
		static int WALL;
		static int ANY;
		static ::flixel::math::FlxRect _firstSeparateFlxRect;
		static ::flixel::math::FlxRect _secondSeparateFlxRect;
		static bool separate( ::flixel::FlxObject Object1,::flixel::FlxObject Object2);
		static Dynamic separate_dyn();

		static bool updateTouchingFlags( ::flixel::FlxObject Object1,::flixel::FlxObject Object2);
		static Dynamic updateTouchingFlags_dyn();

		static Float computeOverlapX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2,hx::Null< bool >  checkMaxOverlap);
		static Dynamic computeOverlapX_dyn();

		static bool separateX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2);
		static Dynamic separateX_dyn();

		static bool updateTouchingFlagsX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2);
		static Dynamic updateTouchingFlagsX_dyn();

		static Float computeOverlapY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2,hx::Null< bool >  checkMaxOverlap);
		static Dynamic computeOverlapY_dyn();

		static bool separateY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2);
		static Dynamic separateY_dyn();

		static bool updateTouchingFlagsY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2);
		static Dynamic updateTouchingFlagsY_dyn();

		Float x;
		Float y;
		Float width;
		Float height;
		Dynamic pixelPerfectRender;
		bool pixelPerfectPosition;
		Float angle;
		bool moves;
		bool immovable;
		::flixel::math::FlxPoint scrollFactor;
		::flixel::math::FlxPoint velocity;
		::flixel::math::FlxPoint acceleration;
		::flixel::math::FlxPoint drag;
		::flixel::math::FlxPoint maxVelocity;
		::flixel::math::FlxPoint last;
		Float mass;
		Float elasticity;
		Float angularVelocity;
		Float angularAcceleration;
		Float angularDrag;
		Float maxAngular;
		Float health;
		int touching;
		int wasTouching;
		int allowCollisions;
		bool collisonXDrag;
		Dynamic debugBoundingBoxColor;
		bool ignoreDrawDebug;
		::flixel::util::FlxPath path;
		::flixel::math::FlxPoint _point;
		::flixel::math::FlxRect _rect;
		virtual Void initVars( );
		Dynamic initVars_dyn();

		virtual Void initMotionVars( );
		Dynamic initMotionVars_dyn();

		virtual Void destroy( );

		virtual Void update( Float elapsed);

		virtual Void updateMotion( Float elapsed);
		Dynamic updateMotion_dyn();

		virtual Void draw( );

		virtual bool overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  InScreenSpace,::flixel::FlxCamera Camera);
		Dynamic overlaps_dyn();

		virtual bool overlapsCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera);
		Dynamic overlapsCallback_dyn();

		virtual bool overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  InScreenSpace,::flixel::FlxCamera Camera);
		Dynamic overlapsAt_dyn();

		virtual bool overlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera);
		Dynamic overlapsAtCallback_dyn();

		virtual bool overlapsPoint( ::flixel::math::FlxPoint point,hx::Null< bool >  InScreenSpace,::flixel::FlxCamera Camera);
		Dynamic overlapsPoint_dyn();

		virtual bool inWorldBounds( );
		Dynamic inWorldBounds_dyn();

		virtual ::flixel::math::FlxPoint getScreenPosition( ::flixel::math::FlxPoint point,::flixel::FlxCamera Camera);
		Dynamic getScreenPosition_dyn();

		virtual ::flixel::math::FlxPoint getPosition( ::flixel::math::FlxPoint point);
		Dynamic getPosition_dyn();

		virtual ::flixel::math::FlxPoint getMidpoint( ::flixel::math::FlxPoint point);
		Dynamic getMidpoint_dyn();

		virtual ::flixel::math::FlxRect getHitbox( ::flixel::math::FlxRect rect);
		Dynamic getHitbox_dyn();

		virtual Void reset( Float X,Float Y);
		Dynamic reset_dyn();

		virtual bool isOnScreen( ::flixel::FlxCamera Camera);
		Dynamic isOnScreen_dyn();

		virtual bool isPixelPerfectRender( ::flixel::FlxCamera Camera);
		Dynamic isPixelPerfectRender_dyn();

		virtual bool isTouching( int Direction);
		Dynamic isTouching_dyn();

		virtual bool justTouched( int Direction);
		Dynamic justTouched_dyn();

		virtual Void hurt( Float Damage);
		Dynamic hurt_dyn();

		virtual ::flixel::FlxObject screenCenter( ::flixel::util::FlxAxes axes);
		Dynamic screenCenter_dyn();

		virtual Void setPosition( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic setPosition_dyn();

		virtual Void setSize( Float Width,Float Height);
		Dynamic setSize_dyn();

		virtual Void drawDebug( );
		Dynamic drawDebug_dyn();

		virtual Void drawDebugOnCamera( ::flixel::FlxCamera camera);
		Dynamic drawDebugOnCamera_dyn();

		virtual ::openfl::_legacy::display::Graphics beginDrawDebug( ::flixel::FlxCamera camera);
		Dynamic beginDrawDebug_dyn();

		virtual Void endDrawDebug( ::flixel::FlxCamera camera);
		Dynamic endDrawDebug_dyn();

		virtual ::flixel::math::FlxRect getBoundingBox( ::flixel::FlxCamera camera);
		Dynamic getBoundingBox_dyn();

		virtual ::String toString( );

		virtual Float set_x( Float NewX);
		Dynamic set_x_dyn();

		virtual Float set_y( Float NewY);
		Dynamic set_y_dyn();

		virtual Float set_width( Float Width);
		Dynamic set_width_dyn();

		virtual Float set_height( Float Height);
		Dynamic set_height_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual bool get_solid( );
		Dynamic get_solid_dyn();

		virtual bool set_solid( bool Solid);
		Dynamic set_solid_dyn();

		virtual Float set_angle( Float Value);
		Dynamic set_angle_dyn();

		virtual bool set_moves( bool Value);
		Dynamic set_moves_dyn();

		virtual bool set_immovable( bool Value);
		Dynamic set_immovable_dyn();

		virtual bool set_pixelPerfectRender( bool Value);
		Dynamic set_pixelPerfectRender_dyn();

		virtual int set_allowCollisions( int Value);
		Dynamic set_allowCollisions_dyn();

		virtual ::flixel::util::FlxPath set_path( ::flixel::util::FlxPath path);
		Dynamic set_path_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxObject */ 
