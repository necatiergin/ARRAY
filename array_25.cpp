#include <array>
#include <type_traits>
#include <iostream>

//std. kütüphanenin std::index_sequence ve std::make_index_sequence türlerine bakılmalı

namespace detail {

    template <typename T, std::size_t N, std::size_t... IDX>
    constexpr std::array<std::remove_cv_t<T>, N>
        to_array_impl(T(&a)[N], std::index_sequence<IDX...>)
    {
        return { {a[IDX]...} };
    }

}

template <class T, std::size_t N>
constexpr std::array<std::remove_cv_t<T>, N> toArray(T(&a)[N])
{
    return detail::to_array_impl(a, std::make_index_sequence<N>{});
}

struct Nec {
    Nec() = default;
    Nec(const Nec&)
    {
        std::cout << "copy ctor\n";
    }

    Nec(Nec&&)
    {
        std::cout << "move ctor\n";
    }
};

int main()
{
    Nec a[5]{};

    auto ar = toArray(a);
}
