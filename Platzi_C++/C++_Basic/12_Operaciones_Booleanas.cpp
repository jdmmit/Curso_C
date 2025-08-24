/*
🎯 ARCHIVO: 12_Operaciones_Booleanas.cpp
📚 TEMA: Operaciones Booleanas y Estructuras Condicionales
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Aprende operaciones booleanas y estructuras condicionales if-else

💡 CONCEPTOS QUE APRENDERÁS:
   - Operaciones booleanas (AND, OR, NOT)
   - Estructuras condicionales if-else
   - Evaluación de expresiones lógicas
   - Toma de decisiones en programas
   - Aplicaciones prácticas de lógica booleana

⚡ OPERACIONES BOOLEANAS EN C++

Las operaciones booleanas son **fundamentales** para tomar decisiones en programas. Permiten evaluar expresiones y compararlas para decidir el flujo de ejecución.

🔳 **Valores booleanos**:
- `true` (verdadero)
- `false` (falso)

🔧 **Operadores lógicos principales**:

1️⃣ **AND (&&)**: Ambas expresiones deben ser verdaderas
2️⃣ **OR (||)**: Al menos una expresión debe ser verdadera
3️⃣ **NOT (!)**: Invierte el valor lógico

💻 PROGRAMA PRÁCTICO: OPERACIONES BOOLEANAS
*/

#include <iostream>
using namespace std;

int main() {
    cout << "🎯 OPERACIONES BOOLEANAS EN C++" << endl;
    cout << "=============================" << endl << endl;
    
    // 🔧 Operadores lógicos básicos
    bool resultado;
    
    cout << "🔧 OPERADORES LÓGICOS:" << endl;
    resultado = true && false;  // AND - Retorna false
    cout << "true && false = " << resultado << endl;
    
    resultado = true || false;  // OR - Retorna true
    cout << "true || false = " << resultado << endl;
    
    resultado = !true;  // NOT - Retorna false
    cout << "!true = " << resultado << endl << endl;
    
    // 🎯 Ejemplo práctico: Sistema de votación
    int edad = 0;  // Variable para almacenar la edad del usuario
    
    cout << "🗳️ SISTEMA DE VOTACIÓN" << endl;
    cout << "Introduce tu edad: ";  // Solicitar la edad al usuario
    cin >> edad;                   // Leer la edad del usuario
    
    // 🔄 Estructura condicional if-else
    if (edad < 18) {
        cout << "❌ No puedes votar (menor de edad)" << endl;
    } else if (edad > 100) {
        cout << "❌ No puedes votar (edad no válida)" << endl;
    } else {
        cout << "✅ Puedes votar" << endl;
    }
    
    // 🎯 Ejemplo avanzado: Verificación múltiple
    cout << "\n🎯 EJEMPLO AVANZADO:" << endl;
    int nota;
    cout << "Ingrese su nota (0-100): ";
    cin >> nota;
    
    if (nota >= 90) {
        cout << "🎓 Excelente - A" << endl;
    } else if (nota >= 80) {
        cout << "👍 Muy Bien - B" << endl;
    } else if (nota >= 70) {
        cout << "👌 Bien - C" << endl;
    } else if (nota >= 60) {
        cout << "⚠️ Aprobado - D" << endl;
    } else {
        cout << "❌ Reprobado - F" << endl;
    }
    
    return 0;
}

/*
📊 TABLA DE VERDAD

🔧 **AND (&&)**:
| A     | B     | A && B |
|-------|-------|--------|
| false | false | false  |
| false | true  | false  |
| true  | false | false  |
| true  | true  | true   |

🔧 **OR (||)**:
| A     | B     | A || B |
|-------|-------|--------|
| false | false | false  |
| false | true  | true   |
| true  | false | true   |
| true  | true  | true   |

🔧 **NOT (!)**:
| A     | !A    |
|-------|-------|
| false | true  |
| true  | false |

🎯 ESTRUCTURAS CONDICIONALES

1️⃣ **if simple**:
```cpp
if (condición) {
    // Código si la condición es verdadera
}
```

2️⃣ **if-else**:
```cpp
if (condición) {
    // Código si la condición es verdadera
} else {
    // Código si la condición es falsa
}
```

3️⃣ **if-else if-else**:
```cpp
if (condición1) {
    // Código si condición1 es verdadera
} else if (condición2) {
    // Código si condición2 es verdadera
} else {
    // Código si ninguna condición es verdadera
}
```

🔌 EJEMPLO COMPLETO: SISTEMA DE ACCESO
*/

void ejemplo_sistema_acceso() {
    cout << "\n🔌 EJEMPLO: SISTEMA DE ACCESO" << endl;
    cout << "============================" << endl;
    
    string usuario, contraseña;
    
    cout << "🔐 Sistema de Acceso" << endl;
    cout << "Usuario: ";
    cin >> usuario;
    cout << "Contraseña: ";
    cin >> contraseña;
    
    // 🔐 Verificación de credenciales
    if (usuario == "admin" && contraseña == "1234") {
        cout << "✅ Acceso concedido - Bienvenido Administrador" << endl;
    } else if (usuario == "usuario" && contraseña == "abcd") {
        cout << "✅ Acceso concedido - Bienvenido Usuario" << endl;
    } else {
        cout << "❌ Acceso denegado - Credenciales inválidas" << endl;
    }
}

/*
⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:
```cpp
int a = 5;
if (a = 10) {  // ❌ Asignación en lugar de comparación
    // Esto siempre será verdadero
}
```

✅ **Forma correcta**:
```cpp
int a = 5;
if (a == 10) {  // ✅ Comparación correcta
    // Verifica si a es igual a 10
}
```

🎯 OPERADORES DE COMPARACIÓN COMBINADOS

```cpp
int edad = 25;
int limite = 18;

// 🔄 Múltiples condiciones
if (edad >= limite && edad <= 65) {
    cout << "Edad dentro del rango permitido" << endl;
}

// 🔧 Combinación con operadores lógicos
if ((edad < 18 || edad > 65) && limite > 0) {
    cout << "Edad fuera del rango estándar" << endl;
}
```

🔧 EJEMPLO CON EXPRESIONES COMPLEJAS
*/

void ejemplo_expresiones_complejas() {
    cout << "\n🔧 EJEMPLO: EXPRESIONES COMPLEJAS" << endl;
    cout << "===============================" << endl;
    
    int temperatura = 25;
    bool lluvia = false;
    bool viento = true;
    
    cout << "🌡️ Sistema Meteorológico" << endl;
    cout << "Temperatura: " << temperatura << "°C" << endl;
    cout << "¿Está lloviendo? " << (lluvia ? "Sí" : "No") << endl;
    cout << "¿Hay viento? " << (viento ? "Sí" : "No") << endl;
    
    // 🌤️ Recomendación basada en condiciones
    if (temperatura >= 20 && temperatura <= 30 && !lluvia) {
        cout << "🌤️ ¡Día perfecto para salir!" << endl;
    } else if (temperatura < 20 || lluvia || viento) {
        cout << "🌧️ Mejor quedarse en casa" << endl;
    } else {
        cout << "❓ Condición desconocida" << endl;
    }
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🔧 **Operaciones básicas**:
   - Crea expresiones con AND, OR y NOT
   - Verifica resultados con tabla de verdad

2. 🎯 **Condiciones simples**:
   - Implementa if-else para diferentes escenarios
   - Usa operadores de comparación

3. 🔄 **Múltiples condiciones**:
   - Crea estructuras if-else if-else
   - Combina múltiples criterios de evaluación

4. 🌡️ **Sistema de calificaciones**:
   - Evalúa notas con diferentes rangos
   - Proporciona retroalimentación adecuada

5. 🔐 **Verificación de acceso**:
   - Implementa sistema de login básico
   - Usa combinación de condiciones

💡 CONSEJOS PARA CONDICIONALES EFICIENTES:

✅ **Buenas prácticas**:
- 🎯 Usa paréntesis para claridad en expresiones complejas
- 🔢 Ordena condiciones de más específica a más general
- 📝 Comenta condiciones complejas
- 🧪 Prueba todos los caminos posibles

❌ **Errores a evitar**:
- 🚫 Confundir = con ==
- 🔥 No considerar todos los casos posibles
- 📉 Usar demasiadas condiciones anidadas
- 🚫 No validar entradas del usuario

🚀 SIGUIENTE PASO:

Las operaciones booleanas y condicionales son esenciales para:
- 🎯 Toma de decisiones automatizada
- 🔄 Control de flujo de programas
- 🔧 Sistemas de validación
- 💪 Aplicaciones interactivas

¡Sigue practicando con lógica booleana!
*/