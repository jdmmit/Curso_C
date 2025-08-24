/*
🎯 ARCHIVO: 10_Operadores_en_Cpp.cpp
📚 TEMA: Operadores en C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Aprende a usar operadores aritméticos, de comparación, lógicos y de asignación

💡 CONCEPTOS QUE APRENDERÁS:
   - Operadores aritméticos (+, -, *, /, %)
   - Operadores de comparación (==, !=, <, >, <=, >=)
   - Operadores de asignación (=, +=, -=, *=, /=)
   - Operadores lógicos (&&, ||, !)
   - Operador sizeof para obtener tamaños de datos
   - Aplicaciones prácticas de operadores

🧮 OPERADORES EN C++

Los operadores son **símbolos fundamentales** en C++ que permiten realizar operaciones sobre variables y valores. Son esenciales para cualquier programa y se categorizan en varios tipos.

🔢 OPERADORES ARITMÉTICOS

Permiten realizar operaciones matemáticas básicas:

➕ **Suma (+)**: a + b
➖ **Resta (-)**: a - b
✖️ **Multiplicación (*)**: a * b
➗ **División (/)**: a / b
🔘 **Módulo (%)**: a % b (resto de la división)

💻 PROGRAMA PRÁCTICO: OPERADORES EN ACCIÓN
*/

#include <iostream>
using namespace std;

int main() {
    cout << "🎯 OPERADORES EN C++" << endl;
    cout << "===================" << endl << endl;
    
    int a = 2;
    int b = 3;
    
    // 🧮 Operadores aritméticos
    cout << "🔢 OPERADORES ARITMÉTICOS:" << endl;
    cout << "   " << a << " + " << b << " = " << a + b << endl;
    cout << "   " << a << " - " << b << " = " << a - b << endl;
    cout << "   " << a << " * " << b << " = " << a * b << endl;
    cout << "   " << a << " / " << b << " = " << a / b << endl;
    cout << "   " << a << " % " << b << " = " << a % b << endl << endl;
    
    // 🔄 Operadores de comparación
    cout << "🔄 OPERADORES DE COMPARACIÓN:" << endl;
    cout << "   " << a << " == " << b << " : " << (a == b) << endl;
    cout << "   " << a << " != " << b << " : " << (a != b) << endl;
    cout << "   " << a << " > " << b << " : " << (a > b) << endl;
    cout << "   " << a << " < " << b << " : " << (a < b) << endl;
    cout << "   " << a << " >= " << b << " : " << (a >= b) << endl;
    cout << "   " << a << " <= " << b << " : " << (a <= b) << endl << endl;
    
    // 🎯 Operadores de asignación
    cout << "🎯 OPERADORES DE ASIGNACIÓN:" << endl;
    int c = 2;
    cout << "   c = " << c << endl;
    c += 1;  // Equivale a c = c + 1
    cout << "   c += 1 : " << c << endl;
    c *= 2;  // Equivale a c = c * 2
    cout << "   c *= 2 : " << c << endl;
    c -= 3;  // Equivale a c = c - 3
    cout << "   c -= 3 : " << c << endl << endl;
    
    // 🔧 Operadores lógicos
    cout << "🔧 OPERADORES LÓGICOS:" << endl;
    bool resultado = (a < b) && (c > a);  // AND lógico
    cout << "   (" << a << " < " << b << ") && (" << c << " > " << a << ") : " << resultado << endl;
    
    resultado = (a < b) || (c < a);  // OR lógico
    cout << "   (" << a << " < " << b << ") || (" << c << " < " << a << ") : " << resultado << endl;
    
    resultado = !(a < b);  // NOT lógico
    cout << "   !(" << a << " < " << b << ") : " << resultado << endl << endl;
    
    // 📏 Operador especial sizeof
    cout << "📏 OPERADOR SIZEOF:" << endl;
    cout << "   Tamaño de int: " << sizeof(int) << " bytes" << endl;
    cout << "   Tamaño de variable a: " << sizeof(a) << " bytes" << endl;
    
    int edades[] = {24, 47, 15};
    int numElementos = sizeof(edades) / sizeof(edades[0]);
    cout << "   Elementos en arreglo edades: " << numElementos << endl;
    
    return 0;
}

/*
📊 TABLA DE OPERADORES

🧮 **Aritméticos**:
| Operador | Nombre        | Ejemplo | Resultado |
|----------|---------------|---------|-----------|
| +        | Suma          | 5 + 3   | 8         |
| -        | Resta         | 5 - 3   | 2         |
| *        | Multiplicación| 5 * 3   | 15        |
| /        | División      | 5 / 3   | 1         |
| %        | Módulo        | 5 % 3   | 2         |

🔄 **Comparación**:
| Operador | Nombre         | Ejemplo  | Resultado |
|----------|----------------|----------|-----------|
| ==       | Igual a        | 5 == 3   | false     |
| !=       | Diferente de   | 5 != 3   | true      |
| <        | Menor que      | 5 < 3    | false     |
| >        | Mayor que      | 5 > 3    | true      |
| <=       | Menor o igual  | 5 <= 3   | false     |
| >=       | Mayor o igual  | 5 >= 3   | true      |

🎯 **Asignación**:
| Operador | Equivale a    | Ejemplo  | Resultado |
|----------|---------------|----------|-----------|
| =        | Asignación    | a = 5    | a = 5     |
| +=       | a = a + expr  | a += 3   | a = a + 3 |
| -=       | a = a - expr  | a -= 3   | a = a - 3 |
| *=       | a = a * expr  | a *= 3   | a = a * 3 |
| /=       | a = a / expr  | a /= 3   | a = a / 3 |

🔧 **Lógicos**:
| Operador | Nombre | Ejemplo      | Resultado |
|----------|--------|--------------|-----------|
| &&       | AND    | true && false| false     |
| ||       | OR     | true || false| true      |
| !        | NOT    | !true        | false     |

⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:
- 🚫 Confundir = (asignación) con == (comparación)
- 🔢 División entre enteros trunca decimales
- 🚫 Usar % con números decimales (no permitido)

✅ **Buenas prácticas**:
- 🎯 Usar paréntesis para claridad en expresiones complejas
- 🔍 Verificar tipos de datos en operaciones
- 📝 Comentar operaciones complejas

🎯 EJEMPLO AVANZADO: EXPRESIONES COMPLEJAS
*/

void ejemplo_expresiones_complejas() {
    cout << "\n🎯 EJEMPLO: EXPRESIONES COMPLEJAS" << endl;
    cout << "===============================" << endl;
    
    int a = 10, b = 5, c = 2;
    
    // 📊 Expresión con múltiples operadores
    int resultado = a + b * c - (a / c);
    cout << "   " << a << " + " << b << " * " << c << " - (" << a << " / " << c << ") = " << resultado << endl;
    
    // 🔍 Con paréntesis para claridad
    int resultado2 = a + (b * c) - (a / c);
    cout << "   " << a << " + (" << b << " * " << c << ") - (" << a << " / " << c << ") = " << resultado2 << endl;
    
    // 🔄 Operadores lógicos combinados
    bool expr1 = (a > b) && (c < b);
    bool expr2 = (a == 10) || (b != 5);
    bool expr3 = !(a < b);
    
    cout << "   (" << a << " > " << b << ") && (" << c << " < " << b << ") : " << expr1 << endl;
    cout << "   (" << a << " == 10) || (" << b << " != 5) : " << expr2 << endl;
    cout << "   !(" << a << " < " << b << ") : " << expr3 << endl;
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🧮 **Operaciones básicas**:
   - Crea variables y realiza todas las operaciones aritméticas
   - Prueba con diferentes tipos de datos

2. 🔄 **Comparaciones**:
   - Compara diferentes valores
   - Usa operadores de comparación en condiciones

3. 🎯 **Asignaciones**:
   - Practica con operadores de asignación combinada
   - Observa cómo cambian los valores

4. 🔧 **Lógica booleana**:
   - Crea expresiones lógicas complejas
   - Usa tablas de verdad para verificar resultados

5. 📏 **Sizeof**:
   - Verifica tamaños de diferentes tipos de datos
   - Calcula número de elementos en arrays

💡 CONSEJOS PARA DOMINAR OPERADORES:

✅ **Buenas prácticas**:
- 🎯 Usa paréntesis para claridad
- 🔢 Conoce precedencia de operadores
- 📝 Comenta operaciones complejas
- 🧪 Prueba con diferentes valores

❌ **Errores a evitar**:
- 🚫 Confundir = con ==
- 🔢 Dividir entre cero
- 🚫 Usar % con decimales
- 📉 No verificar tipos de datos

🚀 SIGUIENTE PASO:

Los operadores son fundamentales para:
- 🧮 Cálculos matemáticos
- 🔄 Control de flujo
- 🔧 Manipulación de datos
- 💪 Programación avanzada

¡Sigue practicando con operadores!
*/