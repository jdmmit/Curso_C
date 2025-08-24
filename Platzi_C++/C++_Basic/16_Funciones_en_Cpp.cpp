/*
🎯 ARCHIVO: 16_Funciones_en_Cpp.cpp
📚 TEMA: Funciones en C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Aprende a crear y usar funciones para organizar tu código

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué son las funciones y para qué sirven
   - Cómo definir funciones en C++
   - Parámetros y valores de retorno
   - Llamadas a funciones
   - Ventajas de usar funciones

⚙️ FUNCIONES EN C++

Las funciones son **bloques de código aislados** que podemos invocar repetidamente para realizar una operación específica. Funcionan como "cajas negras" donde enviamos ciertos inputs y obtenemos un output.

🎯 **Ventajas de las funciones**:
- 📦 **Reutilización**: Usar el mismo código múltiples veces
- 🧼 **Organización**: Dividir código complejo en partes manejables
- 🐛 **Depuración**: Facilitar la identificación de errores
- 🎯 **Mantenimiento**: Modificar código en un solo lugar

🏗️ DEFINICIÓN DE FUNCIONES

Para definir una función en C++, necesitamos:

1️⃣ **Tipo de dato de retorno**: Qué tipo de dato devolverá
2️⃣ **Nombre de la función**: Identificador descriptivo
3️⃣ **Parámetros**: Variables de entrada (opcional)
4️⃣ **Cuerpo**: Bloque de código entre llaves

🏗️ SINTAXIS BÁSICA

```cpp
tipo_retorno nombre_funcion(parametros) {
    // Cuerpo de la función
    return valor;  // Si retorna un valor
}
```

💻 PROGRAMA PRÁCTICO: FUNCIONES EN ACCIÓN
*/

#include <iostream>
using namespace std;

// 🔧 Función básica que suma dos números
int suma(int a, int b) {
    return a + b;
}

// 🔄 Función que no retorna valor (void)
void saludar(string nombre) {
    cout << "¡Hola, " << nombre << "!" << endl;
}

// 🎯 Función con múltiples parámetros
double calcular_area_rectangulo(double base, double altura) {
    return base * altura;
}

// 🔢 Función sin parámetros
int obtener_numero_magico() {
    return 42;
}

int main() {
    cout << "🎯 FUNCIONES EN C++" << endl;
    cout << "==================" << endl << endl;
    
    // 📞 Llamadas a funciones
    cout << "🔧 SUMA DE NÚMEROS:" << endl;
    int resultado1 = suma(2, 2);
    int resultado2 = suma(2, 200);
    
    cout << "   suma(2, 2) = " << resultado1 << endl;
    cout << "   suma(2, 200) = " << resultado2 << endl;
    
    // 🔄 Función sin retorno
    cout << "\n🔄 SALUDO PERSONALIZADO:" << endl;
    saludar("María");
    saludar("Carlos");
    
    // 🎯 Función con múltiples parámetros
    cout << "\n🎯 CÁLCULO DE ÁREAS:" << endl;
    double area1 = calcular_area_rectangulo(5.0, 3.0);
    double area2 = calcular_area_rectangulo(10.5, 4.2);
    
    cout << "   Área de rectángulo 5x3: " << area1 << endl;
    cout << "   Área de rectángulo 10.5x4.2: " << area2 << endl;
    
    // 🔢 Función sin parámetros
    cout << "\n🔢 NÚMERO MÁGICO:" << endl;
    int numero_magico = obtener_numero_magico();
    cout << "   El número mágico es: " << numero_magico << endl;
    
    return 0;
}

/*
📊 TIPOS DE FUNCIONES

1️⃣ **Funciones que retornan valor**:
```cpp
int sumar(int a, int b) {
    return a + b;
}
```

2️⃣ **Funciones que no retornan valor (void)**:
```cpp
void mostrar_mensaje() {
    cout << "Hola mundo" << endl;
}
```

3️⃣ **Funciones con parámetros**:
```cpp
double calcular_promedio(double a, double b, double c) {
    return (a + b + c) / 3;
}
```

4️⃣ **Funciones sin parámetros**:
```cpp
int obtener_anio_actual() {
    return 2024;
}
```

🔌 EJEMPLO COMPLETO: CALCULADORA CON FUNCIONES
*/

// 🔧 Funciones para operaciones básicas
int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

double dividir(int a, int b) {
    if (b != 0) {
        return (double)a / b;
    } else {
        cout << "❌ Error: División por cero" << endl;
        return 0;
    }
}

void ejemplo_calculadora() {
    cout << "\n🔌 EJEMPLO: CALCULADORA CON FUNCIONES" << endl;
    cout << "===================================" << endl;
    
    int num1, num2;
    char operacion;
    
    cout << "🧮 Calculadora Modular" << endl;
    cout << "Ingrese primer número: ";
    cin >> num1;
    cout << "Ingrese operación (+, -, *, /): ";
    cin >> operacion;
    cout << "Ingrese segundo número: ";
    cin >> num2;
    
    switch (operacion) {
        case '+':
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;
        case '-':
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;
        case '*':
            cout << "Resultado: " << multiplicar(num1, num2) << endl;
            break;
        case '/':
            cout << "Resultado: " << dividir(num1, num2) << endl;
            break;
        default:
            cout << "❌ Operación no válida" << endl;
            break;
    }
}

/*
⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:

1️⃣ **Función sin retorno cuando se espera**:
```cpp
int calcular() {
    int resultado = 5 + 3;
    // ❌ Falta return
}
```

2️⃣ **Función que retorna valor en void**:
```cpp
void mostrar() {
    cout << "Hola" << endl;
    return 42;  // ❌ No se puede retornar valor en void
}
```

3️⃣ **Llamada a función no definida**:
```cpp
int main() {
    resultado = suma(2, 3);  // ❌ suma no está definida
    return 0;
}
```

✅ **Formas correctas**:
```cpp
// ✅ Función con retorno correcta
int calcular() {
    int resultado = 5 + 3;
    return resultado;  // ✅ Retorno obligatorio
}

// ✅ Función void correcta
void mostrar() {
    cout << "Hola" << endl;
    // ✅ No necesita return (opcional)
}

// ✅ Definir antes de usar o declarar prototipo
int suma(int a, int b);  // Prototipo

int main() {
    int resultado = suma(2, 3);  // ✅ Ahora funciona
    return 0;
}

int suma(int a, int b) {  // Definición
    return a + b;
}
```

🔧 EJEMPLO AVANZADO: FUNCIONES CON ARREGLOS
*/

void mostrar_arreglo(int arreglo[], int tamano) {
    cout << "[";
    for (int i = 0; i < tamano; i++) {
        cout << arreglo[i];
        if (i < tamano - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int suma_arreglo(int arreglo[], int tamano) {
    int suma = 0;
    for (int i = 0; i < tamano; i++) {
        suma += arreglo[i];
    }
    return suma;
}

void ejemplo_arreglos() {
    cout << "\n🔧 EJEMPLO: FUNCIONES CON ARREGLOS" << endl;
    cout << "================================" << endl;
    
    int numeros[] = {10, 20, 30, 40, 50};
    int tamano = 5;
    
    cout << "Arreglo: ";
    mostrar_arreglo(numeros, tamano);
    
    int suma_total = suma_arreglo(numeros, tamano);
    cout << "Suma total: " << suma_total << endl;
    
    double promedio = (double)suma_total / tamano;
    cout << "Promedio: " << promedio << endl;
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🔧 **Funciones básicas**:
   - Crea funciones para operaciones matemáticas básicas
   - Implementa funciones con y sin retorno
   - Practica con diferentes tipos de datos

2. 🎯 **Funciones con múltiples parámetros**:
   - Crea funciones que reciban varios parámetros
   - Implementa cálculos complejos con funciones
   - Usa parámetros por valor

3. 🔄 **Funciones de utilidad**:
   - Crea funciones para validar datos
   - Implementa funciones para formatear texto
   - Desarrolla funciones para conversiones

4. 📊 **Procesamiento de datos**:
   - Crea funciones que trabajen con arreglos
   - Implementa funciones estadísticas básicas
   - Desarrolla funciones de búsqueda y ordenamiento

5. 🧮 **Sistema modular**:
   - Divide un programa grande en funciones
   - Crea funciones para diferentes módulos
   - Implementa funciones de entrada/salida

💡 CONSEJOS PARA FUNCIONES EFICIENTES:

✅ **Buenas prácticas**:
- 🎯 Usa nombres descriptivos para funciones
- 🔢 Limita el número de parámetros (máximo 5-7)
- 📝 Comenta el propósito y parámetros de funciones
- 🧪 Prueba funciones individualmente

❌ **Errores a evitar**:
- 🚫 Crear funciones demasiado largas
- 🔥 No validar parámetros de entrada
- 📉 Usar variables globales innecesariamente
- 🚫 No retornar valores cuando se espera

🚀 SIGUIENTE PASO:

Las funciones son fundamentales para:
- 📦 Organizar código en módulos
- 🔄 Reutilizar lógica común
- 🐛 Facilitar la depuración
- 💪 Desarrollar programas mantenibles

¡Sigue practicando con funciones!
*/