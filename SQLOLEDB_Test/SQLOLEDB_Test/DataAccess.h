#pragma once

#include <comdef.h>
#include "PersonViewModel.h"
#include <vector>

namespace winrt::SQLOLEDB_Test::implementation
{
	std::vector<winrt::SQLOLEDB_Test::implementation::classPersonViewModel> ExecuteStoredProc(const std::wstring& lastName);
}
