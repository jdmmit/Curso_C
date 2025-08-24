/*
🎯 ARCHIVO: 05_Estructuras_y_Punteros.cpp
📚 TEMA: Estructuras y Punteros en C++
🎓 NIVEL: Intermedio
📝 DESCRIPCIÓN: Aprende a combinar estructuras con punteros y gestión de memoria dinámica

💡 CONCEPTOS QUE APRENDERÁS:
   - Uso de variables tradicionales vs punteros con estructuras
   - Gestión dinámica de memoria con new y delete
   - Operador flecha (->) para acceso a miembros
   - Comparación de métodos de acceso
   - Buenas prácticas de manejo de memoria

🏗️ ESTRUCTURAS CON PUNTEROS

Combinar estructuras con punteros permite:
- 📦 Manejo dinámico de estructuras
- ⚡ Acceso eficiente a datos
- 🔧 Creación en tiempo de ejecución
- 💾 Gestión flexible de memoria

⌨️ DOS FORMAS DE TRABAJAR CON ESTRUCTURAS

1️⃣ **Variables tradicionales**:
```cpp
struct Persona {
    string nombre;
    int edad;
};

Persona p;              // Variable en stack
p.nombre = "Diana";     // Acceso con punto (.)
p.edad = 26;
```

2️⃣ **Punteros y memoria dinámica**:
```cpp
Persona* ptr = new Persona;  // Puntero en stack, estructura en heap
ptr->nombre = "Diana";       // Acceso con flecha (->)
ptr->edad = 26;
delete ptr;                  // Liberar memoria
```

💻 PROGRAMA PRÁCTICO: ESTRUCTURAS Y PUNTEROS
*/

#include <iostream>
#include <string>
using namespace std;

// 🏗️ Definición de estructura
struct Persona {
    string nombre;
    int edad;
};

int main() {
    cout << "🎯 ESTRUCTURAS Y PUNTEROS EN C++" << endl;
    cout << "===============================" << endl << endl;
    
    // 📦 USO DE VARIABLES TRADICIONALES
    cout << "📦 VARIABLES TRADICIONALES:" << endl;
    Persona p;                  // Declaración de variable
    p.nombre = "Diana";         // Asignación de nombre
    p.edad = 26;                // Asignación de edad
    
    cout << "   Nombre: " << p.nombre << endl;
    cout << "   Edad: " << p.edad << " años" << endl;
    cout << "   Dirección: " << &p << endl << endl;
    
    // 🔧 USO DE PUNTEROS Y GESTIÓN DINÁMICA
    cout << "🔧 PUNTEROS Y MEMORIA DINÁMICA:" << endl;
    Persona* ptr = new Persona; // Crear puntero a Persona
    ptr->nombre = "Diana";      // Asignación con operador flecha
    ptr->edad = 26;             // Asignación con operador flecha
    
    cout << "   Nombre: " << ptr->nombre << endl;
    cout << "   Edad: " << ptr->edad << " años" << endl;
    cout << "   Dirección: " << ptr << endl;
    cout << "   Dirección del puntero: " << &ptr << endl << endl;
    
    // 🧹 LIBERAR MEMORIA
    cout << "🧹 LIBERANDO MEMORIA:" << endl;
    delete ptr;                 // Liberar la memoria asignada
    ptr = nullptr;              // Evitar punteros colgantes
    cout << "   Memoria liberada exitosamente" << endl;
    
    // 🔄 COMPARACIÓN DE MÉTODOS
    cout << "\n🔄 COMPARACIÓN DE MÉTODOS:" << endl;
    cout << "   Variables tradicionales:" << endl;
    cout << "   - Memoria: Stack" << endl;
    cout << "   - Gestión: Automática" << endl;
    cout << "   - Tiempo de vida: Limitado al scope" << endl;
    cout << "   - Acceso: Operador punto (.)" << endl;
    
    cout << "\n   Punteros y new:" << endl;
    cout << "   - Memoria: Heap" << endl;
    cout << "   - Gestión: Manual" << endl;
    cout << "   - Tiempo de vida: Hasta delete" << endl;
    cout << "   - Acceso: Operador flecha (->)" << endl;
    
    return 0;
}

/*
🎯 OPERADOR FLECHA (->)

El operador flecha es una abreviación:
```cpp
Persona* ptr = new Persona;
ptr->nombre = "Diana";  // Equivalente a (*ptr).nombre = "Diana";
ptr->edad = 26;         // Equivalente a (*ptr).edad = 26;
```

📊 VENTAJAS DE CADA MÉTODO

✅ **Variables tradicionales**:
- 🚀 Más rápidas (stack vs heap)
- 🛡️ Gestión automática de memoria
- 🐛 Menos propensas a errores
- 💾 Uso eficiente para estructuras pequeñas

✅ **Punteros y new**:
- 📈 Crecimiento dinámico
- 🔧 Flexibilidad en tiempo de ejecución
- 📚 Estructuras de datos complejas
- 🔁 Compartir datos entre funciones

🔧 GESTIÓN DE MEMORIA DINÁMICA

1️⃣ **Asignación**:
```cpp
Persona* ptr = new Persona;     // Una estructura
Persona* arreglo = new Persona[10]; // Array de estructuras
```

2️⃣ **Liberación**:
```cpp
delete ptr;                     // Liberar una estructura
delete[] arreglo;               // Liberar array de estructuras
```

3️⃣ **Buenas prácticas**:
```cpp
Persona* ptr = new Persona;
// ... usar ptr ...
delete ptr;
ptr = nullptr;                  // Evitar punteros colgantes
```

🎯 EJEMPLO AVANZADO: ARRAY DINÁMICO DE ESTRUCTURAS
*/

void ejemplo_array_dinamico() {
    cout << "\n🎯 EJEMPLO: ARRAY DINÁMICO DE ESTRUCTURAS" << endl;
    cout << "========================================" << endl;
    
    int cantidad = 3;
    Persona* personas = new Persona[cantidad];
    
    // 📝 Inicializar el array
    personas[0] = {"Ana", 25};
    personas[1] = {"Carlos", 30};
    personas[2] = {"Elena", 28};
    
    // 📋 Mostrar información
    cout << "👥 Personas en el array:" << endl;
    for (int i = 0; i < cantidad; i++) {
        cout << "   " << i + 1 << ". " << personas[i].nombre 
             << " (" << personas[i].edad << " años)" << endl;
    }
    
    // 🧹 Liberar memoria
    delete[] personas;
    personas = nullptr;
    cout << "\n   Array liberado exitosamente" << endl;
}

/*
⚠️ PRECAUCIONES Y ERRORES COMUNES

❌ **Memory Leaks (Fugas de memoria)**:
```cpp
Persona* ptr = new Persona;
// ... usar ptr ...
// Olvidar delete ptr;  // ❌ Fuga de memoria
```

❌ **Punteros colgantes**:
```cpp
Persona* ptr = new Persona;
delete ptr;
ptr->nombre = "Error";  // ❌ Acceder a memoria liberada
```

❌ **Liberación doble**:
```cpp
Persona* ptr = new Persona;
delete ptr;
delete ptr;  // ❌ Liberar dos veces
```

✅ **Forma segura**:
```cpp
Persona* ptr = new Persona;
// ... usar ptr ...
delete ptr;
ptr = nullptr;  // ✅ Evitar punteros colgantes
```

🎯 OPERACIONES AVANZADAS CON PUNTEROS A ESTRUCTURAS

1️⃣ **Paso por referencia**:
```cpp
void actualizarEdad(Persona* p, int nuevaEdad) {
    p->edad = nuevaEdad;
}

Persona persona = {"Juan", 25};
actualizarEdad(&persona, 26);  // Pasar dirección
```

2️⃣ **Arrays de punteros**:
```cpp
Persona* personas[10];  // Array de punteros
for (int i = 0; i < 10; i++) {
    personas[i] = new Persona;  // Cada elemento apunta a nueva estructura
}
```

3️⃣ **Punteros a punteros**:
```cpp
Persona** ptr_doble = &ptr;  // Puntero a puntero
(*ptr_doble)->nombre = "Nuevo nombre";
```

🎯 EJERCICIOS PARA PRACTICAR:

1. 📦 **Básico**:
   - Crea estructura para producto
   - Usa ambos métodos (variable y puntero)
   - Compara resultados

2. 📚 **Biblioteca dinámica**:
   - Crea array dinámico de libros
   - Agrega y elimina libros
   - Libera memoria correctamente

3. 🔧 **Gestión segura**:
   - Implementa funciones para crear/eliminar estructuras
   - Usa nullptr después de delete
   - Verifica punteros antes de usar

4. 🎯 **Avanzado**:
   - Crea estructura para nodo de lista enlazada
   - Implementa funciones básicas
   - Maneja memoria correctamente

💡 CONSEJOS PARA MANEJO SEGURO:

✅ **Buenas prácticas**:
- 🎯 Cada new debe tener su delete correspondiente
- 🔍 Verifica nullptr antes de usar punteros
- 🧹 Asigna nullptr después de delete
- 📝 Documenta el propósito de cada asignación

❌ **Errores a evitar**:
- 🚫 Usar delete en variables tradicionales
- 🔥 Acceder a punteros después de delete
- 📉 No liberar memoria asignada con new
- 🚫 Liberar dos veces la misma memoria

🚀 SIGUIENTE PASO:

Este conocimiento es fundamental para:
- 📚 Estructuras de datos avanzadas (listas, árboles)
- 🎮 Juegos y aplicaciones complejas
- 🌐 Programación de sistemas
- 💪 Dominio completo de C++

¡Sigue practicando con estructuras y punteros!
*/