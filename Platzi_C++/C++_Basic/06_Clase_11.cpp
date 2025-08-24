#include <iostream>

using namespace std;

int main()
{
    int edad = 0;

    cout << "Introduce tu edad: ";         // Solicita la edad al usuario
    cin >> edad;                           // Captura la edad ingresada por el usuario
    cout << "Tu edad es " << edad << endl; // Muestra la edad ingresada

    // Comentario de una sola línea

    /*
    Esto es un comentario
    de múltiples líneas
    */
}

/*
Resumen

¿Cómo funcionan los flujos de entrada y salida de datos?
En el mundo de la programación en C++, manipular la entrada y salida de datos es un concepto esencial que se lleva a cabo mediante la librería IOStream. Este poderoso mecanismo permite que nuestro programa interactúe con el sistema operativo para recibir o enviar datos a través de la terminal. A grandes rasgos, IOStream maneja flujos de datos de manera semejante a cómo un flujo de información se transmite en servicios de streaming de video.

¿Qué son y cómo se utilizan los streams?
Un "stream" es básicamente un flujo de datos que se mueve entre el programa y el sistema operativo. En C++, los streams permiten enviar y recibir datos desde y hacia diferentes interfaces, como la terminal de comandos. Estos streams se implementan principalmente a través de dos funcionalidades: cout y cin.

Salida de datos: cout

Se utiliza para enviar datos desde el programa hacia la pantalla de la terminal.
Utiliza el operador << para redirigir la salida hacia la terminal.
Ejemplo:
std::cout << "Hola mundo";
Aquí, cada carácter de la cadena "Hola mundo" se escanea y se envía secuencialmente a la pantalla.
Entrada de datos: cin

Permite recibir datos de entrada del usuario a través de la terminal.
Utiliza el operador >> para capturar los datos introducidos por el usuario.
Ejemplo:
int edad;
std::cin >> edad;
Aquí, la entrada proporcionada por el usuario se almacena en la variable edad.
¿Cómo se almacenan y manipulan los datos?
Al recibir datos del usuario, es crucial contar con una variable adecuada para almacenarlos. La definición del tipo de variable determinará la manera en que se pueden manipular los datos:

Definición de variable para almacenamiento:
Antes de capturar datos, declare una variable que los sostendrá. Ejemplo para almacenar una edad:
int edad = 0;
Dependiendo del tipo de dato asignado a la variable, las operaciones permitidas pueden variar. Un número entero, por ejemplo, admite cálculos matemáticos, pero una cadena de texto no.
¿Cómo asegurar la correcta entrada de datos?
Proveer feedback al usuario sobre lo que se ha ingresado es una buena práctica. Esto puede lograrse mediante la combinación de cout y cin para devolver la información capturada, como en el siguiente ejemplo:

std::cout << "Introduce tu edad: ";
int edad;
std::cin >> edad;
std::cout << "Tu edad es " << edad;
Aquí el programa pide y captura la edad del usuario, luego le confirma la entrada al usuario.

¿Qué son y cómo se hacen comentarios en C++?
Los comentarios son una herramienta crucial para mejorar la legibilidad de nuestro código. C++ ofrece dos maneras básicas de implementarlos:

Comentarios de una sola línea: Se inician con //.

// Esto es un comentario de una sola línea
Comentarios de múltiples líneas: Se encuentran entre /* y */

/*
Esto es un comentario
de múltiples líneas
*/
/*
Con esta base sobre cómo aplicar flujos de entrada y salida, y la correcta utilización de comentarios, estarás mejor preparado para profundizar en tareas más avanzadas, como el uso de condicionales. Sigue esforzándote en tus estudios de programación: cada paso que das refuerza tus habilidades y te acerca más a tu objetivo.

*/