// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#include "winrt/test_component.Velocity.h"
namespace winrt::test_component::Velocity::implementation
{
    template <typename D, typename... I>
    struct __declspec(empty_bases) Class2_base : implements<D, test_component::Velocity::Class2, I...>
    {
        using base_type = Class2_base;
        using class_type = test_component::Velocity::Class2;
        using implements_type = typename Class2_base::implements_type;
        using implements_type::implements_type;
        
        hstring GetRuntimeClassName() const
        {
            return L"test_component.Velocity.Class2";
        }
    };
}
namespace winrt::test_component::Velocity::factory_implementation
{
    template <typename D, typename T, typename... I>
    struct __declspec(empty_bases) Class2T : implements<D, Windows::Foundation::IActivationFactory, I...>
    {
        using instance_type = test_component::Velocity::Class2;

        hstring GetRuntimeClassName() const
        {
            return L"test_component.Velocity.Class2";
        }
        auto ActivateInstance() const
        {
            return make<T>();
        }
    };
}

#if defined(WINRT_FORCE_INCLUDE_CLASS2_XAML_G_H) || __has_include("Velocity.Class2.xaml.g.h")
#include "Velocity.Class2.xaml.g.h"
#else

namespace winrt::test_component::Velocity::implementation
{
    template <typename D, typename... I>
    using Class2T = Class2_base<D, I...>;
}

#endif
