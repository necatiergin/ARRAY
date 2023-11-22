#include <iostream>
#include <vector>
#include <array>

class Myclass {
public:
	Myclass() = default;

	Myclass(const Myclass&)
	{
		std::cout << "copy constructor called\n";
	}

	Myclass(Myclass&&)
	{
		std::cout << "move constructor called\n";
	}
};

int main()
{
	//std::vector<Myclass> xvec(5);
	//std::vector<Myclass> yvec = std::move(xvec);
	std::array<Myclass, 3> arx;
	std::array<Myclass, 3> ary = std::move(arx);
}
