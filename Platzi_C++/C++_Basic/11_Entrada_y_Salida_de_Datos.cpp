/*
🎯 ARCHIVO: 11_Entrada_y_Salida_de_Datos.cpp
📚 TEMA: Entrada y Salida de Datos en C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Aprende a manejar flujos de entrada y salida de datos usando iostream

💡 CONCEPTOS QUE APRENDERÁS:
   - Flujos de entrada y salida (streams)
   - Uso de cout para salida de datos
   - Uso de cin para entrada de datos
   - Comentarios en C++
   - Interacción con el usuario

📡 FLUJOS DE ENTRADA Y SALIDA (STREAMS)

En C++, la manipulación de entrada y salida de datos se realiza mediante la **librería IOStream**. Los streams son flujos de datos que se mueven entre el programa y el sistema operativo, similar a cómo se transmite información en servicios de streaming.

📥 **Entrada de datos (cin)**: Recibir datos del usuario
📤 **Salida de datos (cout)**: Enviar datos a la pantalla

🎛️ USO DE COUT PARA SALIDA DE DATOS

`cout` permite enviar datos desde el programa hacia la pantalla de la terminal usando el operador `<<`:

```cpp
cout << "Hola mundo";  // Envía "Hola mundo" a la pantalla
```

Cada carácter se escanea y se envía secuencialmente a la pantalla.

⌨️ USO DE CIN PARA ENTRADA DE DATOS

`cin` permite recibir datos de entrada del usuario a través de la terminal usando el operador `>>`:

```cpp
int edad;
cin >> edad;  // Captura la edad ingresada por el usuario
```

La entrada proporcionada por el usuario se almacena en la variable especificada.

💻 PROGRAMA PRÁCTICO: ENTRADA Y SALIDA
*/

#include <iostream>
using namespace std;

int main() {
    cout << "🎯 ENTRADA Y SALIDA DE DATOS EN C++" << endl;
    cout << "==================================" << endl << endl;
    
    int edad = 0;  // Variable para almacenar la edad del usuario
    
    // 📤 Salida de datos con cout
    cout << "Introduce tu edad: ";  // Solicita la edad al usuario
    
    // 📥 Entrada de datos con cin
    cin >> edad;  // Captura la edad ingresada por el usuario
    
    // 📤 Mostrar la edad ingresada
    cout << "Tu edad es " << edad << " años" << endl;
    
    // 🎯 Ejemplo con múltiples datos
    cout << "\n🎯 Ejemplo con múltiples datos:" << endl;
    string nombre;
    cout << "¿Cuál es tu nombre? ";
    cin >> nombre;
    cout << "¡Hola " << nombre << "! Tienes " << edad << " años." << endl;
    
    return 0;
}

/*
📝 COMENTARIOS EN C++

Los comentarios son texto que el compilador ignora, usado para documentar el código:

1️⃣ **Comentario de una sola línea**:
```cpp
// Este es un comentario de una línea
```

2️⃣ **Comentario de múltiples líneas**:
```cpp
/*
Este es un comentario
de múltiples líneas
*/
```

🎯 ALMACENAMIENTO Y MANIPULACIÓN DE DATOS

Es crucial contar con una variable adecuada para almacenar los datos de entrada:

📦 **Declaración de variables**:
```cpp
int edad = 0;        // Para números enteros
float altura = 0.0;  // Para números decimales
char letra = 'A';    // Para caracteres
string nombre = "";  // Para cadenas de texto
```

🔧 **Consideraciones importantes**:
- El tipo de variable determina las operaciones permitidas
- Un número entero admite cálculos matemáticos
- Una cadena de texto tiene métodos específicos de texto

📊 EJEMPLO COMPLETO: SISTEMA DE REGISTRO
*/

void ejemplo_sistema_registro() {
    cout << "\n🎯 EJEMPLO: SISTEMA DE REGISTRO" << endl;
    cout << "=============================" << endl;
    
    string nombre, apellido;
    int edad;
    float altura;
    
    cout << "📋 Sistema de Registro" << endl;
    cout << "=====================" << endl;
    
    cout << "Nombre: ";
    cin >> nombre;
    
    cout << "Apellido: ";
    cin >> apellido;
    
    cout << "Edad: ";
    cin >> edad;
    
    cout << "Altura (metros): ";
    cin >> altura;
    
    cout << "\n📄 Datos Registrados:" << endl;
    cout << "Nombre completo: " << nombre << " " << apellido << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Altura: " << altura << " metros" << endl;
}

/*
⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:
```cpp
string nombre;
cin >> nombre;  // ❌ Solo captura hasta el primer espacio
```

✅ **Forma correcta para texto con espacios**:
```cpp
string nombre_completo;
getline(cin, nombre_completo);  // ✅ Captura toda la línea
```

🎯 DIFERENCIAS ENTRE MÉTODOS DE ENTRADA

1️⃣ **cin >> variable**:
- 🚫 Se detiene en espacios y saltos de línea
- ✅ Útil para datos simples (números, palabras)

2️⃣ **getline(cin, variable)**:
- ✅ Captura toda la línea incluyendo espacios
- 🎯 Ideal para nombres completos, direcciones, etc.

🔧 EJEMPLO CON GETLINE
*/

void ejemplo_getline() {
    cout << "\n🎯 EJEMPLO: USO DE GETLINE" << endl;
    cout << "========================" << endl;
    
    string nombre_completo;
    cout << "Ingresa tu nombre completo: ";
    cin.ignore();  // Limpiar buffer de entrada
    getline(cin, nombre_completo);
    cout << "Hola, " << nombre_completo << "!" << endl;
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 📤 **Salida básica**:
   - Muestra diferentes tipos de datos con cout
   - Usa secuencias de escape (\n, \t)

2. 📥 **Entrada simple**:
   - Captura números enteros y decimales
   - Realiza operaciones con los datos ingresados

3. 🎯 **Registro de usuario**:
   - Crea un formulario que capture múltiples datos
   - Muestra un resumen de la información

4. 📝 **Comentarios**:
   - Practica diferentes tipos de comentarios
   - Documenta tu código de forma clara

5. 🔧 **Manejo de texto**:
   - Usa getline para capturar texto con espacios
   - Combina cin y getline correctamente

💡 CONSEJOS PARA MANEJO EFICIENTE:

✅ **Buenas prácticas**:
- 🎯 Siempre indica claramente qué datos pedir
- 🔢 Valida los datos ingresados cuando sea posible
- 📝 Usa comentarios para explicar el propósito
- 🧪 Prueba con diferentes tipos de entrada

❌ **Errores a evitar**:
- 🚫 No verificar tipos de datos ingresados
- 🔥 No limpiar buffer de entrada cuando se necesita
- 📉 Usar cin para texto con espacios
- 🚫 No dar instrucciones claras al usuario

🚀 SIGUIENTE PASO:

El manejo de entrada y salida es fundamental para:
- 🎯 Interacción con usuarios
- 📊 Procesamiento de datos
- 🔄 Programas interactivos
- 💪 Aplicaciones completas

¡Sigue practicando con entrada y salida de datos!
*/