// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_test_component_base_H
#define WINRT_test_component_base_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.3.4.5"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/test_component_base.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_test_component_base_IHierarchyA<D>::HierarchyA_Method() const
    {
        check_hresult(WINRT_IMPL_SHIM(test_component_base::IHierarchyA)->HierarchyA_Method());
    }
    template <typename D> auto consume_test_component_base_IHierarchyAFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(test_component_base::IHierarchyAFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return test_component_base::HierarchyA{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_test_component_base_IHierarchyAFactory<D>::CreateInstance2(param::hstring const& name, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(test_component_base::IHierarchyAFactory)->CreateInstance2(*(void**)(&name), *(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return test_component_base::HierarchyA{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_test_component_base_IHierarchyB<D>::HierarchyB_Method() const
    {
        check_hresult(WINRT_IMPL_SHIM(test_component_base::IHierarchyB)->HierarchyB_Method());
    }
    template <typename D> auto consume_test_component_base_IHierarchyBFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(test_component_base::IHierarchyBFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return test_component_base::HierarchyB{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_test_component_base_IHierarchyBFactory<D>::CreateInstance2(param::hstring const& name, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(test_component_base::IHierarchyBFactory)->CreateInstance2(*(void**)(&name), *(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return test_component_base::HierarchyB{ value, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, test_component_base::IHierarchyA> : produce_base<D, test_component_base::IHierarchyA>
    {
        int32_t __stdcall HierarchyA_Method() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HierarchyA_Method();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, test_component_base::IHierarchyAFactory> : produce_base<D, test_component_base::IHierarchyAFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<test_component_base::HierarchyA>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstance2(void* name, void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<test_component_base::HierarchyA>(this->shim().CreateInstance2(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, test_component_base::IHierarchyB> : produce_base<D, test_component_base::IHierarchyB>
    {
        int32_t __stdcall HierarchyB_Method() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HierarchyB_Method();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, test_component_base::IHierarchyBFactory> : produce_base<D, test_component_base::IHierarchyBFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<test_component_base::HierarchyB>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstance2(void* name, void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<test_component_base::HierarchyB>(this->shim().CreateInstance2(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
WINRT_EXPORT namespace winrt::test_component_base
{
    inline HierarchyA::HierarchyA()
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<HierarchyA, IHierarchyAFactory>([&](IHierarchyAFactory const& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline HierarchyA::HierarchyA(param::hstring const& name)
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<HierarchyA, IHierarchyAFactory>([&](IHierarchyAFactory const& f) { return f.CreateInstance2(name, baseInterface, innerInterface); });
    }
    inline HierarchyB::HierarchyB()
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<HierarchyB, IHierarchyBFactory>([&](IHierarchyBFactory const& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline HierarchyB::HierarchyB(param::hstring const& name)
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<HierarchyB, IHierarchyBFactory>([&](IHierarchyBFactory const& f) { return f.CreateInstance2(name, baseInterface, innerInterface); });
    }
    template <typename D, typename... Interfaces>
    struct HierarchyAT :
        implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, test_component_base::IHierarchyA>,
        impl::base<D, HierarchyA>
    {
        using composable = HierarchyA;
    protected:
        HierarchyAT()
        {
            impl::call_factory<HierarchyA, IHierarchyAFactory>([&](IHierarchyAFactory const& f) { f.CreateInstance(*this, this->m_inner); });
        }
        HierarchyAT(param::hstring const& name)
        {
            impl::call_factory<HierarchyA, IHierarchyAFactory>([&](IHierarchyAFactory const& f) { f.CreateInstance2(name, *this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct HierarchyBT :
        implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, test_component_base::IHierarchyB, test_component_base::IHierarchyA>,
        impl::base<D, HierarchyB, test_component_base::HierarchyA>
    {
        using composable = HierarchyB;
    protected:
        HierarchyBT()
        {
            impl::call_factory<HierarchyB, IHierarchyBFactory>([&](IHierarchyBFactory const& f) { f.CreateInstance(*this, this->m_inner); });
        }
        HierarchyBT(param::hstring const& name)
        {
            impl::call_factory<HierarchyB, IHierarchyBFactory>([&](IHierarchyBFactory const& f) { f.CreateInstance2(name, *this, this->m_inner); });
        }
    };
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::test_component_base::IHierarchyA> : winrt::impl::hash_base {};
    template<> struct hash<winrt::test_component_base::IHierarchyAFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::test_component_base::IHierarchyB> : winrt::impl::hash_base {};
    template<> struct hash<winrt::test_component_base::IHierarchyBFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::test_component_base::HierarchyA> : winrt::impl::hash_base {};
    template<> struct hash<winrt::test_component_base::HierarchyB> : winrt::impl::hash_base {};
#endif
}
#endif
