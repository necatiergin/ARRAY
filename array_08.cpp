#include <iostream>
#include <array>

template <typename T, size_t n>
std::ostream& operator<<(std::ostream& os, const std::array<T, n>& ar)
{
	os << "[size: " << ar.size() << "] |";
	for (size_t i{}; i < ar.size() - 1; ++i) {
		os << ar[i] << ", ";
	}
	return os << ar.back() << "|";
}

int main()
{
	std::array<std::array<int, 3>, 4> ar{ {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}, {4, 4, 4}} };

	ar[2][1] = 65;
	ar[1][3] = 99;

	std::cout << ar << "\n";
}
