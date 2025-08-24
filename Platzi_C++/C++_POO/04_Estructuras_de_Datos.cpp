/*
🎯 ARCHIVO: 04_Estructuras_de_Datos.cpp
📚 TEMA: Estructuras de Datos y Tipos Personalizados
🎓 NIVEL: Intermedio
📝 DESCRIPCIÓN: Aprende a crear estructuras de datos y tipos personalizados en C++

💡 CONCEPTOS QUE APRENDERÁS:
   - Limitaciones de listas básicas
   - Creación de listas de caracteres
   - Uso de memoria con punteros
   - Definición de estructuras personalizadas
   - Manejo eficiente de datos complejos

🗄️ ESTRUCTURAS DE DATOS EN C++

Las estructuras de datos permiten organizar información de manera eficiente:
- 📦 Agrupar diferentes tipos de datos
- 🎯 Manejar entidades complejas
- 🔧 Crear tipos personalizados
- ⚡ Acceso optimizado a la información

⚠️ LIMITACIONES DE LISTAS BÁSICAS

Las listas (arrays) tradicionales tienen restricciones:

1️⃣ **Uniformidad de tipos**:
```cpp
int numeros[5] = {1, 2, 3, 4, 5};        // Solo enteros
char letras[5] = {'a', 'b', 'c', 'd', 'e'};  // Solo caracteres
```

2️⃣ **Acceso al tamaño**:
```cpp
int arreglo[10];
// No hay forma directa de obtener el tamaño
int tamano = sizeof(arreglo) / sizeof(arreglo[0]);
```

3️⃣ **Flexibilidad limitada**:
- 🚫 No crecen dinámicamente
- 🚫 No mezclan tipos de datos
- 🚫 Acceso básico secuencial

🔤 LISTAS DE CARACTERES (CADENAS)

C++ ofrece varias formas de manejar texto:

1️⃣ **Forma manual**:
```cpp
char texto[] = {'h', 'o', 'l', 'a', '\0'};
```

2️⃣ **Forma simplificada**:
```cpp
char texto[] = "hola";  // Más directa y clara
```

3️⃣ **Uso de librería string**:
```cpp
#include <string>
std::string texto = "hola";  // Más funcionalidades
```

💻 PROGRAMA PRÁCTICO: ESTRUCTURAS DE DATOS
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "🎯 ESTRUCTURAS DE DATOS EN C++" << endl;
    cout << "=============================" << endl << endl;
    
    // 🔤 Lista de caracteres (forma manual)
    char texto_manual[] = {'H', 'o', 'l', 'a', ' ', 'M', 'u', 'n', 'd', 'o', '\0'};
    cout << "🔤 Texto manual: " << texto_manual << endl;
    
    // 🔤 Lista de caracteres (forma simplificada)
    char texto_simple[] = "Hola Mundo";
    cout << "🔤 Texto simple: " << texto_simple << endl;
    
    // 📦 Comparar direcciones
    cout << "\n🔍 Direcciones de memoria:" << endl;
    cout << "   texto_manual: " << (void*)texto_manual << endl;
    cout << "   texto_simple: " << (void*)texto_simple << endl;
    
    // 🎯 Estructura personalizada
    struct Persona {
        char nombre[50];
        int edad;
    };
    
    // 📝 Crear instancia de estructura
    Persona persona1;
    strcpy(persona1.nombre, "Juan Pérez");
    persona1.edad = 25;
    
    cout << "\n👤 Persona 1:" << endl;
    cout << "   Nombre: " << persona1.nombre << endl;
    cout << "   Edad: " << persona1.edad << " años" << endl;
    
    // 🔄 Modificar estructura
    persona1.edad = 26;
    cout << "   Nueva edad: " << persona1.edad << " años" << endl;
    
    return 0;
}

/*
🧠 USO DE MEMORIA CON PUNTEROS

C++ asigna memoria contigua para arrays:
- 📏 Cada carácter ocupa una dirección única
- 🔚 Carácter nulo (\0) marca el final
- 🔢 Índices comienzan en 0

📝 **Ejemplo de asignación en memoria**:
```
Índice:  0   1   2   3   4
Valor:  'h' 'o' 'l' 'a' '\0'
Dirección: 0x1000 0x1001 0x1002 0x1003 0x1004
```

🎯 DEFINICIÓN DE ESTRUCTURAS PERSONALIZADAS

Las estructuras (`struct`) permiten crear tipos complejos:

```cpp
struct Persona {
    char nombre[50];    // Array de caracteres
    int edad;           // Entero
    float altura;       // Número decimal
    bool activo;        // Valor booleano
};
```

🏗️ **Componentes de una estructura**:
- 🏷️ **Nombre**: Identificador único
- 📦 **Miembros**: Variables agrupadas
- 🎯 **Instancias**: Variables del tipo estructura

📊 VENTAJAS DE ESTRUCTURAS

✅ **Organización**:
- 📦 Agrupa datos relacionados
- 🏷️ Nombres descriptivos
- 🎯 Acceso intuitivo

✅ **Reutilización**:
- 🔄 Múltiples instancias
- 📝 Tipos personalizados
- 🔧 Código más limpio

✅ **Mantenimiento**:
- 📝 Cambios centralizados
- 🎯 Menos errores
- 🔧 Fácil de modificar

🎯 EJEMPLO AVANZADO: ESTRUCTURAS COMPLEJAS
*/

void ejemplo_estructuras_complejas() {
    cout << "\n🎯 EJEMPLO DE ESTRUCTURAS COMPLEJAS" << endl;
    cout << "==================================" << endl;
    
    // 📚 Estructura para libro
    struct Libro {
        char titulo[100];
        char autor[50];
        int anio_publicacion;
        float precio;
        bool disponible;
    };
    
    // 📖 Crear libros
    Libro libro1 = {
        "C++ Para Principiantes",
        "Autor Desconocido",
        2024,
        29.99,
        true
    };
    
    Libro libro2;
    strcpy(libro2.titulo, "Programación Avanzada");
    strcpy(libro2.autor, "Experto en C++");
    libro2.anio_publicacion = 2023;
    libro2.precio = 39.99;
    libro2.disponible = false;
    
    // 📋 Mostrar información
    cout << "📚 Libro 1:" << endl;
    cout << "   Título: " << libro1.titulo << endl;
    cout << "   Autor: " << libro1.autor << endl;
    cout << "   Año: " << libro1.anio_publicacion << endl;
    cout << "   Precio: $" << libro1.precio << endl;
    cout << "   Disponible: " << (libro1.disponible ? "Sí" : "No") << endl;
}

/*
🔧 OPERACIONES CON ESTRUCTURAS

1️⃣ **Declaración**:
```cpp
struct Estudiante {
    char nombre[30];
    int id;
    float promedio;
};
```

2️⃣ **Instanciación**:
```cpp
Estudiante est1;                    // Sin inicializar
Estudiante est2 = {"Ana", 123, 8.5}; // Inicializado
```

3️⃣ **Acceso a miembros**:
```cpp
est1.id = 456;
strcpy(est1.nombre, "Carlos");
est1.promedio = 9.2;
```

4️⃣ **Arrays de estructuras**:
```cpp
Estudiante clase[30];  // 30 estudiantes
clase[0].id = 1;
strcpy(clase[0].nombre, "Primer Estudiante");
```

⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:
```cpp
struct Persona {
    char nombre[20];
};

Persona p;
strcpy(p.nombre, "Nombre muy largo que excede el tamaño"); // ❌ Buffer overflow
```

✅ **Forma segura**:
```cpp
strncpy(p.nombre, "Nombre muy largo", sizeof(p.nombre) - 1);
p.nombre[sizeof(p.nombre) - 1] = '\0'; // Asegurar terminación
```

🎯 EJERCICIOS PARA PRACTICAR:

1. 📦 **Estructura básica**:
   - Crea una estructura para un producto
   - Incluye nombre, precio y cantidad
   - Crea varias instancias

2. 📚 **Biblioteca simple**:
   - Crea estructura para libros
   - Implementa un catálogo de 5 libros
   - Muestra información de todos

3. 🎯 **Arrays de estructuras**:
   - Crea un array de estudiantes
   - Inicializa con datos
   - Busca por ID específico

4. 🔧 **Manipulación avanzada**:
   - Crea estructura para fecha
   - Implementa funciones para comparar fechas
   - Calcula diferencia entre fechas

💡 CONSEJOS PARA ESTRUCTURAS EFICIENTES:

✅ **Buenas prácticas**:
- 📝 Usa nombres descriptivos para estructuras y miembros
- 🎯 Ordena miembros por tamaño (mayor a menor) para optimizar memoria
- 🔧 Inicializa estructuras al declararlas
- 📏 Considera alineación de memoria

❌ **Errores a evitar**:
- 🚫 No verificar tamaño de arrays de caracteres
- 🔥 Copiar estructuras con arrays sin cuidado
- 📉 Usar estructuras sin inicializar
- 🚫 No documentar propósito de estructuras complejas

🚀 SIGUIENTE PASO:

Las estructuras son la base para:
- 🎯 Clases en programación orientada a objetos
- 📚 Estructuras de datos avanzadas
- 🎮 Sistemas de gestión de datos
- 💪 Dominio completo de C++

¡Sigue explorando las posibilidades de las estructuras de datos!
*/