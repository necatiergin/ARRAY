#include <array>
#include <iostream>

int main()
{
	std::array<int, 4> a_i{ 1, 2, 3, 4 };
	std::array<double, 4> a_d{};

	a_d = a_i; //gecersiz
}
