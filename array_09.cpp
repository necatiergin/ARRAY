#include <array>
#include <iostream>

int main()
{
	using namespace std;
	
	array<int, 5> ax{ 0 };

	try {
		cout << ax.at(6) << "\n";
	}
	//catch (std::exception& ex) {
	//catch (std::logic_error& ex) {
	catch (std::out_of_range& ex) {
		std::cout << "hata yakalandi : " << ex.what() << "\n";
	}
}
