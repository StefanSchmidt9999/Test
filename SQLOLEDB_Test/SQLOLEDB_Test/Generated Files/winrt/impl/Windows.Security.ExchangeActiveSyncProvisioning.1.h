// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.250303.1

#pragma once
#ifndef WINRT_Windows_Security_ExchangeActiveSyncProvisioning_1_H
#define WINRT_Windows_Security_ExchangeActiveSyncProvisioning_1_H
#include "winrt/impl/Windows.Security.ExchangeActiveSyncProvisioning.0.h"
WINRT_EXPORT namespace winrt::Windows::Security::ExchangeActiveSyncProvisioning
{
    struct WINRT_IMPL_EMPTY_BASES IEasClientDeviceInformation :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IEasClientDeviceInformation>
    {
        IEasClientDeviceInformation(std::nullptr_t = nullptr) noexcept {}
        IEasClientDeviceInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IEasClientDeviceInformation2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IEasClientDeviceInformation2>,
        impl::require<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2, winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
    {
        IEasClientDeviceInformation2(std::nullptr_t = nullptr) noexcept {}
        IEasClientDeviceInformation2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
