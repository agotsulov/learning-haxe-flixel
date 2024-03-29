#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxLinkedList
#include <flixel/system/FlxLinkedList.h>
#endif
#ifndef INCLUDED_flixel_system_FlxQuadTree
#include <flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicStats
#include <flixel/system/debug/GraphicStats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_stats_Stats
#include <flixel/system/debug/stats/Stats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_stats_StatsGraph
#include <flixel/system/debug/stats/StatsGraph.h>
#endif
#ifndef INCLUDED_flixel_system_debug_stats__Stats_GraphicMaximizeButton
#include <flixel/system/debug/stats/_Stats/GraphicMaximizeButton.h>
#endif
#ifndef INCLUDED_flixel_system_debug_stats__Stats_GraphicMinimizeButton
#include <flixel/system/debug/stats/_Stats/GraphicMinimizeButton.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_system_System
#include <openfl/_legacy/system/System.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace stats{

Void Stats_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.stats.Stats","new",0xd5f45fda,"flixel.system.debug.stats.Stats.new","flixel/system/debug/stats/Stats.hx",28,0xc15f23b8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(89)
	this->_paused = true;
	HX_STACK_LINE(87)
	this->_activeObjectMarker = (int)0;
	HX_STACK_LINE(86)
	this->_activeObject = Array_obj< int >::__new();
	HX_STACK_LINE(84)
	this->_visibleObjectMarker = (int)0;
	HX_STACK_LINE(83)
	this->_visibleObject = Array_obj< int >::__new();
	HX_STACK_LINE(81)
	this->_drawCallsMarker = (int)0;
	HX_STACK_LINE(80)
	this->_drawCalls = Array_obj< int >::__new();
	HX_STACK_LINE(78)
	this->_drawMarker = (int)0;
	HX_STACK_LINE(77)
	this->_draw = Array_obj< int >::__new();
	HX_STACK_LINE(75)
	this->_updateMarker = (int)0;
	HX_STACK_LINE(74)
	this->_update = Array_obj< int >::__new();
	HX_STACK_LINE(72)
	this->_updateTimer = (int)0;
	HX_STACK_LINE(71)
	this->_lastTime = (int)0;
	HX_STACK_LINE(69)
	this->drawCallsCount = (int)0;
	HX_STACK_LINE(68)
	this->drawTime = (int)0;
	HX_STACK_LINE(67)
	this->updateTime = (int)0;
	HX_STACK_LINE(66)
	this->activeCount = (int)0;
	HX_STACK_LINE(65)
	this->visibleCount = (int)0;
	HX_STACK_LINE(64)
	this->flashPlayerFramerate = ((Float)0);
	HX_STACK_LINE(55)
	this->_itvTime = (int)0;
	HX_STACK_LINE(98)
	::flixel::_system::debug::GraphicStats tmp = ::flixel::_system::debug::GraphicStats_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	super::__construct(HX_HCSTRING("Stats","\xff","\xe5","\x38","\x17"),tmp,(int)0,(int)0,false,null(),null());
	HX_STACK_LINE(100)
	int tmp1 = ::flixel::_system::debug::stats::Stats_obj::MIN_HEIGHT;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	if ((tmp2)){
		HX_STACK_LINE(102)
		bool tmp3 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(102)
		if ((tmp4)){
			HX_STACK_LINE(103)
			::flixel::_system::debug::stats::Stats_obj::MIN_HEIGHT = (int)185;
		}
		else{
			HX_STACK_LINE(105)
			::flixel::_system::debug::stats::Stats_obj::MIN_HEIGHT = (int)200;
		}
	}
	HX_STACK_LINE(108)
	int tmp3 = ::flixel::_system::debug::stats::Stats_obj::MIN_HEIGHT;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(108)
	::openfl::_legacy::geom::Point tmp4 = this->minSize;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(108)
	tmp4->y = tmp3;
	HX_STACK_LINE(109)
	int tmp5 = ::flixel::_system::debug::stats::Stats_obj::MIN_HEIGHT;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(109)
	this->resize((int)160,tmp5);
	HX_STACK_LINE(111)
	this->start();
	HX_STACK_LINE(113)
	this->_update = Array_obj< int >::__new();
	HX_STACK_LINE(114)
	this->_draw = Array_obj< int >::__new();
	HX_STACK_LINE(115)
	this->_activeObject = Array_obj< int >::__new();
	HX_STACK_LINE(116)
	this->_visibleObject = Array_obj< int >::__new();
	HX_STACK_LINE(118)
	bool tmp6 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(118)
	if ((tmp6)){
		HX_STACK_LINE(120)
		this->_drawCalls = Array_obj< int >::__new();
	}
	HX_STACK_LINE(123)
	int gutter = (int)5;		HX_STACK_VAR(gutter,"gutter");
	HX_STACK_LINE(124)
	int graphX = gutter;		HX_STACK_VAR(graphX,"graphX");
	HX_STACK_LINE(125)
	::openfl::_legacy::display::Bitmap tmp7 = this->_header;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(125)
	Float tmp8 = tmp7->get_height();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(125)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(125)
	int tmp10 = gutter;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(125)
	int tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(125)
	int graphY = tmp11;		HX_STACK_VAR(graphY,"graphY");
	HX_STACK_LINE(126)
	int graphHeight = (int)40;		HX_STACK_VAR(graphHeight,"graphHeight");
	HX_STACK_LINE(127)
	int tmp12 = (int)140;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(127)
	int graphWidth = tmp12;		HX_STACK_VAR(graphWidth,"graphWidth");
	HX_STACK_LINE(129)
	::flixel::_system::debug::stats::StatsGraph tmp13 = ::flixel::_system::debug::stats::StatsGraph_obj::__new(graphX,graphY,graphWidth,graphHeight,(int)-6881536,HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(129)
	this->fpsGraph = tmp13;
	HX_STACK_LINE(130)
	::flixel::_system::debug::stats::StatsGraph tmp14 = this->fpsGraph;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(130)
	this->addChild(tmp14);
	HX_STACK_LINE(131)
	int tmp15 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(131)
	::flixel::_system::debug::stats::StatsGraph tmp16 = this->fpsGraph;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(131)
	tmp16->__FieldRef(HX_HCSTRING("maxValue","\x2d","\xd2","\xd5","\xdb")) = tmp15;
	HX_STACK_LINE(132)
	::flixel::_system::debug::stats::StatsGraph tmp17 = this->fpsGraph;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(132)
	tmp17->__FieldRef(HX_HCSTRING("minValue","\x7f","\xec","\xef","\x28")) = (int)0;
	HX_STACK_LINE(134)
	::openfl::_legacy::display::Bitmap tmp18 = this->_header;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(134)
	Float tmp19 = tmp18->get_height();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(134)
	int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(134)
	int tmp21 = graphHeight;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(134)
	int tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(134)
	int tmp23 = (tmp22 + (int)20);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(134)
	graphY = tmp23;
	HX_STACK_LINE(136)
	::flixel::_system::debug::stats::StatsGraph tmp24 = ::flixel::_system::debug::stats::StatsGraph_obj::__new(graphX,graphY,graphWidth,graphHeight,(int)-16737025,HX_HCSTRING("MB","\x55","\x43","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(136)
	this->memoryGraph = tmp24;
	HX_STACK_LINE(137)
	::flixel::_system::debug::stats::StatsGraph tmp25 = this->memoryGraph;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(137)
	this->addChild(tmp25);
	HX_STACK_LINE(139)
	::openfl::_legacy::display::Bitmap tmp26 = this->_header;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(139)
	Float tmp27 = tmp26->get_height();		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(139)
	int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(139)
	int tmp29 = gutter;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(139)
	int tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(139)
	graphY = tmp30;
	HX_STACK_LINE(140)
	int tmp31 = (gutter + graphWidth);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(140)
	int tmp32 = (tmp31 + (int)20);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(140)
	hx::AddEq(graphX,tmp32);
	HX_STACK_LINE(141)
	hx::SubEq(graphWidth,(int)10);
	HX_STACK_LINE(143)
	::flixel::_system::debug::stats::StatsGraph tmp33 = ::flixel::_system::debug::stats::StatsGraph_obj::__new(graphX,graphY,graphWidth,graphHeight,(int)-2305024,HX_HCSTRING("ms","\x66","\x5f","\x00","\x00"),(int)35,HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(143)
	this->updateTimeGraph = tmp33;
	HX_STACK_LINE(144)
	::flixel::_system::debug::stats::StatsGraph tmp34 = this->updateTimeGraph;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(144)
	tmp34->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(false);
	HX_STACK_LINE(145)
	::flixel::_system::debug::stats::StatsGraph tmp35 = this->updateTimeGraph;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(145)
	this->addChild(tmp35);
	HX_STACK_LINE(147)
	::openfl::_legacy::display::Bitmap tmp36 = this->_header;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(147)
	Float tmp37 = tmp36->get_height();		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(147)
	int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(147)
	int tmp39 = graphHeight;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(147)
	int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(147)
	int tmp41 = (tmp40 + (int)20);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(147)
	graphY = tmp41;
	HX_STACK_LINE(149)
	::flixel::_system::debug::stats::StatsGraph tmp42 = ::flixel::_system::debug::stats::StatsGraph_obj::__new(graphX,graphY,graphWidth,graphHeight,(int)-5898236,HX_HCSTRING("ms","\x66","\x5f","\x00","\x00"),(int)35,HX_HCSTRING("Draw","\x24","\x58","\x49","\x2d"));		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(149)
	this->drawTimeGraph = tmp42;
	HX_STACK_LINE(150)
	::flixel::_system::debug::stats::StatsGraph tmp43 = this->drawTimeGraph;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(150)
	tmp43->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(false);
	HX_STACK_LINE(151)
	::flixel::_system::debug::stats::StatsGraph tmp44 = this->drawTimeGraph;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(151)
	this->addChild(tmp44);
	HX_STACK_LINE(153)
	int tmp45 = gutter;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(153)
	int tmp46 = (graphHeight * (int)2);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(153)
	int tmp47 = (tmp46 + (int)45);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(153)
	::openfl::_legacy::text::TextField tmp48 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField(tmp45,tmp47,(int)-1426063361,(int)11);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(153)
	::openfl::_legacy::text::TextField tmp49 = this->_leftTextField = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(153)
	this->addChild(tmp49);
	HX_STACK_LINE(154)
	int tmp50 = (gutter + (int)70);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(154)
	int tmp51 = (graphHeight * (int)2);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(154)
	int tmp52 = (tmp51 + (int)45);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(154)
	::openfl::_legacy::text::TextField tmp53 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField(tmp50,tmp52,(int)-1,(int)11);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(154)
	::openfl::_legacy::text::TextField tmp54 = this->_rightTextField = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(154)
	this->addChild(tmp54);
	HX_STACK_LINE(156)
	::openfl::_legacy::text::TextField tmp55 = this->_leftTextField;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(156)
	::openfl::_legacy::text::TextField tmp56 = this->_rightTextField;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(156)
	bool tmp57 = tmp56->set_multiline(true);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(156)
	tmp55->set_multiline(tmp57);
	HX_STACK_LINE(157)
	::openfl::_legacy::text::TextField tmp58 = this->_leftTextField;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(157)
	::openfl::_legacy::text::TextField tmp59 = this->_rightTextField;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(157)
	bool tmp60 = tmp59->set_wordWrap(true);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(157)
	tmp58->set_wordWrap(tmp60);
	HX_STACK_LINE(159)
	::openfl::_legacy::text::TextField tmp61 = this->_leftTextField;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(159)
	bool tmp62 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(159)
	::String tmp63;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(159)
	if ((tmp62)){
		HX_STACK_LINE(159)
		tmp63 = HX_HCSTRING("\nDrawTiles:","\xe3","\x86","\x4d","\x5f");
	}
	else{
		HX_STACK_LINE(159)
		tmp63 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(159)
	::String tmp64 = (HX_HCSTRING("Update: \nDraw:","\x9b","\xe1","\x5f","\xa0") + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(159)
	::String tmp65 = (tmp64 + HX_HCSTRING("\nQuadTrees: \nLists:","\xe5","\xf7","\xd0","\x58"));		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(159)
	tmp61->set_text(tmp65);
	HX_STACK_LINE(161)
	::flixel::_system::debug::stats::_Stats::GraphicMaximizeButton tmp66 = ::flixel::_system::debug::stats::_Stats::GraphicMaximizeButton_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(161)
	Dynamic tmp67 = this->toggleSize_dyn();		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(161)
	::flixel::_system::ui::FlxSystemButton tmp68 = ::flixel::_system::ui::FlxSystemButton_obj::__new(tmp66,tmp67,null());		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(161)
	this->_toggleSizeButton = tmp68;
	HX_STACK_LINE(162)
	::flixel::_system::ui::FlxSystemButton tmp69 = this->_toggleSizeButton;		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(162)
	tmp69->__Field(HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"), hx::paccDynamic )(((Float)0.8));
	HX_STACK_LINE(163)
	::flixel::_system::ui::FlxSystemButton tmp70 = this->_toggleSizeButton;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(163)
	this->addChild(tmp70);
	HX_STACK_LINE(165)
	this->updateSize();
}
;
	return null();
}

//Stats_obj::~Stats_obj() { }

Dynamic Stats_obj::__CreateEmpty() { return  new Stats_obj; }
hx::ObjectPtr< Stats_obj > Stats_obj::__new()
{  hx::ObjectPtr< Stats_obj > _result_ = new Stats_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stats_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stats_obj > _result_ = new Stats_obj();
	_result_->__construct();
	return _result_;}

Void Stats_obj::start( ){
{
		HX_STACK_FRAME("flixel.system.debug.stats.Stats","start",0x6e8a565c,"flixel.system.debug.stats.Stats.start","flixel/system/debug/stats/Stats.hx",172,0xc15f23b8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		if ((tmp)){
			HX_STACK_LINE(175)
			this->_paused = false;
			HX_STACK_LINE(176)
			::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(176)
			this->_itvTime = tmp1->ticks;
			HX_STACK_LINE(177)
			this->_frameCount = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,start,(void))

Void Stats_obj::stop( ){
{
		HX_STACK_FRAME("flixel.system.debug.stats.Stats","stop",0x6338eb48,"flixel.system.debug.stats.Stats.stop","flixel/system/debug/stats/Stats.hx",186,0xc15f23b8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		this->_paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,stop,(void))

Void Stats_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.stats.Stats","destroy",0xd5fd0174,"flixel.system.debug.stats.Stats.destroy","flixel/system/debug/stats/Stats.hx",193,0xc15f23b8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		::flixel::_system::debug::stats::StatsGraph tmp = this->fpsGraph;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		if ((tmp1)){
			HX_STACK_LINE(196)
			::flixel::_system::debug::stats::StatsGraph tmp2 = this->fpsGraph;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(196)
			tmp2->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(197)
			::flixel::_system::debug::stats::StatsGraph tmp3 = this->fpsGraph;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(197)
			this->removeChild(tmp3);
		}
		HX_STACK_LINE(199)
		this->fpsGraph = null();
		HX_STACK_LINE(201)
		::flixel::_system::debug::stats::StatsGraph tmp2 = this->memoryGraph;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		if ((tmp3)){
			HX_STACK_LINE(203)
			::flixel::_system::debug::stats::StatsGraph tmp4 = this->memoryGraph;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(203)
			this->removeChild(tmp4);
		}
		HX_STACK_LINE(205)
		this->memoryGraph = null();
		HX_STACK_LINE(207)
		::openfl::_legacy::text::TextField tmp4 = this->_leftTextField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(207)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		if ((tmp5)){
			HX_STACK_LINE(209)
			::openfl::_legacy::text::TextField tmp6 = this->_leftTextField;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(209)
			this->removeChild(tmp6);
		}
		HX_STACK_LINE(211)
		this->_leftTextField = null();
		HX_STACK_LINE(213)
		::openfl::_legacy::text::TextField tmp6 = this->_rightTextField;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(213)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(213)
		if ((tmp7)){
			HX_STACK_LINE(215)
			::openfl::_legacy::text::TextField tmp8 = this->_rightTextField;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(215)
			this->removeChild(tmp8);
		}
		HX_STACK_LINE(217)
		this->_rightTextField = null();
		HX_STACK_LINE(219)
		this->_update = null();
		HX_STACK_LINE(220)
		this->_draw = null();
		HX_STACK_LINE(221)
		this->_activeObject = null();
		HX_STACK_LINE(222)
		this->_visibleObject = null();
		HX_STACK_LINE(223)
		this->_drawCalls = null();
		HX_STACK_LINE(225)
		this->super::destroy();
	}
return null();
}


Void Stats_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.stats.Stats","update",0xcb8c5ecf,"flixel.system.debug.stats.Stats.update","flixel/system/debug/stats/Stats.hx",233,0xc15f23b8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(234)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		if ((tmp)){
			HX_STACK_LINE(236)
			return null();
		}
		HX_STACK_LINE(238)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		int tmp2 = this->_currentTime = tmp1->ticks;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		int time = tmp2;		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(240)
		int tmp3 = time;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		int tmp4 = this->_lastTime;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(240)
		int elapsed = tmp5;		HX_STACK_VAR(elapsed,"elapsed");
		HX_STACK_LINE(242)
		bool tmp6 = (elapsed > (int)250);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(242)
		if ((tmp6)){
			HX_STACK_LINE(244)
			elapsed = (int)250;
		}
		HX_STACK_LINE(246)
		this->_lastTime = time;
		HX_STACK_LINE(248)
		hx::AddEq(this->_updateTimer,elapsed);
		HX_STACK_LINE(250)
		(this->_frameCount)++;
		HX_STACK_LINE(252)
		int tmp7 = this->_updateTimer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(252)
		bool tmp8 = (tmp7 > (int)250);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(252)
		if ((tmp8)){
			HX_STACK_LINE(254)
			::flixel::_system::debug::stats::StatsGraph tmp9 = this->fpsGraph;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(254)
			int tmp10 = this->_frameCount;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(254)
			int tmp11 = this->_currentTime;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(254)
			int tmp12 = this->_itvTime;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(254)
			int tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(254)
			Float tmp14 = (Float(tmp13) / Float((int)1000));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(254)
			Float tmp15 = (Float(tmp10) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(254)
			tmp9->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )(tmp15);
			HX_STACK_LINE(255)
			::flixel::_system::debug::stats::StatsGraph tmp16 = this->memoryGraph;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(255)
			int tmp17 = ::openfl::_legacy::_system::System_obj::get_totalMemory();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(255)
			Float tmp18 = (Float(tmp17) / Float((int)1024));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(255)
			Float tmp19 = (Float(tmp18) / Float((int)1000));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(255)
			tmp16->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )(tmp19);
			HX_STACK_LINE(256)
			this->updateTexts();
			HX_STACK_LINE(258)
			this->_frameCount = (int)0;
			HX_STACK_LINE(259)
			int tmp20 = this->_currentTime;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(259)
			this->_itvTime = tmp20;
			HX_STACK_LINE(261)
			this->updateTime = (int)0;
			HX_STACK_LINE(262)
			{
				HX_STACK_LINE(262)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(262)
				int tmp21 = this->_updateMarker;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(262)
				int _g = tmp21;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(262)
				while((true)){
					HX_STACK_LINE(262)
					bool tmp22 = (_g1 < _g);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(262)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(262)
					if ((tmp23)){
						HX_STACK_LINE(262)
						break;
					}
					HX_STACK_LINE(262)
					int tmp24 = (_g1)++;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(262)
					int i = tmp24;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(264)
					int tmp25 = this->_update->__GetItem(i);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(264)
					hx::AddEq(this->updateTime,tmp25);
				}
			}
			HX_STACK_LINE(267)
			{
				HX_STACK_LINE(267)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(267)
				int tmp21 = this->_activeObjectMarker;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(267)
				int _g = tmp21;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(267)
				while((true)){
					HX_STACK_LINE(267)
					bool tmp22 = (_g1 < _g);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(267)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(267)
					if ((tmp23)){
						HX_STACK_LINE(267)
						break;
					}
					HX_STACK_LINE(267)
					int tmp24 = (_g1)++;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(267)
					int i = tmp24;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(269)
					int tmp25 = this->_activeObject->__GetItem(i);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(269)
					hx::AddEq(this->activeCount,tmp25);
				}
			}
			HX_STACK_LINE(271)
			int tmp21 = this->activeCount;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(271)
			int tmp22 = this->_activeObjectMarker;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(271)
			Float tmp23 = this->divide(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(271)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(271)
			this->activeCount = tmp24;
			HX_STACK_LINE(273)
			this->drawTime = (int)0;
			HX_STACK_LINE(274)
			{
				HX_STACK_LINE(274)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(274)
				int tmp25 = this->_drawMarker;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(274)
				int _g = tmp25;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(274)
				while((true)){
					HX_STACK_LINE(274)
					bool tmp26 = (_g1 < _g);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(274)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(274)
					if ((tmp27)){
						HX_STACK_LINE(274)
						break;
					}
					HX_STACK_LINE(274)
					int tmp28 = (_g1)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(274)
					int i = tmp28;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(276)
					int tmp29 = this->_draw->__GetItem(i);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(276)
					hx::AddEq(this->drawTime,tmp29);
				}
			}
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(279)
				int tmp25 = this->_visibleObjectMarker;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(279)
				int _g = tmp25;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(279)
				while((true)){
					HX_STACK_LINE(279)
					bool tmp26 = (_g1 < _g);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(279)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(279)
					if ((tmp27)){
						HX_STACK_LINE(279)
						break;
					}
					HX_STACK_LINE(279)
					int tmp28 = (_g1)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(279)
					int i = tmp28;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(281)
					int tmp29 = this->_visibleObject->__GetItem(i);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(281)
					hx::AddEq(this->visibleCount,tmp29);
				}
			}
			HX_STACK_LINE(283)
			int tmp25 = this->visibleCount;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(283)
			int tmp26 = this->_visibleObjectMarker;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(283)
			Float tmp27 = this->divide(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(283)
			int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(283)
			this->visibleCount = tmp28;
			HX_STACK_LINE(285)
			bool tmp29 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(285)
			if ((tmp29)){
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(287)
					int tmp30 = this->_drawCallsMarker;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(287)
					int _g = tmp30;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(287)
					while((true)){
						HX_STACK_LINE(287)
						bool tmp31 = (_g1 < _g);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(287)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(287)
						if ((tmp32)){
							HX_STACK_LINE(287)
							break;
						}
						HX_STACK_LINE(287)
						int tmp33 = (_g1)++;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(287)
						int i = tmp33;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(289)
						int tmp34 = this->_drawCalls->__GetItem(i);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(289)
						hx::AddEq(this->drawCallsCount,tmp34);
					}
				}
				HX_STACK_LINE(291)
				int tmp30 = this->drawCallsCount;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(291)
				int tmp31 = this->_drawCallsMarker;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(291)
				Float tmp32 = this->divide(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(291)
				int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(291)
				this->drawCallsCount = tmp33;
			}
			HX_STACK_LINE(294)
			this->_updateMarker = (int)0;
			HX_STACK_LINE(295)
			this->_drawMarker = (int)0;
			HX_STACK_LINE(296)
			this->_activeObjectMarker = (int)0;
			HX_STACK_LINE(297)
			this->_visibleObjectMarker = (int)0;
			HX_STACK_LINE(298)
			bool tmp30 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(298)
			if ((tmp30)){
				HX_STACK_LINE(300)
				this->_drawCallsMarker = (int)0;
			}
			HX_STACK_LINE(303)
			hx::SubEq(this->_updateTimer,(int)250);
		}
	}
return null();
}


Void Stats_obj::updateTexts( ){
{
		HX_STACK_FRAME("flixel.system.debug.stats.Stats","updateTexts",0xc9854dd7,"flixel.system.debug.stats.Stats.updateTexts","flixel/system/debug/stats/Stats.hx",308,0xc15f23b8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(309)
		int tmp = this->updateTime;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		int tmp1 = this->_updateMarker;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(309)
		Float tmp2 = this->divide(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(309)
		Float tmp3 = ::flixel::math::FlxMath_obj::roundDecimal(tmp2,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(309)
		Float updTime = tmp3;		HX_STACK_VAR(updTime,"updTime");
		HX_STACK_LINE(310)
		int tmp4 = this->drawTime;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(310)
		int tmp5 = this->_drawMarker;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(310)
		Float tmp6 = this->divide(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(310)
		Float tmp7 = ::flixel::math::FlxMath_obj::roundDecimal(tmp6,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(310)
		Float drwTime = tmp7;		HX_STACK_VAR(drwTime,"drwTime");
		HX_STACK_LINE(312)
		::flixel::_system::debug::stats::StatsGraph tmp8 = this->drawTimeGraph;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(312)
		Float tmp9 = drwTime;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(312)
		tmp8->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )(tmp9);
		HX_STACK_LINE(313)
		::flixel::_system::debug::stats::StatsGraph tmp10 = this->updateTimeGraph;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(313)
		Float tmp11 = updTime;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(313)
		tmp10->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )(tmp11);
		HX_STACK_LINE(315)
		::openfl::_legacy::text::TextField tmp12 = this->_rightTextField;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(316)
		int tmp13 = this->activeCount;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(316)
		::String tmp14 = (tmp13 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(316)
		Float tmp15 = updTime;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(316)
		::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(316)
		::String tmp17 = (tmp16 + HX_HCSTRING("ms)\n","\xa7","\xa8","\x63","\x48"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(317)
		int tmp18 = this->visibleCount;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(316)
		::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(316)
		::String tmp20 = (tmp19 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(317)
		Float tmp21 = drwTime;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(316)
		::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(316)
		::String tmp23 = (tmp22 + HX_HCSTRING("ms)\n","\xa7","\xa8","\x63","\x48"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(318)
		bool tmp24 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(318)
		::String tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(318)
		if ((tmp24)){
			HX_STACK_LINE(318)
			int tmp26 = this->drawCallsCount;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(318)
			tmp25 = (tmp26 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(318)
			tmp25 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(316)
		::String tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(319)
		int tmp27 = ::flixel::_system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(316)
		::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(316)
		::String tmp29 = (tmp28 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(320)
		int tmp30 = ::flixel::_system::FlxLinkedList_obj::_NUM_CACHED_FLX_LIST;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(316)
		::String tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(315)
		tmp12->set_text(tmp31);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,updateTexts,(void))

Float Stats_obj::divide( Float f1,Float f2){
	HX_STACK_FRAME("flixel.system.debug.stats.Stats","divide",0x0399083f,"flixel.system.debug.stats.Stats.divide","flixel/system/debug/stats/Stats.hx",324,0xc15f23b8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f1,"f1")
	HX_STACK_ARG(f2,"f2")
	HX_STACK_LINE(325)
	bool tmp = (f2 == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(325)
	if ((tmp)){
		HX_STACK_LINE(326)
		return (int)0;
	}
	HX_STACK_LINE(327)
	Float tmp1 = (Float(f1) / Float(f2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(327)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(Stats_obj,divide,return )

Float Stats_obj::currentFps( ){
	HX_STACK_FRAME("flixel.system.debug.stats.Stats","currentFps",0x555240f6,"flixel.system.debug.stats.Stats.currentFps","flixel/system/debug/stats/Stats.hx",334,0xc15f23b8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(335)
	int tmp = this->_frameCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(335)
	int tmp1 = this->_currentTime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(335)
	int tmp2 = this->_itvTime;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(335)
	int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(335)
	Float tmp4 = (Float(tmp3) / Float((int)1000));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(335)
	Float tmp5 = (Float(tmp) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(335)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,currentFps,return )

Float Stats_obj::intervalTime( ){
	HX_STACK_FRAME("flixel.system.debug.stats.Stats","intervalTime",0x37fba938,"flixel.system.debug.stats.Stats.intervalTime","flixel/system/debug/stats/Stats.hx",342,0xc15f23b8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(343)
	int tmp = this->_currentTime;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(343)
	int tmp1 = this->_itvTime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(343)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(343)
	Float tmp3 = (Float(tmp2) / Float((int)1000));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(343)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,intervalTime,return )

Float Stats_obj::currentMem( ){
	HX_STACK_FRAME("flixel.system.debug.stats.Stats","currentMem",0x55578722,"flixel.system.debug.stats.Stats.currentMem","flixel/system/debug/stats/Stats.hx",350,0xc15f23b8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(351)
	int tmp = ::openfl::_legacy::_system::System_obj::get_totalMemory();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	Float tmp1 = (Float(tmp) / Float((int)1024));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(351)
	Float tmp2 = (Float(tmp1) / Float((int)1000));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(351)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,currentMem,return )

Void Stats_obj::flixelUpdate( int Time){
{
		HX_STACK_FRAME("flixel.system.debug.stats.Stats","flixelUpdate",0xda311acb,"flixel.system.debug.stats.Stats.flixelUpdate","flixel/system/debug/stats/Stats.hx",360,0xc15f23b8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Time,"Time")
		HX_STACK_LINE(361)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(361)
		if ((tmp)){
			HX_STACK_LINE(362)
			return null();
		}
		HX_STACK_LINE(363)
		int tmp1 = (this->_updateMarker)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(363)
		int tmp2 = Time;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(363)
		hx::IndexRef((this->_update).mPtr,tmp1) = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,flixelUpdate,(void))

Void Stats_obj::flixelDraw( int Time){
{
		HX_STACK_FRAME("flixel.system.debug.stats.Stats","flixelDraw",0xdc09ac46,"flixel.system.debug.stats.Stats.flixelDraw","flixel/system/debug/stats/Stats.hx",372,0xc15f23b8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Time,"Time")
		HX_STACK_LINE(373)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(373)
		if ((tmp)){
			HX_STACK_LINE(374)
			return null();
		}
		HX_STACK_LINE(375)
		int tmp1 = (this->_drawMarker)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(375)
		int tmp2 = Time;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(375)
		hx::IndexRef((this->_draw).mPtr,tmp1) = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,flixelDraw,(void))

Void Stats_obj::activeObjects( int Count){
{
		HX_STACK_FRAME("flixel.system.debug.stats.Stats","activeObjects",0xffa11fa8,"flixel.system.debug.stats.Stats.activeObjects","flixel/system/debug/stats/Stats.hx",384,0xc15f23b8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Count,"Count")
		HX_STACK_LINE(385)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		if ((tmp)){
			HX_STACK_LINE(386)
			return null();
		}
		HX_STACK_LINE(387)
		int tmp1 = (this->_activeObjectMarker)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(387)
		int tmp2 = Count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(387)
		hx::IndexRef((this->_activeObject).mPtr,tmp1) = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,activeObjects,(void))

Void Stats_obj::visibleObjects( int Count){
{
		HX_STACK_FRAME("flixel.system.debug.stats.Stats","visibleObjects",0x48c7f948,"flixel.system.debug.stats.Stats.visibleObjects","flixel/system/debug/stats/Stats.hx",396,0xc15f23b8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Count,"Count")
		HX_STACK_LINE(397)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		if ((tmp)){
			HX_STACK_LINE(398)
			return null();
		}
		HX_STACK_LINE(399)
		int tmp1 = (this->_visibleObjectMarker)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(399)
		int tmp2 = Count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(399)
		hx::IndexRef((this->_visibleObject).mPtr,tmp1) = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,visibleObjects,(void))

Void Stats_obj::drawCalls( int Drawcalls){
{
		HX_STACK_FRAME("flixel.system.debug.stats.Stats","drawCalls",0x25570e6b,"flixel.system.debug.stats.Stats.drawCalls","flixel/system/debug/stats/Stats.hx",408,0xc15f23b8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Drawcalls,"Drawcalls")
		HX_STACK_LINE(409)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(409)
		if ((tmp)){
			HX_STACK_LINE(410)
			return null();
		}
		HX_STACK_LINE(411)
		int tmp1 = (this->_drawCallsMarker)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(411)
		int tmp2 = Drawcalls;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(411)
		hx::IndexRef((this->_drawCalls).mPtr,tmp1) = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,drawCalls,(void))

Void Stats_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.system.debug.stats.Stats","onFocus",0x4c3dd2b3,"flixel.system.debug.stats.Stats.onFocus","flixel/system/debug/stats/Stats.hx",419,0xc15f23b8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(419)
		this->_paused = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,onFocus,(void))

Void Stats_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.system.debug.stats.Stats","onFocusLost",0x17d97e37,"flixel.system.debug.stats.Stats.onFocusLost","flixel/system/debug/stats/Stats.hx",427,0xc15f23b8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(427)
		this->_paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,onFocusLost,(void))

Void Stats_obj::toggleSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.stats.Stats","toggleSize",0x72339a3b,"flixel.system.debug.stats.Stats.toggleSize","flixel/system/debug/stats/Stats.hx",431,0xc15f23b8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(432)
		int tmp = this->_width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(432)
		bool tmp1 = (tmp == (int)160);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(432)
		if ((tmp1)){
			HX_STACK_LINE(434)
			int tmp2 = (int)320;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(434)
			int tmp3 = this->_height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(434)
			this->resize(tmp2,tmp3);
			HX_STACK_LINE(435)
			{
				HX_STACK_LINE(435)
				::flixel::_system::debug::stats::Stats _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(435)
				Float tmp4 = _g->__Field(HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(435)
				Float tmp5 = (tmp4 - (int)160);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(435)
				_g->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp5);
			}
			HX_STACK_LINE(436)
			::flixel::_system::debug::stats::StatsGraph tmp4 = this->drawTimeGraph;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(436)
			tmp4->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(true);
			HX_STACK_LINE(437)
			::flixel::_system::debug::stats::StatsGraph tmp5 = this->updateTimeGraph;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(437)
			tmp5->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(true);
			HX_STACK_LINE(438)
			::flixel::_system::ui::FlxSystemButton tmp6 = this->_toggleSizeButton;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(438)
			::flixel::_system::debug::stats::_Stats::GraphicMinimizeButton tmp7 = ::flixel::_system::debug::stats::_Stats::GraphicMinimizeButton_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(438)
			tmp6->__Field(HX_HCSTRING("changeIcon","\x09","\x1d","\xfc","\x1f"), hx::paccDynamic )(tmp7);
		}
		else{
			HX_STACK_LINE(442)
			int tmp2 = this->_height;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(442)
			this->resize((int)160,tmp2);
			HX_STACK_LINE(443)
			{
				HX_STACK_LINE(443)
				::flixel::_system::debug::stats::Stats _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(443)
				Float tmp3 = _g->__Field(HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(443)
				Float tmp4 = (tmp3 + (int)160);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(443)
				_g->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp4);
			}
			HX_STACK_LINE(444)
			::flixel::_system::debug::stats::StatsGraph tmp3 = this->drawTimeGraph;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(444)
			tmp3->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(false);
			HX_STACK_LINE(445)
			::flixel::_system::debug::stats::StatsGraph tmp4 = this->updateTimeGraph;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(445)
			tmp4->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(false);
			HX_STACK_LINE(446)
			::flixel::_system::ui::FlxSystemButton tmp5 = this->_toggleSizeButton;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(446)
			::flixel::_system::debug::stats::_Stats::GraphicMaximizeButton tmp6 = ::flixel::_system::debug::stats::_Stats::GraphicMaximizeButton_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(446)
			tmp5->__Field(HX_HCSTRING("changeIcon","\x09","\x1d","\xfc","\x1f"), hx::paccDynamic )(tmp6);
		}
		HX_STACK_LINE(449)
		this->updateSize();
		HX_STACK_LINE(450)
		this->bound();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,toggleSize,(void))

Void Stats_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.stats.Stats","updateSize",0x93323f30,"flixel.system.debug.stats.Stats.updateSize","flixel/system/debug/stats/Stats.hx",454,0xc15f23b8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(455)
		this->super::updateSize();
		HX_STACK_LINE(456)
		::flixel::_system::ui::FlxSystemButton tmp = this->_toggleSizeButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(456)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(456)
		if ((tmp1)){
			HX_STACK_LINE(458)
			::flixel::_system::ui::FlxSystemButton tmp2 = this->_toggleSizeButton;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(458)
			int tmp3 = this->_width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(458)
			::flixel::_system::ui::FlxSystemButton tmp4 = this->_toggleSizeButton;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(458)
			Float tmp5 = tmp4->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(458)
			Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(458)
			Float tmp7 = (tmp6 - (int)3);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(458)
			tmp2->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp7);
			HX_STACK_LINE(459)
			::flixel::_system::ui::FlxSystemButton tmp8 = this->_toggleSizeButton;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(459)
			tmp8->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )((int)3);
		}
	}
return null();
}


int Stats_obj::UPDATE_DELAY;

int Stats_obj::INITIAL_WIDTH;

int Stats_obj::MIN_HEIGHT;

int Stats_obj::FPS_COLOR;

int Stats_obj::MEMORY_COLOR;

int Stats_obj::DRAW_TIME_COLOR;

int Stats_obj::UPDATE_TIME_COLOR;

int Stats_obj::LABEL_COLOR;

int Stats_obj::TEXT_SIZE;

int Stats_obj::DECIMALS;


Stats_obj::Stats_obj()
{
}

void Stats_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stats);
	HX_MARK_MEMBER_NAME(_leftTextField,"_leftTextField");
	HX_MARK_MEMBER_NAME(_rightTextField,"_rightTextField");
	HX_MARK_MEMBER_NAME(_itvTime,"_itvTime");
	HX_MARK_MEMBER_NAME(_frameCount,"_frameCount");
	HX_MARK_MEMBER_NAME(_currentTime,"_currentTime");
	HX_MARK_MEMBER_NAME(fpsGraph,"fpsGraph");
	HX_MARK_MEMBER_NAME(memoryGraph,"memoryGraph");
	HX_MARK_MEMBER_NAME(drawTimeGraph,"drawTimeGraph");
	HX_MARK_MEMBER_NAME(updateTimeGraph,"updateTimeGraph");
	HX_MARK_MEMBER_NAME(flashPlayerFramerate,"flashPlayerFramerate");
	HX_MARK_MEMBER_NAME(visibleCount,"visibleCount");
	HX_MARK_MEMBER_NAME(activeCount,"activeCount");
	HX_MARK_MEMBER_NAME(updateTime,"updateTime");
	HX_MARK_MEMBER_NAME(drawTime,"drawTime");
	HX_MARK_MEMBER_NAME(drawCallsCount,"drawCallsCount");
	HX_MARK_MEMBER_NAME(_lastTime,"_lastTime");
	HX_MARK_MEMBER_NAME(_updateTimer,"_updateTimer");
	HX_MARK_MEMBER_NAME(_update,"_update");
	HX_MARK_MEMBER_NAME(_updateMarker,"_updateMarker");
	HX_MARK_MEMBER_NAME(_draw,"_draw");
	HX_MARK_MEMBER_NAME(_drawMarker,"_drawMarker");
	HX_MARK_MEMBER_NAME(_drawCalls,"_drawCalls");
	HX_MARK_MEMBER_NAME(_drawCallsMarker,"_drawCallsMarker");
	HX_MARK_MEMBER_NAME(_visibleObject,"_visibleObject");
	HX_MARK_MEMBER_NAME(_visibleObjectMarker,"_visibleObjectMarker");
	HX_MARK_MEMBER_NAME(_activeObject,"_activeObject");
	HX_MARK_MEMBER_NAME(_activeObjectMarker,"_activeObjectMarker");
	HX_MARK_MEMBER_NAME(_paused,"_paused");
	HX_MARK_MEMBER_NAME(_toggleSizeButton,"_toggleSizeButton");
	::flixel::_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stats_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_leftTextField,"_leftTextField");
	HX_VISIT_MEMBER_NAME(_rightTextField,"_rightTextField");
	HX_VISIT_MEMBER_NAME(_itvTime,"_itvTime");
	HX_VISIT_MEMBER_NAME(_frameCount,"_frameCount");
	HX_VISIT_MEMBER_NAME(_currentTime,"_currentTime");
	HX_VISIT_MEMBER_NAME(fpsGraph,"fpsGraph");
	HX_VISIT_MEMBER_NAME(memoryGraph,"memoryGraph");
	HX_VISIT_MEMBER_NAME(drawTimeGraph,"drawTimeGraph");
	HX_VISIT_MEMBER_NAME(updateTimeGraph,"updateTimeGraph");
	HX_VISIT_MEMBER_NAME(flashPlayerFramerate,"flashPlayerFramerate");
	HX_VISIT_MEMBER_NAME(visibleCount,"visibleCount");
	HX_VISIT_MEMBER_NAME(activeCount,"activeCount");
	HX_VISIT_MEMBER_NAME(updateTime,"updateTime");
	HX_VISIT_MEMBER_NAME(drawTime,"drawTime");
	HX_VISIT_MEMBER_NAME(drawCallsCount,"drawCallsCount");
	HX_VISIT_MEMBER_NAME(_lastTime,"_lastTime");
	HX_VISIT_MEMBER_NAME(_updateTimer,"_updateTimer");
	HX_VISIT_MEMBER_NAME(_update,"_update");
	HX_VISIT_MEMBER_NAME(_updateMarker,"_updateMarker");
	HX_VISIT_MEMBER_NAME(_draw,"_draw");
	HX_VISIT_MEMBER_NAME(_drawMarker,"_drawMarker");
	HX_VISIT_MEMBER_NAME(_drawCalls,"_drawCalls");
	HX_VISIT_MEMBER_NAME(_drawCallsMarker,"_drawCallsMarker");
	HX_VISIT_MEMBER_NAME(_visibleObject,"_visibleObject");
	HX_VISIT_MEMBER_NAME(_visibleObjectMarker,"_visibleObjectMarker");
	HX_VISIT_MEMBER_NAME(_activeObject,"_activeObject");
	HX_VISIT_MEMBER_NAME(_activeObjectMarker,"_activeObjectMarker");
	HX_VISIT_MEMBER_NAME(_paused,"_paused");
	HX_VISIT_MEMBER_NAME(_toggleSizeButton,"_toggleSizeButton");
	::flixel::_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stats_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_draw") ) { return _draw; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"divide") ) { return divide_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_update") ) { return _update; }
		if (HX_FIELD_EQ(inName,"_paused") ) { return _paused; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_itvTime") ) { return _itvTime; }
		if (HX_FIELD_EQ(inName,"fpsGraph") ) { return fpsGraph; }
		if (HX_FIELD_EQ(inName,"drawTime") ) { return drawTime; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_lastTime") ) { return _lastTime; }
		if (HX_FIELD_EQ(inName,"drawCalls") ) { return drawCalls_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateTime") ) { return updateTime; }
		if (HX_FIELD_EQ(inName,"_drawCalls") ) { return _drawCalls; }
		if (HX_FIELD_EQ(inName,"currentFps") ) { return currentFps_dyn(); }
		if (HX_FIELD_EQ(inName,"currentMem") ) { return currentMem_dyn(); }
		if (HX_FIELD_EQ(inName,"flixelDraw") ) { return flixelDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleSize") ) { return toggleSize_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { return _frameCount; }
		if (HX_FIELD_EQ(inName,"memoryGraph") ) { return memoryGraph; }
		if (HX_FIELD_EQ(inName,"activeCount") ) { return activeCount; }
		if (HX_FIELD_EQ(inName,"_drawMarker") ) { return _drawMarker; }
		if (HX_FIELD_EQ(inName,"updateTexts") ) { return updateTexts_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentTime") ) { return _currentTime; }
		if (HX_FIELD_EQ(inName,"visibleCount") ) { return visibleCount; }
		if (HX_FIELD_EQ(inName,"_updateTimer") ) { return _updateTimer; }
		if (HX_FIELD_EQ(inName,"intervalTime") ) { return intervalTime_dyn(); }
		if (HX_FIELD_EQ(inName,"flixelUpdate") ) { return flixelUpdate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawTimeGraph") ) { return drawTimeGraph; }
		if (HX_FIELD_EQ(inName,"_updateMarker") ) { return _updateMarker; }
		if (HX_FIELD_EQ(inName,"_activeObject") ) { return _activeObject; }
		if (HX_FIELD_EQ(inName,"activeObjects") ) { return activeObjects_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_leftTextField") ) { return _leftTextField; }
		if (HX_FIELD_EQ(inName,"drawCallsCount") ) { return drawCallsCount; }
		if (HX_FIELD_EQ(inName,"_visibleObject") ) { return _visibleObject; }
		if (HX_FIELD_EQ(inName,"visibleObjects") ) { return visibleObjects_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rightTextField") ) { return _rightTextField; }
		if (HX_FIELD_EQ(inName,"updateTimeGraph") ) { return updateTimeGraph; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_drawCallsMarker") ) { return _drawCallsMarker; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_toggleSizeButton") ) { return _toggleSizeButton; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_activeObjectMarker") ) { return _activeObjectMarker; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"flashPlayerFramerate") ) { return flashPlayerFramerate; }
		if (HX_FIELD_EQ(inName,"_visibleObjectMarker") ) { return _visibleObjectMarker; }
	}
	return super::__Field(inName,inCallProp);
}

bool Stats_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"MIN_HEIGHT") ) { outValue = MIN_HEIGHT; return true;  }
	}
	return false;
}

Dynamic Stats_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_draw") ) { _draw=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_update") ) { _update=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paused") ) { _paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_itvTime") ) { _itvTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fpsGraph") ) { fpsGraph=inValue.Cast< ::flixel::_system::debug::stats::StatsGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawTime") ) { drawTime=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_lastTime") ) { _lastTime=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateTime") ) { updateTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawCalls") ) { _drawCalls=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { _frameCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryGraph") ) { memoryGraph=inValue.Cast< ::flixel::_system::debug::stats::StatsGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"activeCount") ) { activeCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawMarker") ) { _drawMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentTime") ) { _currentTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visibleCount") ) { visibleCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateTimer") ) { _updateTimer=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawTimeGraph") ) { drawTimeGraph=inValue.Cast< ::flixel::_system::debug::stats::StatsGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateMarker") ) { _updateMarker=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeObject") ) { _activeObject=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_leftTextField") ) { _leftTextField=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawCallsCount") ) { drawCallsCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_visibleObject") ) { _visibleObject=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rightTextField") ) { _rightTextField=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updateTimeGraph") ) { updateTimeGraph=inValue.Cast< ::flixel::_system::debug::stats::StatsGraph >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_drawCallsMarker") ) { _drawCallsMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_toggleSizeButton") ) { _toggleSizeButton=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_activeObjectMarker") ) { _activeObjectMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"flashPlayerFramerate") ) { flashPlayerFramerate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_visibleObjectMarker") ) { _visibleObjectMarker=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stats_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"MIN_HEIGHT") ) { MIN_HEIGHT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Stats_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_leftTextField","\x07","\x34","\xbe","\x51"));
	outFields->push(HX_HCSTRING("_rightTextField","\xf0","\xe5","\xf5","\xc1"));
	outFields->push(HX_HCSTRING("_itvTime","\x59","\x55","\x8a","\xd2"));
	outFields->push(HX_HCSTRING("_frameCount","\x81","\x46","\x13","\x00"));
	outFields->push(HX_HCSTRING("_currentTime","\xe7","\x52","\x98","\xeb"));
	outFields->push(HX_HCSTRING("fpsGraph","\xa5","\x6a","\x9f","\x23"));
	outFields->push(HX_HCSTRING("memoryGraph","\x8d","\x30","\x93","\x6c"));
	outFields->push(HX_HCSTRING("drawTimeGraph","\x5d","\xf7","\x01","\xae"));
	outFields->push(HX_HCSTRING("updateTimeGraph","\xb8","\xb4","\x65","\x9e"));
	outFields->push(HX_HCSTRING("flashPlayerFramerate","\x1c","\x9e","\xc7","\x3e"));
	outFields->push(HX_HCSTRING("visibleCount","\xfd","\x5e","\xe8","\xbf"));
	outFields->push(HX_HCSTRING("activeCount","\x29","\x45","\xa8","\xa6"));
	outFields->push(HX_HCSTRING("updateTime","\xb6","\xb6","\xb1","\x05"));
	outFields->push(HX_HCSTRING("drawTime","\x31","\x76","\x66","\x61"));
	outFields->push(HX_HCSTRING("drawCallsCount","\x9e","\x73","\x40","\xb2"));
	outFields->push(HX_HCSTRING("_lastTime","\xe2","\xdc","\xdb","\x27"));
	outFields->push(HX_HCSTRING("_updateTimer","\xfd","\xd6","\xd7","\x5b"));
	outFields->push(HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5"));
	outFields->push(HX_HCSTRING("_updateMarker","\x82","\xaf","\xa2","\x9c"));
	outFields->push(HX_HCSTRING("_draw","\xe3","\x47","\x81","\xf5"));
	outFields->push(HX_HCSTRING("_drawMarker","\xfd","\xbd","\xbd","\xce"));
	outFields->push(HX_HCSTRING("_drawCalls","\x32","\x23","\xc9","\x64"));
	outFields->push(HX_HCSTRING("_drawCallsMarker","\x8c","\x7e","\xfb","\x1e"));
	outFields->push(HX_HCSTRING("_visibleObject","\x12","\x3d","\x83","\xb2"));
	outFields->push(HX_HCSTRING("_visibleObjectMarker","\x6c","\x40","\x96","\x6f"));
	outFields->push(HX_HCSTRING("_activeObject","\x04","\x60","\xc9","\x57"));
	outFields->push(HX_HCSTRING("_activeObjectMarker","\xde","\x24","\x6c","\x76"));
	outFields->push(HX_HCSTRING("_paused","\x4d","\x52","\xfb","\x5d"));
	outFields->push(HX_HCSTRING("_toggleSizeButton","\xa6","\x70","\xb9","\x01"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Stats_obj,_leftTextField),HX_HCSTRING("_leftTextField","\x07","\x34","\xbe","\x51")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Stats_obj,_rightTextField),HX_HCSTRING("_rightTextField","\xf0","\xe5","\xf5","\xc1")},
	{hx::fsInt,(int)offsetof(Stats_obj,_itvTime),HX_HCSTRING("_itvTime","\x59","\x55","\x8a","\xd2")},
	{hx::fsInt,(int)offsetof(Stats_obj,_frameCount),HX_HCSTRING("_frameCount","\x81","\x46","\x13","\x00")},
	{hx::fsInt,(int)offsetof(Stats_obj,_currentTime),HX_HCSTRING("_currentTime","\xe7","\x52","\x98","\xeb")},
	{hx::fsObject /*::flixel::_system::debug::stats::StatsGraph*/ ,(int)offsetof(Stats_obj,fpsGraph),HX_HCSTRING("fpsGraph","\xa5","\x6a","\x9f","\x23")},
	{hx::fsObject /*::flixel::_system::debug::stats::StatsGraph*/ ,(int)offsetof(Stats_obj,memoryGraph),HX_HCSTRING("memoryGraph","\x8d","\x30","\x93","\x6c")},
	{hx::fsObject /*::flixel::_system::debug::stats::StatsGraph*/ ,(int)offsetof(Stats_obj,drawTimeGraph),HX_HCSTRING("drawTimeGraph","\x5d","\xf7","\x01","\xae")},
	{hx::fsObject /*::flixel::_system::debug::stats::StatsGraph*/ ,(int)offsetof(Stats_obj,updateTimeGraph),HX_HCSTRING("updateTimeGraph","\xb8","\xb4","\x65","\x9e")},
	{hx::fsFloat,(int)offsetof(Stats_obj,flashPlayerFramerate),HX_HCSTRING("flashPlayerFramerate","\x1c","\x9e","\xc7","\x3e")},
	{hx::fsInt,(int)offsetof(Stats_obj,visibleCount),HX_HCSTRING("visibleCount","\xfd","\x5e","\xe8","\xbf")},
	{hx::fsInt,(int)offsetof(Stats_obj,activeCount),HX_HCSTRING("activeCount","\x29","\x45","\xa8","\xa6")},
	{hx::fsInt,(int)offsetof(Stats_obj,updateTime),HX_HCSTRING("updateTime","\xb6","\xb6","\xb1","\x05")},
	{hx::fsInt,(int)offsetof(Stats_obj,drawTime),HX_HCSTRING("drawTime","\x31","\x76","\x66","\x61")},
	{hx::fsInt,(int)offsetof(Stats_obj,drawCallsCount),HX_HCSTRING("drawCallsCount","\x9e","\x73","\x40","\xb2")},
	{hx::fsInt,(int)offsetof(Stats_obj,_lastTime),HX_HCSTRING("_lastTime","\xe2","\xdc","\xdb","\x27")},
	{hx::fsInt,(int)offsetof(Stats_obj,_updateTimer),HX_HCSTRING("_updateTimer","\xfd","\xd6","\xd7","\x5b")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stats_obj,_update),HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5")},
	{hx::fsInt,(int)offsetof(Stats_obj,_updateMarker),HX_HCSTRING("_updateMarker","\x82","\xaf","\xa2","\x9c")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stats_obj,_draw),HX_HCSTRING("_draw","\xe3","\x47","\x81","\xf5")},
	{hx::fsInt,(int)offsetof(Stats_obj,_drawMarker),HX_HCSTRING("_drawMarker","\xfd","\xbd","\xbd","\xce")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stats_obj,_drawCalls),HX_HCSTRING("_drawCalls","\x32","\x23","\xc9","\x64")},
	{hx::fsInt,(int)offsetof(Stats_obj,_drawCallsMarker),HX_HCSTRING("_drawCallsMarker","\x8c","\x7e","\xfb","\x1e")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stats_obj,_visibleObject),HX_HCSTRING("_visibleObject","\x12","\x3d","\x83","\xb2")},
	{hx::fsInt,(int)offsetof(Stats_obj,_visibleObjectMarker),HX_HCSTRING("_visibleObjectMarker","\x6c","\x40","\x96","\x6f")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stats_obj,_activeObject),HX_HCSTRING("_activeObject","\x04","\x60","\xc9","\x57")},
	{hx::fsInt,(int)offsetof(Stats_obj,_activeObjectMarker),HX_HCSTRING("_activeObjectMarker","\xde","\x24","\x6c","\x76")},
	{hx::fsBool,(int)offsetof(Stats_obj,_paused),HX_HCSTRING("_paused","\x4d","\x52","\xfb","\x5d")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(Stats_obj,_toggleSizeButton),HX_HCSTRING("_toggleSizeButton","\xa6","\x70","\xb9","\x01")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Stats_obj::UPDATE_DELAY,HX_HCSTRING("UPDATE_DELAY","\x6d","\x35","\xf7","\x07")},
	{hx::fsInt,(void *) &Stats_obj::INITIAL_WIDTH,HX_HCSTRING("INITIAL_WIDTH","\x8b","\x7c","\x50","\x0d")},
	{hx::fsInt,(void *) &Stats_obj::MIN_HEIGHT,HX_HCSTRING("MIN_HEIGHT","\x54","\x8a","\xe1","\x8d")},
	{hx::fsInt,(void *) &Stats_obj::FPS_COLOR,HX_HCSTRING("FPS_COLOR","\x0d","\xd1","\x6d","\xcd")},
	{hx::fsInt,(void *) &Stats_obj::MEMORY_COLOR,HX_HCSTRING("MEMORY_COLOR","\x45","\x1e","\xbd","\xfc")},
	{hx::fsInt,(void *) &Stats_obj::DRAW_TIME_COLOR,HX_HCSTRING("DRAW_TIME_COLOR","\xec","\x9b","\xc0","\x3b")},
	{hx::fsInt,(void *) &Stats_obj::UPDATE_TIME_COLOR,HX_HCSTRING("UPDATE_TIME_COLOR","\x07","\x42","\x13","\x96")},
	{hx::fsInt,(void *) &Stats_obj::LABEL_COLOR,HX_HCSTRING("LABEL_COLOR","\x58","\x4d","\x57","\xfe")},
	{hx::fsInt,(void *) &Stats_obj::TEXT_SIZE,HX_HCSTRING("TEXT_SIZE","\xd3","\xdc","\x4f","\x6d")},
	{hx::fsInt,(void *) &Stats_obj::DECIMALS,HX_HCSTRING("DECIMALS","\xc2","\xda","\xef","\x6b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_leftTextField","\x07","\x34","\xbe","\x51"),
	HX_HCSTRING("_rightTextField","\xf0","\xe5","\xf5","\xc1"),
	HX_HCSTRING("_itvTime","\x59","\x55","\x8a","\xd2"),
	HX_HCSTRING("_frameCount","\x81","\x46","\x13","\x00"),
	HX_HCSTRING("_currentTime","\xe7","\x52","\x98","\xeb"),
	HX_HCSTRING("fpsGraph","\xa5","\x6a","\x9f","\x23"),
	HX_HCSTRING("memoryGraph","\x8d","\x30","\x93","\x6c"),
	HX_HCSTRING("drawTimeGraph","\x5d","\xf7","\x01","\xae"),
	HX_HCSTRING("updateTimeGraph","\xb8","\xb4","\x65","\x9e"),
	HX_HCSTRING("flashPlayerFramerate","\x1c","\x9e","\xc7","\x3e"),
	HX_HCSTRING("visibleCount","\xfd","\x5e","\xe8","\xbf"),
	HX_HCSTRING("activeCount","\x29","\x45","\xa8","\xa6"),
	HX_HCSTRING("updateTime","\xb6","\xb6","\xb1","\x05"),
	HX_HCSTRING("drawTime","\x31","\x76","\x66","\x61"),
	HX_HCSTRING("drawCallsCount","\x9e","\x73","\x40","\xb2"),
	HX_HCSTRING("_lastTime","\xe2","\xdc","\xdb","\x27"),
	HX_HCSTRING("_updateTimer","\xfd","\xd6","\xd7","\x5b"),
	HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5"),
	HX_HCSTRING("_updateMarker","\x82","\xaf","\xa2","\x9c"),
	HX_HCSTRING("_draw","\xe3","\x47","\x81","\xf5"),
	HX_HCSTRING("_drawMarker","\xfd","\xbd","\xbd","\xce"),
	HX_HCSTRING("_drawCalls","\x32","\x23","\xc9","\x64"),
	HX_HCSTRING("_drawCallsMarker","\x8c","\x7e","\xfb","\x1e"),
	HX_HCSTRING("_visibleObject","\x12","\x3d","\x83","\xb2"),
	HX_HCSTRING("_visibleObjectMarker","\x6c","\x40","\x96","\x6f"),
	HX_HCSTRING("_activeObject","\x04","\x60","\xc9","\x57"),
	HX_HCSTRING("_activeObjectMarker","\xde","\x24","\x6c","\x76"),
	HX_HCSTRING("_paused","\x4d","\x52","\xfb","\x5d"),
	HX_HCSTRING("_toggleSizeButton","\xa6","\x70","\xb9","\x01"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateTexts","\x5d","\xb4","\x31","\xf3"),
	HX_HCSTRING("divide","\x79","\x2f","\x12","\xbf"),
	HX_HCSTRING("currentFps","\x30","\x8d","\x28","\xc7"),
	HX_HCSTRING("intervalTime","\xf2","\xf7","\x28","\x85"),
	HX_HCSTRING("currentMem","\x5c","\xd3","\x2d","\xc7"),
	HX_HCSTRING("flixelUpdate","\x85","\x69","\x5e","\x27"),
	HX_HCSTRING("flixelDraw","\x80","\xf8","\xdf","\x4d"),
	HX_HCSTRING("activeObjects","\xae","\xb3","\x18","\x3a"),
	HX_HCSTRING("visibleObjects","\x82","\xea","\xf1","\x36"),
	HX_HCSTRING("drawCalls","\x71","\xa7","\x26","\x09"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("toggleSize","\x75","\xe6","\x09","\xe4"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stats_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stats_obj::UPDATE_DELAY,"UPDATE_DELAY");
	HX_MARK_MEMBER_NAME(Stats_obj::INITIAL_WIDTH,"INITIAL_WIDTH");
	HX_MARK_MEMBER_NAME(Stats_obj::MIN_HEIGHT,"MIN_HEIGHT");
	HX_MARK_MEMBER_NAME(Stats_obj::FPS_COLOR,"FPS_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::MEMORY_COLOR,"MEMORY_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::DRAW_TIME_COLOR,"DRAW_TIME_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::UPDATE_TIME_COLOR,"UPDATE_TIME_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::LABEL_COLOR,"LABEL_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::TEXT_SIZE,"TEXT_SIZE");
	HX_MARK_MEMBER_NAME(Stats_obj::DECIMALS,"DECIMALS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stats_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stats_obj::UPDATE_DELAY,"UPDATE_DELAY");
	HX_VISIT_MEMBER_NAME(Stats_obj::INITIAL_WIDTH,"INITIAL_WIDTH");
	HX_VISIT_MEMBER_NAME(Stats_obj::MIN_HEIGHT,"MIN_HEIGHT");
	HX_VISIT_MEMBER_NAME(Stats_obj::FPS_COLOR,"FPS_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::MEMORY_COLOR,"MEMORY_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::DRAW_TIME_COLOR,"DRAW_TIME_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::UPDATE_TIME_COLOR,"UPDATE_TIME_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::LABEL_COLOR,"LABEL_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::TEXT_SIZE,"TEXT_SIZE");
	HX_VISIT_MEMBER_NAME(Stats_obj::DECIMALS,"DECIMALS");
};

#endif

hx::Class Stats_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("UPDATE_DELAY","\x6d","\x35","\xf7","\x07"),
	HX_HCSTRING("INITIAL_WIDTH","\x8b","\x7c","\x50","\x0d"),
	HX_HCSTRING("MIN_HEIGHT","\x54","\x8a","\xe1","\x8d"),
	HX_HCSTRING("FPS_COLOR","\x0d","\xd1","\x6d","\xcd"),
	HX_HCSTRING("MEMORY_COLOR","\x45","\x1e","\xbd","\xfc"),
	HX_HCSTRING("DRAW_TIME_COLOR","\xec","\x9b","\xc0","\x3b"),
	HX_HCSTRING("UPDATE_TIME_COLOR","\x07","\x42","\x13","\x96"),
	HX_HCSTRING("LABEL_COLOR","\x58","\x4d","\x57","\xfe"),
	HX_HCSTRING("TEXT_SIZE","\xd3","\xdc","\x4f","\x6d"),
	HX_HCSTRING("DECIMALS","\xc2","\xda","\xef","\x6b"),
	::String(null()) };

void Stats_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.stats.Stats","\xe8","\x2a","\x65","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stats_obj::__GetStatic;
	__mClass->mSetStaticField = &Stats_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stats_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Stats_obj::__boot()
{
	UPDATE_DELAY= (int)250;
	INITIAL_WIDTH= (int)160;
	MIN_HEIGHT= (int)0;
	FPS_COLOR= (int)-6881536;
	MEMORY_COLOR= (int)-16737025;
	DRAW_TIME_COLOR= (int)-5898236;
	UPDATE_TIME_COLOR= (int)-2305024;
	LABEL_COLOR= (int)-1426063361;
	TEXT_SIZE= (int)11;
	DECIMALS= (int)1;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace stats
