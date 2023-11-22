#include <ostream>
#include <array>

template<typename T, size_t size>
std::ostream&
operator<<(std::ostream& os, const std::array<T, size>& ar)
{
	os << "[";
	size_t i;
	for (i = 0; i < size - 1; ++i)
		os << ar[i] << ", ";
	return os << ar[i] << "]";
}

#include <iostream>

int main()
{
	std::array ax = { 1, 4, 5, 7, 2 }; //C++17
	//std::array az<int> = { 12, 3, 6, 3 }; //gecersiz

	std::cout << ax << "\n";
}
