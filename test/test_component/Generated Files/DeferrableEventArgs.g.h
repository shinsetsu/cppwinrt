// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#include "winrt/test_component.h"
namespace winrt::test_component::implementation
{
    template <typename D, typename... I>
    struct __declspec(empty_bases) DeferrableEventArgs_base : implements<D, test_component::DeferrableEventArgs, I...>
    {
        using base_type = DeferrableEventArgs_base;
        using class_type = test_component::DeferrableEventArgs;
        using implements_type = typename DeferrableEventArgs_base::implements_type;
        using implements_type::implements_type;
        
        hstring GetRuntimeClassName() const
        {
            return L"test_component.DeferrableEventArgs";
        }
    };
}

#if defined(WINRT_FORCE_INCLUDE_DEFERRABLEEVENTARGS_XAML_G_H) || __has_include("DeferrableEventArgs.xaml.g.h")
#include "DeferrableEventArgs.xaml.g.h"
#else

namespace winrt::test_component::implementation
{
    template <typename D, typename... I>
    using DeferrableEventArgsT = DeferrableEventArgs_base<D, I...>;
}

#endif
