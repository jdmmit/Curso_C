#include <iostream>

int main()
{
    // Enteros
    int x; // Declaracion
    x = 5; // Asignacion
    int y = 10;
    int suma = x + y;
    int edad = 43;
    int año = 2025;
    int dia = 14;

    std::cout << x << std::endl;
    std::cout << y << "\n";
    std::cout << suma << "\n";
    std::cout << edad << "\n";
    std::cout << año << "\n";
    std::cout << dia << "\n";

    // Decimales o Flotantes

    double precio = 10.99;
    double promedio = 2.5;

    float temperatura = 25.3659698369875695569569;

    std::cout << precio << "\n";
    std::cout << promedio << "\n";
    std::cout << temperatura << "\n";

    // Char

    char calificacion = 'A';
    char inicial = 'A';

    std::cout << calificacion << "\n";
    std::cout << inicial << "\n";

    // Booleanos ('Bool')

    bool estudiante = true;
    bool encendido = false;

    std::cout << estudiante << "\n";
    std::cout << encendido << "\n";

    // String

    std::string nombre = "Juan";
    std::cout << "Hola " << nombre << "\n";

    return 0;
}