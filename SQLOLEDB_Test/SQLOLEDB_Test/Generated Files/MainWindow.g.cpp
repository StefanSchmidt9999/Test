// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.250303.1

void* winrt_make_SQLOLEDB_Test_MainWindow()
{
    return winrt::detach_abi(winrt::make<winrt::SQLOLEDB_Test::factory_implementation::MainWindow>());
}
WINRT_EXPORT namespace winrt::SQLOLEDB_Test
{
    MainWindow::MainWindow() :
        MainWindow(make<SQLOLEDB_Test::implementation::MainWindow>())
    {
    }
}
