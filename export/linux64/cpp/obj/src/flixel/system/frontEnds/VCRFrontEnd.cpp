#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicArrowRight
#include <flixel/system/debug/GraphicArrowRight.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_debug__VCR_GraphicPause
#include <flixel/system/debug/_VCR/GraphicPause.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_openfl__legacy_ui_Mouse
#include <openfl/_legacy/ui/Mouse.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void VCRFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.VCRFrontEnd","new",0x9592d9ef,"flixel.system.frontEnds.VCRFrontEnd.new","flixel/system/frontEnds/VCRFrontEnd.hx",17,0xa1666a42)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(51)
	this->stepRequested = false;
	HX_STACK_LINE(47)
	this->paused = false;
}
;
	return null();
}

//VCRFrontEnd_obj::~VCRFrontEnd_obj() { }

Dynamic VCRFrontEnd_obj::__CreateEmpty() { return  new VCRFrontEnd_obj; }
hx::ObjectPtr< VCRFrontEnd_obj > VCRFrontEnd_obj::__new()
{  hx::ObjectPtr< VCRFrontEnd_obj > _result_ = new VCRFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic VCRFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VCRFrontEnd_obj > _result_ = new VCRFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Void VCRFrontEnd_obj::pause( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.VCRFrontEnd","pause",0x6797a245,"flixel.system.frontEnds.VCRFrontEnd.pause","flixel/system/frontEnds/VCRFrontEnd.hx",57,0xa1666a42)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		if ((tmp1)){
			HX_STACK_LINE(61)
			::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			bool tmp3 = tmp2->useSystemCursor;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			if ((tmp4)){
				HX_STACK_LINE(62)
				::openfl::_legacy::ui::Mouse_obj::show();
			}
			HX_STACK_LINE(65)
			this->paused = true;
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(68)
				::flixel::_system::debug::VCR tmp6 = tmp5->debugger->__Field(HX_HCSTRING("vcr","\xa5","\xe0","\x59","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(68)
				::flixel::_system::debug::VCR _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(68)
				::flixel::_system::frontEnds::VCRFrontEnd tmp7 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(68)
				_this->__Field(HX_HCSTRING("playbackToggleBtn","\x8d","\xe1","\xd3","\xfc"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("upHandler","\xaf","\xc2","\x8d","\x81")) = tmp7->__Field(HX_HCSTRING("resume","\xad","\x69","\x84","\x08"), hx::paccDynamic );
				HX_STACK_LINE(68)
				::flixel::_system::debug::GraphicArrowRight tmp8 = ::flixel::_system::debug::GraphicArrowRight_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(68)
				_this->__Field(HX_HCSTRING("playbackToggleBtn","\x8d","\xe1","\xd3","\xfc"), hx::paccDynamic )->__Field(HX_HCSTRING("changeIcon","\x09","\x1d","\xfc","\x1f"), hx::paccDynamic )(tmp8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCRFrontEnd_obj,pause,(void))

Void VCRFrontEnd_obj::resume( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.VCRFrontEnd","resume",0x5616837e,"flixel.system.frontEnds.VCRFrontEnd.resume","flixel/system/frontEnds/VCRFrontEnd.hx",77,0xa1666a42)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		if ((tmp)){
			HX_STACK_LINE(81)
			::flixel::input::mouse::FlxMouse tmp1 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(81)
			bool tmp2 = tmp1->useSystemCursor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(81)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			if ((tmp3)){
				HX_STACK_LINE(82)
				::openfl::_legacy::ui::Mouse_obj::hide();
			}
			HX_STACK_LINE(85)
			this->paused = false;
			HX_STACK_LINE(88)
			{
				HX_STACK_LINE(88)
				::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(88)
				::flixel::_system::debug::VCR tmp5 = tmp4->debugger->__Field(HX_HCSTRING("vcr","\xa5","\xe0","\x59","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(88)
				::flixel::_system::debug::VCR _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(88)
				::flixel::_system::frontEnds::VCRFrontEnd tmp6 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(88)
				_this->__Field(HX_HCSTRING("playbackToggleBtn","\x8d","\xe1","\xd3","\xfc"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("upHandler","\xaf","\xc2","\x8d","\x81")) = tmp6->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic );
				HX_STACK_LINE(88)
				::flixel::_system::debug::_VCR::GraphicPause tmp7 = ::flixel::_system::debug::_VCR::GraphicPause_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(88)
				_this->__Field(HX_HCSTRING("playbackToggleBtn","\x8d","\xe1","\xd3","\xfc"), hx::paccDynamic )->__Field(HX_HCSTRING("changeIcon","\x09","\x1d","\xfc","\x1f"), hx::paccDynamic )(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCRFrontEnd_obj,resume,(void))


VCRFrontEnd_obj::VCRFrontEnd_obj()
{
}

Dynamic VCRFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stepRequested") ) { return stepRequested; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VCRFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stepRequested") ) { stepRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VCRFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(VCRFrontEnd_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsBool,(int)offsetof(VCRFrontEnd_obj,stepRequested),HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VCRFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VCRFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class VCRFrontEnd_obj::__mClass;

void VCRFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.VCRFrontEnd","\x7d","\xb6","\xad","\xb5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VCRFrontEnd_obj >;
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

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
