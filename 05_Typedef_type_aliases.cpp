#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pair_list_t;

// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main()
{
    // Typedefs in C++

    // pair_list_t pair_list;

    text_t nombre = "Juan";
    number_t edad = 30;

    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;

    return 0;
}