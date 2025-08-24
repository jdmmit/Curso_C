/*
🎯 ARCHIVO: 08_Constantes_y_Listas.cpp
📚 TEMA: Constantes y Listas en C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Aprende a usar constantes y listas para manejar datos inmutables y colecciones

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué son las constantes y cómo declararlas
   - Por qué usar constantes para valores fijos
   - Cómo crear listas (arreglos) en C++
   - Acceder y modificar elementos de una lista
   - Buenas prácticas para manejo de datos

🔒 CONSTANTES EN C++

Las constantes son variables cuyo valor NO puede cambiar después de ser asignado.

```cpp
const int DIAS_SEMANA = 7;
const char LETRA = 'A';
```

Intentar cambiar una constante genera error de compilación.

📋 LISTAS (ARREGLOS) EN C++

Las listas son colecciones de elementos del mismo tipo, accesibles por índice.

```cpp
int edades[] = {18, 24, 30};
```

Los índices comienzan en 0.

🔍 ACCEDER A ELEMENTOS

```cpp
cout << edades[0];  // Imprime 18
```

🔄 MODIFICAR ELEMENTOS

```cpp
edades[1] = 26;  // Cambia el segundo elemento a 26
```

💻 PROGRAMA PRÁCTICO
*/

#include <iostream>
using namespace std;

int main() {
    // 🎯 Constantes
    const double PI = 3.14159;
    const int MAX_ESTUDIANTES = 30;

    cout << "🔒 Constantes:" << endl;
    cout << "PI = " << PI << endl;
    cout << "Máximo estudiantes = " << MAX_ESTUDIANTES << endl;

    // 📋 Listas
    int edades[] = {18, 24, 30};
    int tamaño = sizeof(edades) / sizeof(edades[0]);

    cout << "\n📋 Lista de edades:" << endl;
    for (int i = 0; i < tamaño; i++) {
        cout << "Edad " << i << ": " << edades[i] << endl;
    }

    // 🔄 Modificar un elemento
    edades[1] = 26;
    cout << "\n🔄 Después de modificar edades[1]:" << endl;
    for (int i = 0; i < tamaño; i++) {
        cout << "Edad " << i << ": " << edades[i] << endl;
    }

    return 0;
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🔒 Crea constantes para:
   - Número de días en un año
   - Número máximo de jugadores en un juego

2. 📋 Crea una lista de nombres de 5 amigos
   - Imprime todos los nombres
   - Cambia el nombre del tercer amigo

3. 🔄 Modifica elementos en una lista de precios
   - Cambia el precio del primer producto
   - Imprime la lista actualizada

4. 🧮 Calcula el promedio de una lista de números

💡 CONSEJOS:
- Usa constantes para valores que no cambian
- Usa listas para manejar colecciones de datos
- Siempre verifica los índices para evitar errores

🚀 SIGUIENTE PASO:
Ve a 09_Tipos_de_Datos.cpp para aprender más sobre tipos de datos en C++.
*/