#include "pch.h"

#include "PersonViewModel.h"


namespace winrt::SQLOLEDB_Test::implementation
{
	winrt::SQLOLEDB_Test::implementation::classPersonViewModel() = default;

	winrt::SQLOLEDB_Test::implementation::classPersonViewModel(int32_t id, firstName, winrt::hstring lastName) : BusinessEntityID(id), FirstName(firstName), LastName(lastName)
	{
	}
	
	
}