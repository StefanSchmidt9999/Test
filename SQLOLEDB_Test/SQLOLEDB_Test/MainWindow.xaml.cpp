#include "pch.h"

#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

#include "DataAccess.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::SQLOLEDB_Test::implementation
{
    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    winrt::SQLOLEDB_Test::implementation::MainWindow::MainWindow()
    {
        // Xaml objects should not call InitializeComponent during construction.
        // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void winrt::SQLOLEDB_Test::implementation::MainWindow::OnSqlQueryClicked(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::RoutedEventArgs const&)
    {
        auto personen = ExecuteStoredProc(L"Schmidt");
        winrt::Windows::Foundation::Collections::IObservableVector<winrt::SQLOLEDB_Test::implementation::PersonViewModel> observable = winrt::single_threaded_observable_vector<winrt::SQLOLEDB_Test::implementation::PersonViewModel>();

        for (auto const& p : personen)
            observable.Append(p);

        PersonListView().ItemsSource(observable);
    }
}
