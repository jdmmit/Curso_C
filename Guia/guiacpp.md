

# Guia Completa de C++ para Principiantes

## Indice

1. Introduccion a C++
2. Variables y Tipos de Datos
3. Operadores en C++
4. Estructuras de Control
5. Buenas Practicas y Consejos
6. Ejercicios Practicos
7. Recursos Extra

---

## 1. Introduccion a C++

C++ es un lenguaje de programacion de proposito general, orientado a objetos, creado por Bjarne Stroustrup en 1979. Es ampliamente utilizado en desarrollo de software, videojuegos, sistemas operativos, controladores y aplicaciones de alto rendimiento.

Caracteristicas principales:
- Compilado: El codigo fuente se traduce a codigo maquina antes de ejecutarse, lo que lo hace muy rapido.
- Multiparadigma: Permite programacion estructurada, orientada a objetos y generica.
- Control de memoria: Permite manipular directamente la memoria, lo que da gran flexibilidad y eficiencia.
- Portabilidad: Los programas pueden ejecutarse en diferentes sistemas operativos con pocos cambios.

Estructura basica de un programa en C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hola Mundo" << endl;
    return 0;
}


Explicacion:

#include : Permite usar funciones de entrada y salida.
using namespace std;: Evita tener que escribir std:: antes de cout y cin.
int main() { ... }: Funcion principal donde inicia el programa.
cout << ...;: Imprime texto en la consola.
return 0;: Indica que el programa termino correctamente.
2. Variables y Tipos de Datos

Una variable es un espacio en memoria donde puedes guardar datos que pueden cambiar durante la ejecucion del programa. Piensa en una variable como una caja con una etiqueta (nombre) donde puedes guardar diferentes cosas (valores).

Declaracion y asignacion:

int edad; // Declaracion
edad = 20; // Asignacion
int altura = 175; // Declaracion y asignacion


Tipos de datos fundamentales:

Tipo	Descripcion	Ejemplo
int	Numeros enteros	int edad = 20;
float	Decimales (precision simple)	float pi = 3.14;
double	Decimales (mayor precision)	double x = 2.71828;
char	Caracteres individuales	char letra = 'A';
bool	Booleanos (verdadero/falso)	bool activo = true;

Notas utiles:

Los nombres de variables no pueden empezar con numeros ni tener espacios.
C++ distingue entre mayusculas y minusculas: Edad y edad son variables diferentes.

Ejemplo practico:

#include <iostream>
using namespace std;

int main() {
    int edad = 18;
    float altura = 1.75;
    char inicial = 'J';
    bool estudiante = true;

    cout << "Edad: " << edad << endl;
    cout << "Altura: " << altura << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "Es estudiante?: " << estudiante << endl;

    return 0;
}


Salida esperada:

Edad: 18
Altura: 1.75
Inicial: J
Es estudiante?: 1


(En C++, true se muestra como 1 y false como 0)

3. Operadores en C++

Operadores aritmeticos:

Operador	Descripcion	Ejemplo
+	Suma	a + b
-	Resta	a - b
*	Multiplica	a * b
/	Divide	a / b
%	Modulo	a % b

Ejemplo practico:

int a = 10, b = 3;
cout << "Suma: " << a + b << endl;
cout << "Resta: " << a - b << endl;
cout << "Multiplicacion: " << a * b << endl;
cout << "Division: " << a / b << endl;
cout << "Modulo: " << a % b << endl;


Operadores de comparacion:

Operador	Descripcion	Ejemplo
==	Igualdad	a == b
!=	Diferente	a != b
<	Menor que	a < b
>	Mayor que	a > b
<=	Menor o igual	a <= b
>=	Mayor o igual	a >= b

Ejemplo practico:

int x = 5, y = 8;
cout << (x == y) << endl; // 0 (falso)
cout << (x != y) << endl; // 1 (verdadero)
cout << (x < y) << endl;  // 1


Operadores logicos:

Operador	Descripcion	Ejemplo
&&	AND logico	a && b
		
!	NOT logico	!a

Ejemplo practico:

bool a = true, b = false;
cout << (a && b) << endl; // 0
cout << (a || b) << endl; // 1
cout << (!a) << endl;     // 0

4. Estructuras de Control

Condicionales (if, else, else if):

int edad = 20;
if (edad >= 18) {
    cout << "Eres mayor de edad" << endl;
} else {
    cout << "Eres menor de edad" << endl;
}


if-else if-else:

int nota = 85;
if (nota >= 90) {
    cout << "Excelente" << endl;
} else if (nota >= 70) {
    cout << "Aprobado" << endl;
} else {
    cout << "Reprobado" << endl;
}


Switch:

int opcion = 2;
switch(opcion) {
    case 1:
        cout << "Elegiste 1" << endl;
        break;
    case 2:
        cout << "Elegiste 2" << endl;
        break;
    default:
        cout << "Opcion no valida" << endl;
}


Ciclos:

while:

int i = 0;
while (i < 5) {
    cout << i << endl;
    i++;
}


for:

for (int i = 0; i < 5; i++) {
    cout << i << endl;
}


do-while:

int i = 0;
do {
    cout << i << endl;
    i++;
} while (i < 5);

5. Buenas Practicas y Consejos
Comenta tu codigo: Explica partes importantes para ti o para otros.
Nombres descriptivos: Usa nombres claros para variables y funciones.
Prueba tu codigo: Usa diferentes datos para asegurarte que funciona.
Lee documentacion: Consulta fuentes oficiales y tutoriales.
Depura: Usa mensajes con cout para ver el valor de variables y encontrar errores.
6. Ejercicios Practicos
Escribe un programa que pida al usuario su nombre y edad, y luego imprima un mensaje personalizado.
Crea un programa que calcule el area de un circulo (usa la formula area = pi * radio * radio).
Haz un programa que pida un numero y diga si es par o impar.
Escribe un ciclo que imprima los numeros del 1 al 10.
Haz un menu con switch que permita al usuario elegir entre sumar, restar, multiplicar o dividir dos numeros.
7. Recursos Extra
Tutorial C++ en Programiz: https://www.programiz.com/cpp-programming
Documentacion oficial de C++: https://en.cppreference.com/w/
Ejercicios practicos en C++: https://www.hackerrank.com/domains/tutorials/10-days-of-cpp


