#include <array>

int main()
{
    auto ar = std::to_array<std::pair<char, double>>(
        { { 'A', 1.1}, { 'B', 2.2 }, { 'C', 3.3} });
    
    static_assert(ar.size() == 3u);
}
