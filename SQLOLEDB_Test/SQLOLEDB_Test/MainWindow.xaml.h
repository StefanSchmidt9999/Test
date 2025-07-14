#pragma once

#include "MainWindow.g.h"

namespace winrt::SQLOLEDB_Test::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();
        
        int32_t MyProperty();
        void MyProperty(int32_t value);
        void winrt::SQLOLEDB_Test::implementation::MainWindow::OnSqlQueryClicked(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::RoutedEventArgs const&);
    };
}

namespace winrt::SQLOLEDB_Test::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
