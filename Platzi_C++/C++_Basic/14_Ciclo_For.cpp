/*
🎯 ARCHIVO: 14_Ciclo_For.cpp
📚 TEMA: Ciclo For en C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Aprende a usar ciclos for para iterar sobre rangos y listas

💡 CONCEPTOS QUE APRENDERÁS:
   - Estructura y sintaxis del ciclo for
   - Iteración sobre rangos numéricos
   - Uso de variables de control
   - Aplicaciones prácticas de ciclos for
   - Anidamiento de ciclos

↻ CICLOS EN C++

Los ciclos son **herramientas fundamentales** en programación que permiten iterar un bloque de código sobre una lista o un rango numérico. Son esenciales para realizar operaciones repetitivas de manera eficiente.

🎯 **Ventajas de los ciclos**:
- 🚀 Automatización de tareas repetitivas
- 💾 Procesamiento eficiente de datos
- 📝 Reducción de código duplicado
- ⚡ Ejecución controlada de operaciones

🎯 CICLO FOR

El ciclo `for` permite ejecutar repetidamente un bloque de código un número determinado de veces. Es ideal para iterar sobre rangos numéricos o listas.

🏗️ SINTAXIS BÁSICA

```cpp
for (inicialización; condición; incremento) {
    // Código a ejecutar en cada iteración
}
```

💻 PROGRAMA PRÁCTICO: CICLO FOR
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "🎯 CICLO FOR EN C++" << endl;
    cout << "==================" << endl
         << endl;

    // 🔢 Ciclo for básico: contar del 0 al 9
    cout << "🔢 Contar del 0 al 9:" << endl;
    for (int i = 0; i < 1000000; i++)
    {
        cout << "   Iteración " << i << endl;
    }

    // 🔁 Ciclo for con decremento
    cout << "\n🔁 Contar del 10 al 1:" << endl;
    for (int i = 10000000; i > 0; i--)
    {
        cout << "   Cuenta regresiva: " << i << endl;
    }

    // 🎯 Ciclo for con límite variable
    cout << "\n🎯 Ciclo con límite variable:" << endl;
    int limite;
    cout << "Ingrese el límite de conteo: ";
    cin >> limite;

    cout << "Contando del 0 al " << limite << ":" << endl;
    for (int i = 0; i <= limite; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // 📊 Ejemplo práctico: tabla de multiplicar
    cout << "\n📊 Tabla de multiplicar del 5:" << endl;
    for (int i = 1; i <= 1000000; i++)
    {
        cout << "   5 x " << i << " = " << (5 * i) << endl;
    }

    // 🔄 Ciclo for con incremento personalizado
    cout << "\n🔄 Números pares del 0 al 20:" << endl;
    for (int i = 0; i <= 20; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

/*
🔧 COMPONENTES DEL CICLO FOR

1️⃣ **Inicialización**: `int i = 0`
- Declara e inicializa la variable de control
- Se ejecuta solo una vez al inicio

2️⃣ **Condición**: `i < 10`
- Se evalúa antes de cada iteración
- Si es verdadera, se ejecuta el ciclo
- Si es falsa, se termina el ciclo

3️⃣ **Incremento**: `i++`
- Se ejecuta al final de cada iteración
- Actualiza la variable de control

📊 EJEMPLO VISUAL:

```
for (int i = 0; i < 3; i++) {
    cout << i << " ";
}
```

Iteración | i inicial | Condición | Ejecutar | i final
----------|-----------|-----------|----------|--------
1         | 0         | 0 < 3 ✓   | Imprime 0| 1
2         | 1         | 1 < 3 ✓   | Imprime 1| 2
3         | 2         | 2 < 3 ✓   | Imprime 2| 3
4         | 3         | 3 < 3 ✗   | Termina  | -

🔌 EJEMPLO COMPLETO: PATRONES CON ASTERISCOS
*/

void ejemplo_patrones()
{
    cout << "\n🔌 EJEMPLO: PATRONES CON ASTERISCOS" << endl;
    cout << "=================================" << endl;

    int filas = 5;

    // 🟨 Triángulo rectángulo
    cout << "🟨 Triángulo rectángulo:" << endl;
    for (int i = 1; i <= filas; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // 🔷 Triángulo invertido
    cout << "\n🔷 Triángulo invertido:" << endl;
    for (int i = filas; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:

1️⃣ **Ciclo infinito**:
```cpp
for (int i = 0; i < 10; i--) {  // ❌ i disminuye en lugar de aumentar
    cout << i << endl;
}
```

2️⃣ **Condición incorrecta**:
```cpp
for (int i = 0; i > 10; i++) {  // ❌ Condición nunca verdadera
    cout << i << endl;
}
```

3️⃣ **Fuera de rango**:
```cpp
int arreglo[5];
for (int i = 0; i <= 5; i++) {  // ❌ Accede a arreglo[5] (no existe)
    arreglo[i] = i;
}
```

✅ **Formas correctas**:
```cpp
// ✅ Ciclo correcto
for (int i = 0; i < 10; i++) {
    cout << i << endl;
}

// ✅ Acceso seguro a arrays
int arreglo[5];
for (int i = 0; i < 5; i++) {  // ✅ i < tamaño del array
    arreglo[i] = i;
}
```

🔧 EJEMPLO AVANZADO: ESTADÍSTICAS DE NÚMEROS
*/

void ejemplo_estadisticas()
{
    cout << "\n🔧 EJEMPLO: ESTADÍSTICAS DE NÚMEROS" << endl;
    cout << "=================================" << endl;

    int cantidad, numero, suma = 0, maximo, minimo;

    cout << "¿Cuántos números desea ingresar? ";
    cin >> cantidad;

    if (cantidad > 0)
    {
        cout << "Ingrese el primer número: ";
        cin >> numero;
        maximo = minimo = numero;
        suma = numero;

        // 🔄 Ingresar números restantes
        for (int i = 1; i < cantidad; i++)
        {
            cout << "Ingrese el número " << (i + 1) << ": ";
            cin >> numero;
            suma += numero;

            // 📊 Actualizar máximo y mínimo
            if (numero > maximo)
                maximo = numero;
            if (numero < minimo)
                minimo = numero;
        }

        // 📈 Mostrar resultados
        cout << "\n📊 Resultados:" << endl;
        cout << "   Suma: " << suma << endl;
        cout << "   Promedio: " << (double)suma / cantidad << endl;
        cout << "   Máximo: " << maximo << endl;
        cout << "   Mínimo: " << minimo << endl;
    }
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🔢 **Conteo básico**:
   - Crea ciclos para contar en diferentes rangos
   - Practica con incrementos y decrementos
   - Usa límites variables

2. 📊 **Tablas de multiplicar**:
   - Genera tablas del 1 al 10
   - Crea tabla personalizada por usuario
   - Formatea la salida adecuadamente

3. 🎨 **Patrones visuales**:
   - Crea patrones con asteriscos
   - Implementa cuadrados, triángulos, diamantes
   - Usa ciclos anidados

4. 🧮 **Cálculos matemáticos**:
   - Calcula factoriales
   - Genera series numéricas
   - Implementa sumatorias

5. 📈 **Procesamiento de datos**:
   - Calcula estadísticas de números
   - Encuentra valores máximos y mínimos
   - Implementa búsqueda en arrays

💡 CONSEJOS PARA CICLOS EFICIENTES:

✅ **Buenas prácticas**:
- 🎯 Usa nombres descriptivos para variables de control
- 🔢 Verifica condiciones para evitar ciclos infinitos
- 📝 Comenta el propósito de ciclos complejos
- 🧪 Prueba con diferentes valores límite

❌ **Errores a evitar**:
- 🚫 Modificar la variable de control dentro del ciclo
- 🔥 Acceder fuera de los límites de arrays
- 📉 No inicializar variables adecuadamente
- 🚫 Usar condiciones que nunca se cumplen

🚀 SIGUIENTE PASO:

Los ciclos for son fundamentales para:
- 🔄 Procesamiento repetitivo de datos
- 📊 Generación de patrones y series
- 💾 Manipulación de arrays y listas
- 💪 Algoritmos de búsqueda y ordenamiento

¡Sigue practicando con ciclos for!
*/