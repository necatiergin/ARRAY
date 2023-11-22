#include <array>
#include <iostream>

int main()
{
	std::array<int, 0> ar;

	std::cout << "ar.size() = " << ar.size() << "\n";
	auto x = ar.front(); //ub
	auto y = ar.back(); //ub
}
