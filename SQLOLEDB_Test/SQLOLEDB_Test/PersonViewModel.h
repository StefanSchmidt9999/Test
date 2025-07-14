#pragma once
#include "pch.h"
#include <cstdint>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/base.h>

namespace winrt::SQLOLEDB_Test::implementation
{
    /*struct structPersonViewModel
    {
        int32_t BusinessEntityID;
        winrt::hstring FirstName;
        winrt::hstring LastName;
	};*/

    class classPersonViewModel
    {
        public:
            int32_t BusinessEntityID;
            winrt::hstring FirstName;
            winrt::hstring LastName;

            winrt::SQLOLEDB_Test::implementation::classPersonViewModel();
            winrt::SQLOLEDB_Test::implementation::classPersonViewModel(int32_t id, winrt::hstring firstName, winrt::hstring lastName);
    };
}