#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto = "Hola mundo";
    cout << texto.size() << endl;
    cout << stoi(texto) << endl;
    cout << stof(texto) << endl;

    return 0;
}

/*
Resumen

¿Qué es la biblioteca estándar de C++?
C++ es un lenguaje de programación poderoso, pero para aprovechar al máximo sus capacidades, es vital entender su biblioteca estándar. Este conjunto de librerías extiende el lenguaje permitiéndonos realizar una amplia gama de tareas, desde operaciones matemáticas hasta manejo de cadenas de texto. Sin embargo, a diferencia de otros lenguajes de programación, C++ no incluye ciertas funcionalidades dentro de su núcleo. Aquí es donde entra en juego la biblioteca estándar, la cual debemos importar como librerías específicas.

¿Cuáles son algunas de las librerías más importantes?
La biblioteca estándar de C++ incluye una variedad de librerías fundamentales, cada una con diferentes funciones:

IOStream: Es esencial para la entrada y salida de datos en nuestros programas. Ya la hemos utilizado para imprimir resultados y capturar información del usuario.
String: Nos proporciona el manejo de cadenas de texto, algo que, aunque esencial, no forma parte del núcleo del lenguaje; lo utilizaremos extensivamente para manipular texto.
Otras librerías: También existen librerías enfocadas en manejo de errores, operaciones matemáticas avanzadas e incluso para trabajar con arrays y vectores de datos.
¿Cómo se manejan las cadenas de texto en C++?
Antes de que puedas trabajar eficientemente con cadenas de texto en C++, necesitas integrar la librería string que proporciona el tipo de dato necesario:

#include <iostream>
#include <string>

int main() {
    std::string texto = "Hola mundo";
    std::cout << texto << std::endl;
    return 0;
}
¿Qué ventajas tiene usar std::string?
Sintaxis amigable: Al usar std::string, evitas la complejidad de manejar listas de caracteres (char[]), haciendo que el código sea más limpio y fácil de entender.
Funcionalidades adicionales: Permite utilizar métodos como .size() para conocer rápidamente la longitud de una cadena, simplificando lo que en otros lenguajes puede ser una operación más compleja.
¿Cómo convertir cadenas de texto a números?
Imagina que capturas información del usuario que incluye números y deseas operarlos matemáticamente. C++ nos ofrece funciones útiles dentro de la librería string para lograr esto:

Conversión a entero:

int numero = std::stoi("10");
Conversión a flotante:

float numeroFlotante = std::stof("10.5");
Estas funciones ayudan a transformar cadenas que representan números en datos numéricos con los que puedes realizar cálculos y operaciones algebraicas.

¿Cuáles son las limitaciones y cómo superarlas?
Aunque el uso de la biblioteca string facilita trabajar con texto, y las funciones de conversión ayudan a manejar datos numéricos, es esencial estar atento a errores comunes, como conversiones fallidas. Asegúrate de capturar y manejar adecuadamente excepciones para evitar problemas en tu lógica de programación. Además, te animo a descubrir otras funcionalidades de las librerías de C++ y practicar mediante el desarrollo de proyectos pequeños. Explorando y experimentando, mejorarás tus habilidades y confianza en el manejo de este lenguaje tan robusto.
*/