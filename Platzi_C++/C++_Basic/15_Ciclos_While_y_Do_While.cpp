/*
🎯 ARCHIVO: 15_Ciclos_While_y_Do_While.cpp
📚 TEMA: Ciclos While y Do-While en C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Aprende a usar ciclos while y do-while para ejecuciones indefinidas

💡 CONCEPTOS QUE APRENDERÁS:
   - Ciclo while y su funcionamiento
   - Ciclo do-while y diferencia con while
   - Condiciones de continuación
   - Aplicaciones prácticas de ciclos indefinidos
   - Comparación entre diferentes tipos de ciclos

↻ CICLOS WHILE Y DO-WHILE

Los ciclos `while` y `do-while` están diseñados para ejecutarse de manera **indefinida**, dependiendo de una condición externa. Son ideales para situaciones donde no se conoce de antemano cuántas iteraciones se necesitarán.

🎯 **Casos de uso**:
- 🎯 Menús interactivos que se repiten hasta salir
- 🔧 Procesos que continúan hasta cumplir una condición
- 🔄 Lectura de datos hasta encontrar un valor específico
- ⚙️ Sistemas que esperan entrada del usuario

🔄 CICLO WHILE

El ciclo `while` ejecuta un bloque de código **mientras** una condición sea verdadera.

🏗️ SINTAXIS BÁSICA

```cpp
while (condición) {
    // Código a ejecutar mientras la condición sea verdadera
}
```

💻 PROGRAMA PRÁCTICO: CICLOS WHILE Y DO-WHILE
*/

#include <iostream>
using namespace std;

int main() {
    cout << "🎯 CICLOS WHILE Y DO-WHILE EN C++" << endl;
    cout << "===============================" << endl << endl;
    
    // 🔄 Ejemplo 1: Ciclo while básico
    cout << "🔄 EJEMPLO 1: Ciclo while básico" << endl;
    char respuesta = 'n';
    
    while (respuesta != 's' && respuesta != 'S') {
        cout << "¿Desea salir? (s/n): ";
        cin >> respuesta;
        
        if (respuesta == 's' || respuesta == 'S') {
            cout << "👋 ¡Hasta luego!" << endl;
        } else if (respuesta != 'n' && respuesta != 'N') {
            cout << "❌ Por favor, ingrese 's' o 'n'" << endl;
        }
    }
    
    // 🔁 Ejemplo 2: Ciclo do-while
    cout << "\n🔁 EJEMPLO 2: Ciclo do-while" << endl;
    int numero;
    
    do {
        cout << "Ingrese un número positivo (0 para salir): ";
        cin >> numero;
        
        if (numero > 0) {
            cout << "   El cuadrado de " << numero << " es " << (numero * numero) << endl;
        } else if (numero < 0) {
            cout << "   ❌ Por favor, ingrese un número positivo" << endl;
        }
    } while (numero != 0);
    
    cout << "👋 Programa finalizado" << endl;
    
    // 🎯 Ejemplo 3: Contador con while
    cout << "\n🎯 EJEMPLO 3: Contador con while" << endl;
    int contador = 1;
    int limite;
    
    cout << "Ingrese el límite de conteo: ";
    cin >> limite;
    
    cout << "Contando del 1 al " << limite << ":" << endl;
    while (contador <= limite) {
        cout << contador << " ";
        contador++;  // Importante: actualizar la condición
    }
    cout << endl;
    
    return 0;
}

/*
📊 COMPARACIÓN: WHILE VS DO-WHILE

| Aspecto | While | Do-While |
|---------|-------|----------|
| **Evaluación** | Antes de ejecutar | Después de ejecutar |
| **Ejecución mínima** | 0 veces (si condición falsa) | 1 vez (siempre se ejecuta) |
| **Uso común** | Validación inicial | Menús, entrada de datos |

🔧 **While**: Verifica la condición **antes** de ejecutar
```cpp
while (condición) {
    // Puede no ejecutarse nunca
}
```

🔧 **Do-While**: Ejecuta **al menos una vez** y luego verifica
```cpp
do {
    // Se ejecuta al menos una vez
} while (condición);
```

🔌 EJEMPLO COMPLETO: MENÚ INTERACTIVO
*/

void ejemplo_menu_interactivo() {
    cout << "\n🔌 EJEMPLO: MENÚ INTERACTIVO" << endl;
    cout << "===========================" << endl;
    
    int opcion;
    
    // 🔁 Do-while es ideal para menús
    do {
        cout << "\n📋 MENÚ PRINCIPAL" << endl;
        cout << "=================" << endl;
        cout << "1. Calcular área de círculo" << endl;
        cout << "2. Calcular factorial" << endl;
        cout << "3. Mostrar tabla de multiplicar" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1: {
                double radio;
                cout << "Ingrese el radio del círculo: ";
                cin >> radio;
                double area = 3.14159 * radio * radio;
                cout << "Área del círculo: " << area << endl;
                break;
            }
            case 2: {
                int numero;
                cout << "Ingrese un número: ";
                cin >> numero;
                int factorial = 1;
                for (int i = 1; i <= numero; i++) {
                    factorial *= i;
                }
                cout << "Factorial de " << numero << " es " << factorial << endl;
                break;
            }
            case 3: {
                int tabla;
                cout << "Ingrese número para tabla de multiplicar: ";
                cin >> tabla;
                for (int i = 1; i <= 10; i++) {
                    cout << tabla << " x " << i << " = " << (tabla * i) << endl;
                }
                break;
            }
            case 0:
                cout << "👋 ¡Gracias por usar el programa!" << endl;
                break;
            default:
                cout << "❌ Opción no válida. Intente de nuevo." << endl;
                break;
        }
    } while (opcion != 0);
}

/*
⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:

1️⃣ **Ciclo infinito (while)**:
```cpp
int i = 0;
while (i < 10) {
    cout << i << endl;
    // ❌ Falta incrementar i - ciclo infinito
}
```

2️⃣ **Condición incorrecta (do-while)**:
```cpp
int i = 0;
do {
    cout << i << endl;
    i++;
} while (i > 10);  // ❌ Condición nunca verdadera después de la primera ejecución
```

✅ **Formas correctas**:
```cpp
// ✅ While correcto
int i = 0;
while (i < 10) {
    cout << i << endl;
    i++;  // ✅ Incrementar para evitar ciclo infinito
}

// ✅ Do-while correcto
int j = 0;
do {
    cout << j << endl;
    j++;
} while (j < 5);  // ✅ Condición que puede ser verdadera
```

🔧 EJEMPLO AVANZADO: VALIDACIÓN DE DATOS
*/

void ejemplo_validacion_datos() {
    cout << "\n🔧 EJEMPLO: VALIDACIÓN DE DATOS" << endl;
    cout << "==============================" << endl;
    
    int edad;
    
    // 🔄 While para validar entrada
    cout << "Ingrese su edad (1-120): ";
    cin >> edad;
    
    while (edad < 1 || edad > 120) {
        cout << "❌ Edad no válida. Ingrese una edad entre 1 y 120: ";
        cin >> edad;
    }
    
    cout << "✅ Edad válida: " << edad << " años" << endl;
    
    // 🔁 Do-while para confirmación
    char confirmacion;
    do {
        cout << "¿Confirma esta información? (s/n): ";
        cin >> confirmacion;
        
        if (confirmacion != 's' && confirmacion != 'S' && 
            confirmacion != 'n' && confirmacion != 'N') {
            cout << "❌ Por favor, ingrese 's' o 'n'" << endl;
        }
    } while (confirmacion != 's' && confirmacion != 'S' && 
             confirmacion != 'n' && confirmacion != 'N');
    
    if (confirmacion == 's' || confirmacion == 'S') {
        cout << "✅ Información confirmada" << endl;
    } else {
        cout << "❌ Información no confirmada" << endl;
    }
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🔄 **Menú básico**:
   - Crea un menú que se repita hasta salir
   - Usa do-while para asegurar ejecución
   - Implementa opciones simples

2. 🔧 **Validación de entrada**:
   - Valida números en rangos específicos
   - Usa while para repetir hasta entrada válida
   - Proporciona mensajes de error claros

3. 🎯 **Contador regresivo**:
   - Implementa cuenta regresiva con while
   - Usa pausas entre números (opcional)
   - Muestra mensaje al finalizar

4. 🔁 **Procesamiento de datos**:
   - Lee números hasta encontrar un valor específico
   - Calcula estadísticas de los datos ingresados
   - Usa do-while para asegurar al menos una entrada

5. 📋 **Sistema de login**:
   - Implementa intentos limitados de login
   - Usa while para controlar intentos
   - Bloquea después de intentos fallidos

💡 CONSEJOS PARA CICLOS INDEFINIDOS:

✅ **Buenas prácticas**:
- 🎯 Siempre actualizar la condición dentro del ciclo
- 🔢 Proporcionar forma de salir del ciclo
- 📝 Mostrar claramente el propósito del ciclo
- 🧪 Probar casos límite y condiciones extremas

❌ **Errores a evitar**:
- 🚫 No actualizar variables de control
- 🔥 Crear ciclos infinitos accidentalmente
- 📉 No proporcionar salida clara del ciclo
- 🚫 Usar condiciones imposibles de cumplir

🚀 SIGUIENTE PASO:

Los ciclos while y do-while son ideales para:
- 🎯 Sistemas interactivos
- 🔧 Validación de datos
- 🔄 Procesos que continúan hasta cumplir condiciones
- 💪 Aplicaciones que requieren entrada continua

¡Sigue practicando con ciclos indefinidos!
*/