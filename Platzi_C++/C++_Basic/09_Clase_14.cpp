#include <iostream>

using namespace std;

int main()
{
    int limite;                      // Variable para almacenar el límite
    cout << "Introduce el límite: "; // Solicita al usuario que introduzca el límite
    cin >> limite;                   // Lee el límite introducido por el usuario

    for (int i = 0; i < limite; i++) // Ciclo que imprime los números del 0 al límite
    {
        cout << i << endl; // Imprime el valor actual de i
    }

    return 0;
}

/*
Resumen

¿Cómo funcionan los ciclos en C++?
Los ciclos son una herramienta fundamental en los lenguajes de programación, y en C++ estos nos permiten iterar un bloque de código sobre una lista o un rango numérico. Por ejemplo, si queremos realizar una operación en cada elemento de una lista de números, los ciclos facilitan este proceso repetitivo. Aquí te guiaré a través de los fundamentos de los ciclos for en C++.

¿Qué es un ciclo for?
Un ciclo for es una instrucción que permite ejecutar repetidamente un bloque de código un número determinado de veces. En C++, esta estructura es útil para iterar sobre rangos numéricos o sobre listas, permitiéndonos ejecutar el mismo código varias veces de manera eficiente.

Sintaxis básica de un ciclo for
La estructura básica de un ciclo for en C++ es la siguiente:

for(int i = 0; i < 10; i++) {
    // Código a ejecutar
}
Inicialización: Declaramos e inicializamos una variable, generalmente int i = 0.
Condición: Evaluamos una condición (ej. i < 10) que debe ser verdadera para que el ciclo continúe.
Incremento: Se incrementa el valor de la variable (ej. i++ es i = i + 1).
Dentro del bloque de código, podemos utilizar esta variable para operaciones específicas. Por ejemplo, imprimir su valor en cada iteración:

std::cout << i << std::endl;
¿Cómo iterar con un límite variable?
En ocasiones, el límite de las iteraciones no es un número fijo. Podemos utilizar variables para establecer este límite, lo que añade flexibilidad al ciclo.

int limite;
std::cout << "Límite: ";
std::cin >> limite;

for(int i = 0; i < limite; i++) {
    std::cout << i << std::endl;
}
Con esta estructura, el programa pregunta al usuario cuántas iteraciones debe realizar.

¿Cómo iterar sobre listas?
Los ciclos for también nos ayudan a realizar operaciones en cada elemento de una lista. Veamos cómo multiplicar cada elemento por dos:

int lista[] = {100, 200, 300};

for(int i = 0; i < sizeof(lista)/sizeof(lista[0]); i++) {
    std::cout << lista[i] * 2 << std::endl;
}
Aquí, utilizamos sizeof para determinar el tamaño de la lista, dividiéndolo por el tamaño de un elemento en bytes.

¿Cómo interrumpir un ciclo for?
Podemos utilizar la instrucción break para salir de un ciclo for bajo ciertas condiciones. Por ejemplo, queremos detenernos al encontrar el número 200:

for(int i = 0; i < sizeof(lista)/sizeof(lista[0]); i++) {
    if(lista[i] == 200) break;
    std::cout << lista[i] << std::endl;
}
Cuando se encuentra el número 200, el ciclo se interrumpe gracias a la instrucción break.

¿Cómo puedo practicar?
Una forma excelente de practicar es realizar ejercicios prácticos que te desafíen a implementar lo que has aprendido. Por ejemplo, intenta escribir un ciclo que solo muestre números pares de una lista utilizando condicionales.

Con estos fundamentos de ciclos for en C++, estás listo para continuar explorando las posibilidades que ofrece este lenguaje. ¡Sigue aprendiendo y experimentando con estas estructuras!
*/