// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_test_component_base_1_H
#define WINRT_test_component_base_1_H
#include "winrt/impl/test_component_base.0.h"
WINRT_EXPORT namespace winrt::test_component_base
{
    struct __declspec(empty_bases) IHierarchyA :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHierarchyA>
    {
        IHierarchyA(std::nullptr_t = nullptr) noexcept {}
        IHierarchyA(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHierarchyAFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHierarchyAFactory>
    {
        IHierarchyAFactory(std::nullptr_t = nullptr) noexcept {}
        IHierarchyAFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHierarchyB :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHierarchyB>
    {
        IHierarchyB(std::nullptr_t = nullptr) noexcept {}
        IHierarchyB(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHierarchyBFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHierarchyBFactory>
    {
        IHierarchyBFactory(std::nullptr_t = nullptr) noexcept {}
        IHierarchyBFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
