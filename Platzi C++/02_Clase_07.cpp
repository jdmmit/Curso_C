#include <iostream>

using namespace std;

int main()
{
    int edad = 0;
    edad = 18;
    cout << edad << endl;
    return 0;
}

/*
Resumen

¿Qué son las variables en programación?
Las variables son un concepto fundamental en la programación. Se utilizan para almacenar datos que el programa necesita manipular durante su ejecución. Estos datos pueden incluir listas de usuarios, tareas asociadas a una persona, o cualquier otra información relevante que deba ser manejada por el programa. Saber cómo crear y emplear variables de manera efectiva es esencial para cualquier desarrollador, ya que permite realizar cálculos, tomar decisiones y presentar información al usuario.

¿Cómo crear una variable en C++?
Crear una variable en C++ implica definir su tipo de dato, asignar un nombre relevante y, si es viable, establecer un valor inicial. Esta práctica facilita recordar el propósito de cada variable y optimiza la organización del código.

Tipo de dato: Corresponde a la clase de datos que la variable almacenará, como int para enteros.
Nombre de la variable: Debe ser descriptivo, evitando espacios y caracteres especiales. Se recomienda usar guiones bajos para separar palabras en caso de ser necesario.
Valor inicial: Asignar un valor por defecto puede ser una buena práctica para evitar comportamientos inesperados del programa.
int edad = 0;
La línea anterior define una variable edad de tipo entero e inicializa su valor en 0. El uso del punto y coma al final indica al compilador que se ha concluido la instrucción.

¿Cómo operar con variables?
Las variables, por naturaleza, son cambiantes. Esto significa que su valor puede ser modificado durante la ejecución del programa, lo que es una característica crucial para la funcionalidad de las aplicaciones.

Por ejemplo, para mostrar el valor de una variable en una terminal, se podría utilizar la misma lógica que para imprimir un texto, simplemente sustituyendo el contenido:

std::cout << edad;
Si en el transcurso del programa es necesario cambiar el valor de edad, se puede hacer así:

edad = 18;
El valor de la variable edad será ahora 18. Poder modificar las variables es esencial para reflejar cambios en tiempo real, como actualizaciones basadas en la interacción con el usuario.

Normas y mejores prácticas para nombrar variables
Usar nombres descriptivos: Esto ayuda a entender rápidamente qué representa la variable.
Evitar nombres genéricos: Como x o data, a menos que el contexto sea extremadamente claro.
Seguir las convenciones del idioma: En C++, los nombres de variables suelen comenzar con minúsculas y usar camelCase o guiones bajos.
¿Qué sucede si se cambia el valor de una variable?
La capacidad de las variables para cambiar su valor les confiere una utilidad inmensa en la programación. Esto permite a los desarrolladores ajustar datos, realizar cálculos dinámicos y adaptar la funcionalidad del programa según las necesidades del momento.

Por ejemplo, cambiando el valor de edad:

edad = 30;
std::cout << edad;
El programa ahora mostrará 30, reflejando el cambio efectuado. Las variables son tanto una herramienta de almacenamiento como un medio para la lógica adaptable y la funcionalidad del programa.

En próximas clases, se profundizará en otras características vitales de las variables, como las constantes y diversos tipos de datos que amplían las capacidades del lenguaje C++. Continuar explorando estas facetas es crucial para dominar la programación y construir aplicaciones robustas y eficientes.
*/