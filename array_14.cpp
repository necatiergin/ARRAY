#include <ostream>

template<typename T, size_t size>
std::ostream&
operator<<(std::ostream& os, const std::array<T, size>& ar)
{
	os << "[";
	size_t i{};
	for (; i < size - 1; ++i)
		os << ar[i] << ", ";
	return os << ar[i] << ']';
}

#include <array>
#include <string>
#include <iostream>

int main()
{
	using namespace std;

	array<string, 3> ax{ "ali", "veli", "naz" };
	cout << ax << '\n';
	array<int, 5> ay{1, 5, 7, 12};
	cout << ay << '\n';
}
