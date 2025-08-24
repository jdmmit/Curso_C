#include <iostream>

using namespace std;

int suma(int a, int b)
{
    return a + b;
}

int main()
{
    cout << suma(2, 2) << endl;
    cout << suma(2, 200) << endl;

    return 0;
}

/*
Resumen

¿Qué son las funciones en C++?
En la programación, las funciones constituyen bloques de código aislados que podemos invocar repetidamente para realizar una operación específica dentro de un programa. Estas pueden recibir datos de entrada, procesarlos y retornar un resultado. Funcionan como "cajas negras", donde enviamos ciertos inputs y obtenemos un output.

¿Cómo definir una función en C++?
Para definir una función en C++, es necesario seguir ciertos pasos:

Tipo de dato: Determina qué tipo de dato devolverá la función. Por ejemplo, int para un número entero.
Nombre de la función: Un identificador descriptivo. Por ejemplo, suma.
Argumentos: Variables de entrada que la función procesará. Por ejemplo, int a, int b.
Cuerpo de la función: Bloque de código entre llaves {} que ejecuta el proceso deseado.
El siguiente es un ejemplo de cómo escribir una función que realiza la suma de dos números:

int suma(int a, int b) {
    return a + b;
}
¿Cómo usar una función en C++?
Una vez definida la función, puedes invocarla desde main u otras funciones. Aquí te muestro cómo llamar a la función suma desde main para sumar dos números:

#include <iostream>

int suma(int a, int b) {
    return a + b;
}

int main() {
    std::cout << suma(2, 2) << std::endl; // Output: 4
    std::cout << suma(2, 200) << std::endl; // Output: 202
    return 0;
}
Al ejecutar este programa, se realizarán las sumas generando los resultados esperados.

¿Cómo reutilizar funciones para otras operaciones?
La reutilización de funciones es una ventaja esencial que ofrece ahorro de tiempo y organización del código. Por ejemplo, crear una función que multiplique dos números sigue un procedimiento similar:

int multiplicar(int a, int b) {
    return a * b;
}
Usar multiplicar es sencillo:

std::cout << multiplicar(2, 200) << std::endl; // Output: 400
¿Qué son los valores por defecto en funciones?
Podemos definir valores por defecto para los argumentos de una función. Esto es particularmente útil cuando queremos evitar repetir ciertos valores al invocar la función. Así es como se establece un valor por defecto para el segundo argumento de multiplicar:

int multiplicar(int a, int b = 2) {
    return a * b;
}
Con esta función, si no se proporciona un segundo número, la función usará 2 por defecto:

std::cout << multiplicar(200) << std::endl; // Output: 400
Los valores por defecto facilitan la simplificación del código cuando ciertos parámetros suelen ser recurrentes.

Conclusión
Las funciones son herramientas poderosas en C++ que permiten aislar y organizar código para realizar operaciones específicas. Ya sea realizando operaciones matemáticas simples o procesos complejos, las funciones mejoran la legibilidad y reutilización del código. ¡Sigue explorando para descubrir una infinidad de posibilidades en la programación!
*/