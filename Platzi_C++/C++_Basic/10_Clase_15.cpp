#include <iostream>

using namespace std;

int main()
{

    char respuesta = 'n'; // Respuesta inicial no permite el carácter vacío
    while (respuesta != 'y')
    {
        cout << "¿Deseas terminar? (y/n): ";
        cin >> respuesta; // Captura la respuesta del usuario
        if (respuesta == 'y')
        {
            cout << "Bye bye!" << endl;
            break; // Termina el programa si el usuario responde 'y'
        }
    }

    for (respuesta = 'n'; respuesta != 'y';)
    {
        cout << "¿Deseas terminar? (y/n): ";
        cin >> respuesta; // Captura la respuesta del usuario
        if (respuesta == 'y')
        {
            cout << "Bye bye!" << endl;
        }
    }

    do
    {
        cout << "¿Deseas terminar? (y/n): ";
        cin >> respuesta; // Captura la respuesta del usuario
        if (respuesta == 'y')
        {
            cout << "Bye bye!" << endl;
        }
    } while (respuesta != 'y');

    return 0;
}

/*
Resumen

¿Qué son los ciclos while y do while en C++?
En el fascinante mundo de la programación con C++, los ciclos juegan un papel integral en la ejecución eficiente de tareas repetitivas. Dos de los ciclos más poderosos e interesantes son el while y do while. A diferencia del ciclo for, estos ciclos están diseñados para ejecutarse de manera indefinida, dependiendo de una circunstancia externa o condicional que determine cuándo interrumpir la ejecución. Esto los hace ideales para situaciones donde no se conoce de antemano cuántas iteraciones se necesitarán.

¿Cómo usar el ciclo while en un programa C++?
El ciclo while es perfecto para situaciones donde la cantidad de repeticiones no está estrictamente determinada. Imagina que desarrollas un programa en la terminal que debe interactuar con el usuario. Este programa debe repetir un menú de opciones hasta que el usuario decida salir. Aquí es donde entra en juego el ciclo while.

char respuesta = 'n'; // Respuesta inicial no permite el carácter vacío
while (respuesta != 'y') {
    std::cout << "¿Deseas terminar? (y/n): ";
    std::cin >> respuesta; // Captura la respuesta del usuario
    if (respuesta == 'y') {
        std::cout << "Bye bye!" << std::endl;
        break; // Termina el programa si el usuario responde 'y'
    }
}
En este ejemplo, el ciclo while continúa ejecutándose hasta que el usuario introduce 'y', indicando su deseo de terminar el programa. Esto ayuda a gestionar interacciones dinámicas sin establecer un límite numérico predefinido para las iteraciones.

¿Cuándo utilizar un ciclo do while?
A pesar de su similitud, do while ofrece una diferencia crucial: garantiza que el bloque de código se ejecutará al menos una vez antes de verificar la condición. Esto es útil cuando se necesita realizar al menos una operación previa a la evaluación de condiciones.

char respuesta;
do {
    std::cout << "¿Deseas terminar? (y/n): ";
    std::cin >> respuesta;
    if (respuesta == 'y') {
        std::cout << "Bye bye!" << std::endl;
    }
} while (respuesta != 'y');
En este caso, do while se asegura de que el mensaje se muestre al usuario por lo menos una vez, independientemente de la respuesta inicial. Solo después de esta primera interacción, el ciclo verifica si debe continuar ejecutándose.

Ventajas del ciclo while respecto al ciclo for en problemas indefinidos
Implementar un ciclo for para problemas donde la cantidad de iteraciones no es clara puede llevar a ineficiencias. Algunos puntos a considerar:

Flexibilidad: while y do while no requieren predefinir un número de iteraciones, lo que los hace flexibles ante interacciones prolongadas o imprevistas.
Simplicidad: Estos ciclos permiten centrarse en la lógica condicional sin preocuparse por el manejo de contadores.
Eficiencia: En situaciones donde las interacciones pueden variar significativamente, while y do while ofrecen un método más directo y eficaz para manejar entradas y salidas de usuarios.
Los ciclos while y do while son herramientas indispensables para construir programas robustos y adaptables. Dominarlos, junto con las técnicas aprendidas sobre ciclos for, condicionantes y otros elementos de C++, te permitirá crear aplicaciones más sofisticadas y eficientes. Así que sigue aprendiendo y explorando, ¡el mundo del código está lleno de posibilidades!
*/