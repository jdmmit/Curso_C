/*
🎯 ARCHIVO: 09_Tipos_de_Datos.cpp
📚 TEMA: Tipos de Datos en C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Introducción a los tipos de datos básicos en C++

💡 CONCEPTOS QUE APRENDERÁS:
   - Tipos de datos primitivos: int, float, double, char, bool
   - Diferencias entre tipos enteros y de punto flotante
   - Uso de caracteres y cadenas
   - Valores booleanos y su uso
   - Conversión implícita y explícita

📦 TIPOS DE DATOS BÁSICOS

1️⃣ **Enteros (int)**:
- Números sin decimales
- Ejemplo: 10, -5, 0

2️⃣ **Punto flotante (float, double)**:
- Números con decimales
- float: precisión simple
- double: precisión doble (más precisa)

3️⃣ **Caracteres (char)**:
- Un solo carácter
- Ejemplo: 'a', 'Z', '9'

4️⃣ **Booleanos (bool)**:
- Valores verdadero (true) o falso (false)

💻 PROGRAMA PRÁCTICO
*/

#include <iostream>
using namespace std;

int main() {
    // 📦 Variables de diferentes tipos
    int entero = 42;
    float flotante = 3.14f;
    double doble = 2.718281828;
    char caracter = 'A';
    bool booleano = true;

    // Mostrar valores
    cout << "int: " << entero << endl;
    cout << "float: " << flotante << endl;
    cout << "double: " << doble << endl;
    cout << "char: " << caracter << endl;
    cout << "bool: " << booleano << endl;

    // Conversión implícita
    double suma = entero + flotante;
    cout << "Suma (int + float) = " << suma << endl;

    // Conversión explícita
    int truncado = (int)doble;
    cout << "Truncado (double a int) = " << truncado << endl;

    return 0;
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 📊 Crea variables de cada tipo y muéstralas
2. 🔄 Experimenta con conversiones implícitas y explícitas
3. 🧮 Calcula operaciones con diferentes tipos
4. 📝 Usa booleanos para condiciones simples
5. 🎨 Crea un programa que muestre caracteres y sus códigos ASCII

💡 CONSEJOS:
- Usa el tipo adecuado para cada dato
- Evita conversiones innecesarias
- Practica con ejemplos simples

🚀 SIGUIENTE PASO:
Ve a 10_Operadores_Aritmeticos.cpp para aprender sobre operadores.
*/