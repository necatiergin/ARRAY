#include <array>
#include <iostream>

int main()
{
	std::array<int, 0> a1;
	std::array<int, 3> a2;

	std::cout << std::boolalpha;
	std::cout << "is a1 empty?  " << a1.empty() << '\n';
	std::cout << "is a2 empty?  " << a1.empty() << '\n';
	std::cout << "a1.size()     " << a1.size() << '\n';
	std::cout << "a2.size()     " << a2.size() << '\n';
	std::cout << "a1.max_size() " << a1.max_size() << '\n';
	std::cout << "a2.max_size() " << a2.max_size() << '\n';
}
