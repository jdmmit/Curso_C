#include <iostream>

int main()
{
    // Suma
    int estudiantes = 20;
    estudiantes += 5; // Incrementa el número de estudiantes en 5

    std::cout << "Número total de estudiantes: " << estudiantes << std::endl;

    // Resta
    estudiantes -= 2; // Disminuye el número de estudiantes en 2
    std::cout << "Número total de estudiantes después de la baja: " << estudiantes << std::endl;

    // Multiplicación
    estudiantes *= 2; // Duplica el número de estudiantes
    std::cout << "Número total de estudiantes después de la duplicación: " << estudiantes << std::endl;

    // División
    double estudiantesDivididos = static_cast<double>(estudiantes) / 4; // Divide el número de estudiantes entre 4
    std::cout << "Número total de estudiantes después de la división: " << estudiantesDivididos << std::endl;

    // Modulo
    estudiantes %= 3; // Obtiene el residuo de la división entre 3
    std::cout << "Número total de estudiantes después del módulo: " << estudiantes << std::endl;

    // Exponenciación
    int base = 2;
    int exponente = 3;
    int resultado = 1;

    for (int i = 0; i < exponente; ++i)
    {
        resultado *= base;
    }

    std::cout << "Resultado de " << base << " elevado a " << exponente << " es: " << resultado << std::endl;

    return 0;
}