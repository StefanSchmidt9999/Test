﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------

#include "pch.h"
#include <windows.h>
#include "App.xaml.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BREAK_ON_UNHANDLED_EXCEPTION
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif


#if (defined(_M_IX86) || defined(_M_AMD64) || defined(_M_ARM) || defined(_M_ARM64)) && !defined(_VSDESIGNER_DONT_LOAD_AS_DLL)
#if defined(_M_IX86)
#pragma comment(linker, "/EXPORT:DllGetActivationFactory=_VSDesignerDllGetActivationFactory@8,PRIVATE")
#pragma comment(linker, "/EXPORT:DllCanUnloadNow=_VSDesignerCanUnloadNow@0,PRIVATE")
#pragma comment(linker, "/EXPORT:VSDesignerDllMain=_VSDesignerDllMain@12,PRIVATE")
#elif defined(_M_AMD64) || defined(_M_ARM) || defined(_M_ARM64)
#pragma comment(linker, "/EXPORT:DllGetActivationFactory=VSDesignerDllGetActivationFactory,PRIVATE")
#pragma comment(linker, "/EXPORT:VSDesignerCanUnloadNow,PRIVATE")
#pragma comment(linker, "/EXPORT:VSDesignerDllMain,PRIVATE")
#endif

extern "C"
{
    int __stdcall _DllMainCRTStartup(void* hinstDLL, unsigned long fdwReason, void** lpvReserved);

    int __stdcall VSDesignerDllGetActivationFactory(void* classId, void** factory)
    {
        return WINRT_GetActivationFactory(classId, factory);
    }

    int __stdcall VSDesignerCanUnloadNow()
    {
        return WINRT_CanUnloadNow();
    }

    int __stdcall VSDesignerDllMain(void* hinstDLL, unsigned long fdwReason, void** lpvReserved)
    {
        return _DllMainCRTStartup(hinstDLL, fdwReason, lpvReserved);
    }
}

#endif // (defined(_M_IX86) || defined(_M_AMD64) || defined(_M_ARM) || defined(_M_ARM64))) && !defined(_VSDESIGNER_DONT_LOAD_AS_DLL)

#ifndef DISABLE_XAML_GENERATED_MAIN
int __stdcall wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
    winrt::init_apartment(winrt::apartment_type::single_threaded);
    ::winrt::Microsoft::UI::Xaml::Application::Start(
        [](auto&&)
        {
            ::winrt::make<::winrt::SQLOLEDB_Test::implementation::App>();
        });

    return 0;
}
#endif

