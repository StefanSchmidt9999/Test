#include "pch.h"
#include "DataAccess.h"

#import "C:\Program Files\Common Files\System\ado\msado15.dll" no_namespace rename("EOF", "EndOfFile")

namespace winrt::SQLOLEDB_Test::implementation
{
    std::vector<winrt::SQLOLEDB_Test::implementation::classPersonViewModel> ExecuteStoredProc(const std::wstring& lastName)
    {
        std::vector<winrt::SQLOLEDB_Test::implementation::classPersonViewModel> result;

        ::CoInitialize(nullptr);
        _ConnectionPtr connection;
        connection.CreateInstance(__uuidof(Connection));
        connection->Open(L"Provider=SQLOLEDB;Data Source=DESKTOP-GMB052;Initial Catalog=AdventureWorks2022;Integrated Security=SSPI;", L"", L"", adConnectUnspecified);

        _CommandPtr command;
        command.CreateInstance(__uuidof(Command));
        command->ActiveConnection = connection;
        command->CommandText = L"{CALL dbo.GetPersonsByLastName(?)}";
        command->CommandType = adCmdText;

        _ParameterPtr param;
        param = command->CreateParameter(L"@LastName", adVarWChar, adParamInput, 50, _variant_t(lastName.c_str()));
        command->Parameters->Append(param);

        _RecordsetPtr rs = command->Execute(nullptr, nullptr, adCmdText);
        while (!rs->EndOfFile)
        {
            classPersonViewModel p;
            p.BusinessEntityID = rs->Fields->Item[L"BusinessEntityID"]->Value.intVal;
            p.FirstName = rs->Fields->Item[L"FirstName"]->Value.bstrVal;
            p.LastName = rs->Fields->Item[L"LastName"]->Value.bstrVal;

            result.push_back(p);
            rs->MoveNext();
        }

        rs->Close();
        connection->Close();
        ::CoUninitialize();

        return result;
    }
}