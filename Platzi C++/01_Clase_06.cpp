#include <iostream>

using namespace std;

int main() {
    cout << "Hola Mundo" << endl;
    return 0;
}

/*
Resumen

¿Cómo crear un programa básico en C++?
Crear tu primer programa en C++ es un logro significativo que ayudará a establecer una base sólida para aprender más sobre este poderoso lenguaje de programación. Nos enfocaremos en escribir un sencillo "Hola Mundo" y comprenderemos algunos conceptos básicos en el camino.

¿Cómo se organiza el entorno de trabajo?
Antes de comenzar a escribir código, organiza tu entorno de trabajo. Puedes crear una carpeta específica donde almacenarás el archivo fuente de C++. Esto te ayudará a mantener todo en orden y facilitar el acceso a futuros proyectos. Por ejemplo, el archivo puede guardarse con la extensión .cpp, que es específica para C++. Un nombre estándar como main.cpp es una buena práctica para los ejercicios futuros.

¿Qué pasos seguir para escribir el código?
Una vez que hayas creado tu archivo main.cpp, comienza a escribir el código. Aquí te presentamos los elementos básicos y esenciales de un programa en C++:

Incluir librerías necesarias: Utiliza #include para importar librerías que proporcionan funcionalidades específicas. Por ejemplo, #include <iostream> permite operaciones de entrada y salida estándar.

#include <iostream>
Declarar el espacio de nombres: La línea using namespace std; te permite usar nombres de funciones estándar sin necesidad de especificar el prefijo std:: cada vez.

using namespace std;
Definir la función main: La función main es el punto de entrada de cualquier programa C++. Todas las instrucciones que se ejecutarán inicialmente deben colocarse dentro de esta función.

int main() {
    cout << "Hola Mundo" << endl;
    return 0;
}
¿Por qué es importante cada línea de código?
#include <iostream>: Importa librerías que permiten la entrada y salida de datos.
using namespace std;: Facilita el uso de nombres estándar sin prefijos.
int main(): Marca el inicio del programa, necesitando siempre retornar un entero.
cout << "Hola Mundo" << endl;: Muestra el texto "Hola Mundo" en la consola.
return 0;: Indica que el programa ha finalizado correctamente.
¿Cómo compilar y ejecutar el programa?
Para compilar el programa en Visual Studio Code, puedes usar la extensión "C/C++ Compile Run". Una vez instalada, solo debes presionar F6 para compilar y ejecutar tu código. Si todo está correctamente configurado, verás "Hola Mundo" en la terminal.

¿Qué sigue después de "Hola Mundo"?
El "Hola Mundo" es un punto de partida. La estructura básica que has aprendido se utilizará en proyectos más complejos, donde podrás experimentar con tipos de datos, funciones, estructuras de control, y más. Este aprendizaje inicial es fundamental para avanzar y te alentará a explorar más acerca del lenguaje C++, descubrir nuevos conceptos e implementar tus propios programas. ¡Sigue practicando y nunca dejes de aprender!
*/