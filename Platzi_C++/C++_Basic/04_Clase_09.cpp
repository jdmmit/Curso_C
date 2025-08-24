#include <iostream>

using namespace std;

int main()
{
    int edad = 0; // Definición de una variable
    edad = 18;
    const char letra = 'A'; // Definición de una constante
    // letra = 'B';            // Error: 'letra' no puede ser modificada.
    int lista_edades[] = {18, 24, 30}; // Definición de una lista
    cout << edad << endl;              // Imprime el valor 18
    cout << letra << endl;             //
    cout << lista_edades[0] << endl;   // Imprime el valor 18
}

/*
Resumen

¿Cómo crear y usar constantes en C++?
Las constantes son fundamentales cuando quieres asegurar que un valor no sea modificado durante la ejecución de un programa. Al definir una variable como constante, le estás señalando al compilador que ese valor debe permanecer inalterable. En C++, puedes lograrlo usando la palabra clave const antes de la declaración de la variable.

Por ejemplo, si tienes una variable de tipo carácter y deseas almacenarla como constante:

const char letra = 'a';
¿Qué ocurre si intentas modificar una constante?
Intentar reasignar un nuevo valor a una constante en C++ resultará en un error de compilación. El editor de código lo marcará como un error porque el valor está definido como "de solo lectura". Supón que intentas cambiar el valor de la constante letra a 'b':

letra = 'b'; // Error: 'letra' no puede ser modificada.
¿Cómo funcionan las listas en C++?
Cuando necesitas trabajar con conjuntos de valores, como por ejemplo una lista de edades, resulta más eficiente agruparlas en una lista o arreglo que declarar una variable para cada valor. Las listas en C++ se crean utilizando corchetes [] para indicar que es una lista, y llaves {} para enumerar los valores iniciales.

Por ejemplo, si estás estudiando la edad promedio de un grupo de personas, podrías declarar una lista de edades así:

int lista_edades[] = {18, 24, 30};
¿Cómo accedes a los elementos de una lista?
Cada valor dentro de una lista se identifica por un índice, comenzando desde cero. Para imprimir o manipular un valor específico de una lista, utilizas estos índices.

Para imprimir el primer valor (18) de lista_edades:

std::cout << lista_edades[0] << std::endl; // Imprime el valor 18
Si quisieras imprimir el segundo valor (24):

std::cout << lista_edades[1] << std::endl; // Imprime el valor 24
¿Cómo modificar un elemento en la lista?
Si algún valor en la lista requiere una actualización, puedes hacerlo accediendo al índice adecuado y asignando un nuevo valor. Si decides cambiar el valor en índice uno de 24 a 26:

lista_edades[1] = 26;
Después de esta modificación, al imprimir el índice uno nuevamente, obtendrás el nuevo valor (26).

Importancia del manejo de constantes y listas
El uso adecuado de constantes y listas es crucial en C++, ya que mejora la eficiencia, la legibilidad y la mantenibilidad del código. Las constantes garantizan estabilidad en los datos que no deben cambiar, mientras que las listas permiten gestionar y manipular conjuntos de datos de manera más eficaz. Aprovecha estas herramientas para escribir programas más eficaces y estructurados, ¡y sigue explorando las posibilidades que C++ ofrece!
*/