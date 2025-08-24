#include <iostream>

using namespace std;

int main()
{
    int opcion;                                 // Variable para almacenar la opción del usuario
    cout << "Introduce una opción del menú:\n"; // Solicitar la opción al usuario
    cout << "1. Primera opción\n";              // Opción 1
    cout << "2. Segunda opción\n";              // Opción 2

    cin >> opcion; // Leer la opción del usuario

    switch (opcion) // Evaluar la opción seleccionada
    {
    case 1:
        cout << "Seleccionaste la primera opción.\n"; // Mensaje para la primera opción
        break;
    case 2:
        cout << "Seleccionaste la segunda opción.\n"; // Mensaje para la segunda opción
        break;
    default:
        cout << "Esa opción no existe.\n"; // Mensaje para opciones no válidas
        break;
    }

    return 0;
}

/*
Resumen

¿Cómo optimizar decisiones con Switch Case en C++?
Imagina que estás diseñando un sistema de menú interactivo y deseas hacer el proceso de selección más eficiente. En este contexto, entran en juego las sentencias switch case en C++. Estas permiten manejar múltiples condiciones de manera más ordenada y óptima en comparación con las estructuras if-else. Este artículo te guiará a través del uso y las ventajas del switch case.

¿Qué es una sentencia switch case?
La sentencia switch case en C++ es una alternativa más compacta para escribir cadenas de if-else cuando quieres verificar varias condiciones posibles de una sola variable. Se utiliza especialmente cuando deseas comparar una variable con múltiples valores constantes.

¿Cómo implementamos switch case en un menú?
Supongamos que tienes un menú de opciones que le presenta al usuario varias elecciones. Cada opción del menú corresponde a un número o una letra que el usuario puede ingresar. Aquí te explico cómo podrías configurar esto.

#include <iostream>
using namespace std;

int main() {
    int opcion;
    cout << "Introduce una opción del menú:\n";
    cout << "1. Primera opción\n";
    cout << "2. Segunda opción\n";

    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Seleccionaste la primera opción.\n";
            break;
        case 2:
            cout << "Seleccionaste la segunda opción.\n";
            break;
        default:
            cout << "Esa opción no existe.\n";
            break;
    }

    return 0;
}
¿Por qué usar Switch Case?
Claridad: La sentencia switch es más clara y legible cuando se trata de múltiples condiciones, facilitando su mantenimiento y revisión.
Performance: Ofrece una performance más adecuada que múltiples if-else, especialmente con gran cantidad de casos.
Simplicidad: Menos código repetitivo, lo cual reduce la posibilidad de errores.
¿Cómo evitar errores comunes al usar switch case?
Include break: Uno de los aspectos más cruciales al utilizar switch case es asegurarte de incluir la sentencia break al final de cada caso. Esto es para prevenir la "caída" o ejecución de casos subsiguientes incorrectamente.

Default como seguro: Deberías siempre incluir un caso default, que actúe como una medida de seguridad en caso de que ninguno de los valores coincida con los casos especificados.

¿Se puede usar switch case con tipos de datos diferentes?
Sí, el switch case no está limitado solo a números; puedes usarlo con cualquier tipo de dato constante que sea compatible con el operador ==, como caracteres. Deberías siempre asegurarte de que la variable que vas a evaluar pueda ser comparada con los valores que estás utilizando en los case.

¿Qué sigue después de dominar switch case?
Las estructuras switch case son fundamentales para trabajar eficazmente con múltiples opciones y decisiones en C++. Continúa practicando diferentes escenarios y variantes. La práctica te permitirá manejar estructuras más complejas y fortalecer tus habilidades de programación. ¡Sigue aprendiendo y superándote en cada paso!
*/