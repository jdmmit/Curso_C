#include <iostream>

using namespace std;

int main()
{
    bool resultado;

    resultado = true && false; // Retorna false
    cout << "true && false: " << resultado << endl;

    resultado = true || false; // Retorna true
    cout << "true || false: " << resultado << endl;

    resultado = !true; // Retorna false
    cout << "!true: " << resultado << endl;

    int edad = 0; // Variable para almacenar la edad del usuario

    cout << "Cual es tu Edad: " << endl; // Solicitar la edad al usuario
    cin >> edad;                         // Leer la edad del usuario

    if (edad < 18) // Verificar si la edad es menor de 18
    {
        cout << "No puedes votar" << endl; // Mensaje para menores de edad
    }
    else if (edad > 40)
    {
        cout << "No puedes votar" << endl; // Mensaje para mayores de 40
    }
    else
    {
        cout << "Puedes votar" << endl; // Mensaje para usuarios en el rango de 18 a 40
    }
}

/*
Resumen

¿Cómo funcionan las operaciones booleanas en C++?
Las operaciones booleanas son fundamentales para tomar decisiones dentro de cualquier programa. En C++, estas operaciones permiten evaluar expresiones y compararlas para decidir el flujo de ejecución del programa. Las principales operaciones booleanas son:

AND (&&): Evalúa si ambas expresiones son verdaderas. Retorna true solo si ambas son verdaderas.
OR (||): Evalúa si al menos una de las expresiones es verdadera. Retorna true si alguna lo es.
NOT (!): Invierte el valor lógico de la expresión a la derecha del operador.
Veamos un ejemplo práctico de cómo se utilizan estas operaciones:

bool resultado;

resultado = true && false; // Retorna false
resultado = true || false; // Retorna true
resultado = !true;         // Retorna false
¿Cómo se utilizan las condicionales if, else y else if en C++?
Las sentencias condicionales permiten ejecutar diferentes bloques de código según una o varias condiciones. Una de las formas más empleadas para controlar flujo con condiciones es el uso de if, else y else if.

Uso del if
La sentencia if ejecuta un bloque de código si la condición entre paréntesis evalúa a verdadero. Aquí hay un ejemplo simple:

int edad = 20;

if (edad >= 18) {
    std::cout << "Puedes votar." << std::endl;
}
Uso del else
La sentencia else se utiliza para especificar un bloque de código que se ejecutará si la condición if es falsa.

int edad = 16;

if (edad >= 18) {
    std::cout << "Puedes votar." << std::endl;
} else {
    std::cout << "No puedes votar." << std::endl;
}
Uso del else if
else if permite probar múltiples condiciones. Solo se ejecutará el bloque del primer else if cuyo condicionante evalúe a verdadero.

int edad = 30;

if (edad < 18) {
    std::cout << "No puedes votar." << std::endl;
} else if (edad > 40) {
    std::cout << "No puedes votar." << std::endl;
} else {
    std::cout << "Puedes votar." << std::endl;
}
¿Cuál es la mejor manera de estructurar las condicionales?
Al desarrollar programas, es crucial escribir código claro y eficiente. Utilizar else if es una manera de evitar anidar múltiples if, lo que mejora la legibilidad y mantenimiento del código. Aquí te damos algunas recomendaciones:

Prefiere else if para múltiples verificaciones de una misma variable.
Utiliza operaciones booleanas para combinar condiciones y simplificar tu lógica.
Valida primero las condiciones que permitirán filtrar casos obvios antes de pasar a condiciones más restrictivas.
En el contexto de una aplicación para verificar la elegibilidad de un votante, la solución puede optimizarse aún más utilizando operadores lógicos combinados con condicionales, evitando así complejidades innecesarias.

Te dejo un reto: Reescribe la lógica de validación del ejemplo anterior utilizando operaciones combinadas con el operador or para lograr un código más compacto y legible. ¡Sigue practicando y mejorando tu habilidad en programación!
*/