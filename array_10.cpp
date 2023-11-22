#include <cstdio>
#include <cstdlib>
#include <array>

//C api
void print_array(const int* p, size_t n)
{
	while (n--)
		std::printf("%d ", *p++);
	std::printf("\n\n");

}

//C api
void set_array_random(int* p, size_t n)
{
	while (n--)
		*p++ = std::rand() % 100;
}

int main()
{
	std::array<int, 6> ax{ 1, 5, 6, 7, 9, 23};

	print_array(ax.data(), ax.size());
	set_array_random(ax.data(), ax.size());
	print_array(ax.data(), ax.size());
	print_array(&ax[0], ax.size());
}
