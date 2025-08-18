#include <iostream>

namespace primero
{
    int x = 1;

} // namespace primero

namespace segundo
{
    int x = 2;
}

int main()
{

    using namespace primero;

    int x = 0;

    std::cout << "x = " << x << "\n";
    std::cout << "x = " << primero::x << "\n";
    std::cout << "x = " << segundo::x << "\n";

    return 0;
}