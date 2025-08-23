#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 3;

    // Operadores aritméticos
    cout << "Suma: " << a + b << endl;           // Suma
    cout << "Resta: " << a - b << endl;          // Resta
    cout << "Multiplicación: " << a * b << endl; // Multiplicación
    cout << "División: " << a / b << endl;       // División
    cout << "Módulo: " << a % b << endl;         // Módulo

    // Operadores de comparación
    cout << "a es igual a b: " << (a == b) << endl;      // Igual a
    cout << "a es diferente de b: " << (a != b) << endl; // Diferente de
    cout << "a es mayor que b: " << (a > b) << endl;     // Mayor que
    cout << "a es menor que b: " << (a < b) << endl;     // Menor que

    // Operadores de asignación
    int c = 2;
    c += 1; // Equivale a c = c + 1;
    cout << "Valor de c después de c += 1: " << c << endl;

    // Operadores lógicos
    bool resultado = (a < b) && (c > a); // AND lógico
    cout << "Resultado de (a < b) && (c > a): " << resultado << endl;

    resultado = (a < b) || (c < a); // OR lógico
    cout << "Resultado de (a < b) || (c < a): " << resultado << endl;

    resultado = !(a < b); // NOT lógico
    cout << "Resultado de !(a < b): " << resultado << endl;

    // Operador especial sizeof
    cout << "Tamaño de int en bytes: " << sizeof(int) << endl;
    cout << "Tamaño de variable a en bytes: " << sizeof(a) << endl;

    int edades[] = {24, 47, 15};
    int numElementos = sizeof(edades) / sizeof(edades[0]);
    cout << "Número de elementos en el arreglo edades: " << numElementos << endl;
}

/*
Resumen

¿Qué son los operadores en C++?
Los operadores son fundamentales en cualquier lenguaje de programación, y en C++, tenemos una variedad extensa. Estos son símbolos que nos permiten realizar operaciones sobre variables y valores. Los operadores se pueden categorizar principalmente en:

Operadores aritméticos: Incluyen suma (+), resta (-), multiplicación (*), división (/) y módulo (%). Las operaciones más básicas que conocemos para manipular números.
Operadores de comparación: Nos permiten comparar dos valores, proporcionando un resultado booleano (verdadero o falso). Ejemplos incluyen igual a (==), diferente de (!=), mayor que (>), y menor que (<).
Operadores de asignación: Ayudan a asignar valores a variables y posibilitan combinaciones con operadores aritméticos, como += o -=.
Operadores lógicos: Incluyen && (and), || (or) y ! (not), los cuales son esenciales para manejar expresiones booleanas.
Operadores especiales: Como sizeof, que nos brinda el tamaño de una variable o tipo de datos en bytes.
¿Cómo funcionan los operadores aritméticos?
Los operadores aritméticos nos permiten realizar cálculos básicos con los números. Veamos algunos ejemplos básicos:

int a = 2;
int b = 3;
int suma = a + b; // Resultado: 5
int producto = a * b; // Resultado: 6
Cuando una operación se realiza antes de un cout, puedes almacenarla en una variable para mostrar el resultado posteriormente. Este enfoque también te evita realizar la operación múltiples veces y asegura que puedes combinar operaciones de forma eficiente.

¿Cómo se utilizan los operadores de comparación?
Los operadores de comparación generan resultados booleanos determinando una relación entre los valores. Consideremos este ejemplo de comparación:

bool esMenor = a < b; // Como a (2) es menor que b (3), el resultado es true
bool iguales = a == b; // Como a (2) no es igual a b (3), el resultado es false
Es importante recordar que en C++, un valor true se representa internamente como 1, y false como 0. Este tipo de resultados puede ser fácilmente manejado o convertido según las necesidades de tu programa.

¿Cómo se aplican los operadores de asignación?
Los operadores de asignación son esenciales para modificar y gestionar el valor de las variables sin necesidad de escribir expresiones complejas. Aquí tienes un ejemplo:

int c = 2;
c += 1; // Equivale a c = c + 1; Ahora, c es 3.
Esta forma compacta y eficiente de reescribir operaciones previene errores y facilita la lectura del código.

¿Qué son los operadores especiales como sizeof?
sizeof es un operador especial que te dice cuántos bytes ocupa una variable o tipo de dato en memoria. Es invaluable cuando trabajas con arreglos o structuras y necesitas conocer la memoria que ocupan. Por ejemplo:

int a = 5;
std::cout << sizeof(a); // Dependiendo del sistema, puede ser 4 o 8.
De esta manera, puedes calcular el número de elementos en un arreglo:

int edades[] = {24, 47, 15};
int numElementos = sizeof(edades) / sizeof(edades[0]); // Calcula el número de elementos en el arreglo
Motivación para seguir explorando
Conocer y entender los operadores en C++ es solo el principio para convertirte en un programador competente. Te animo a explorar más allá de los usos básicos que hemos explicado aquí. Experimenta con diferentes combinaciones, descubre nuevos operadores y habilidades en C++. ¡El mundo de la programación está lleno de posibilidades esperando por ti!
*/