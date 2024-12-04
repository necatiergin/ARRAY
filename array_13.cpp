#include <ostream>

template<typename T, size_t size>
std::ostream&
operator<<(std::ostream& os, const std::array<T, size>& ar)
{
	os << "[";
	size_t i{};
	for (; i < size - 1; ++i)
		os << ar[i] << ", ";
	return os << ar[i] << "]";
}

#include <array>
#include <iostream>

int main()
{
	using std::array, std::cout;

	array<array<int, 5>, 2> ax{ 12, 4, 7, 8, 13, 1, 7, 9, 2, 6 };
	cout << ax << '\n';
	array<array<int, 3>, 4> ad2{ { {1, 4, 7}, {2, 5, 9}, {1, 2, 4}, {3, 9, 4} } };
	cout << ad2 << '\n';
}
