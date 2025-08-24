/*
🎯 ARCHIVO: 17_Biblioteca_Estandar.cpp
📚 TEMA: Biblioteca Estándar de C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Aprende a usar la biblioteca estándar de C++ para tareas comunes

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué es la biblioteca estándar de C++
   - Librerías más importantes (iostream, string)
   - Manejo de cadenas de texto con std::string
   - Conversión entre cadenas y números
   - Funcionalidades adicionales de la biblioteca

📚 BIBLIOTECA ESTÁNDAR DE C++

C++ es un lenguaje poderoso, pero para aprovechar al máximo sus capacidades, es vital entender su **biblioteca estándar**. Este conjunto de librerías extiende el lenguaje permitiéndonos realizar una amplia gama de tareas.

🎯 **Características importantes**:
- 🚀 Extiende las capacidades del lenguaje base
- 📦 Proporciona funcionalidades esenciales
- ⚙️ Debe importarse como librerías específicas
- 🎯 Fundamental para programación moderna

📋 LIBRERÍAS MÁS IMPORTANTES

1️⃣ **IOStream**: Esencial para entrada y salida de datos
```cpp
#include <iostream>
using namespace std;
```

2️⃣ **String**: Manejo avanzado de cadenas de texto
```cpp
#include <string>
using namespace std;
```

3️⃣ **Vector**: Arrays dinámicos
```cpp
#include <vector>
```

4️⃣ **Math**: Funciones matemáticas avanzadas
```cpp
#include <cmath>
```

🔤 MANEJO DE CADENAS DE TEXTO

Antes de que puedas trabajar eficientemente con cadenas de texto en C++, necesitas integrar la librería `string`:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto = "Hola mundo";
    cout << texto << endl;
    return 0;
}
```

💻 PROGRAMA PRÁCTICO: BIBLIOTECA ESTÁNDAR
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "🎯 BIBLIOTECA ESTÁNDAR DE C++" << endl;
    cout << "===========================" << endl << endl;
    
    // 📝 Manejo básico de cadenas
    string texto = "Hola mundo";
    cout << "🔤 Cadena original: " << texto << endl;
    cout << "📏 Longitud: " << texto.size() << " caracteres" << endl;
    cout << "🔤 Primer carácter: " << texto[0] << endl;
    cout << "🔤 Último carácter: " << texto[texto.size() - 1] << endl << endl;
    
    // 🔧 Métodos útiles de string
    cout << "🔧 MÉTODOS DE STRING:" << endl;
    cout << "   Mayúsculas: " << texto << " -> " << "hola mundo" << endl;
    cout << "   Minúsculas: " << texto << " -> " << "HOLA MUNDO" << endl;
    
    // 🔄 Búsqueda en cadenas
    cout << "\n🔄 BÚSQUEDA EN CADENAS:" << endl;
    string frase = "Hola mundo maravilloso";
    size_t posicion = frase.find("mundo");
    if (posicion != string::npos) {
        cout << "   'mundo' encontrado en posición: " << posicion << endl;
    } else {
        cout << "   'mundo' no encontrado" << endl;
    }
    
    // 🔢 Conversión de cadenas a números
    cout << "\n🔢 CONVERSIÓN DE CADENAS:" << endl;
    string str_numero = "123";
    string str_decimal = "45.67";
    
    try {
        int numero = stoi(str_numero);  // String to integer
        cout << "   stoi(\"" << str_numero << "\") = " << numero << endl;
        
        float decimal = stof(str_decimal);  // String to float
        cout << "   stof(\"" << str_decimal << "\") = " << decimal << endl;
    } catch (const exception& e) {
        cout << "   ❌ Error en conversión: " << e.what() << endl;
    }
    
    return 0;
}

/*
📊 VENTAJAS DE USAR std::string

✅ **Sintaxis amigable**:
- Evita la complejidad de manejar listas de caracteres (char[])
- Código más limpio y fácil de entender

✅ **Funcionalidades adicionales**:
- `.size()` para conocer la longitud
- Métodos de búsqueda y manipulación
- Manejo automático de memoria

✅ **Seguridad**:
- Prevención de desbordamientos de buffer
- Manejo seguro de límites

🔧 MÉTODOS ÚTILES DE STRING

| Método | Descripción | Ejemplo |
|--------|-------------|---------|
| `size()` | Longitud de la cadena | `str.size()` |
| `length()` | Igual a size() | `str.length()` |
| `substr(pos, len)` | Subcadena | `str.substr(2, 3)` |
| `find(str)` | Buscar subcadena | `str.find("mundo")` |
| `replace(pos, len, str)` | Reemplazar | `str.replace(0, 4, "Hola")` |
| `append(str)` | Agregar al final | `str.append("!!!")` |

🔌 EJEMPLO COMPLETO: PROCESADOR DE TEXTO
*/

void ejemplo_procesador_texto() {
    cout << "\n🔌 EJEMPLO: PROCESADOR DE TEXTO" << endl;
    cout << "=============================" << endl;
    
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);  // Captura línea completa con espacios
    
    cout << "\n📄 Análisis del texto:" << endl;
    cout << "   Texto: \"" << texto << "\"" << endl;
    cout << "   Longitud: " << texto.size() << " caracteres" << endl;
    
    // 🔍 Contar palabras
    int palabras = 0;
    bool en_palabra = false;
    for (char c : texto) {
        if (c != ' ' && !en_palabra) {
            palabras++;
            en_palabra = true;
        } else if (c == ' ') {
            en_palabra = false;
        }
    }
    cout << "   Palabras: " << palabras << endl;
    
    // 🔄 Convertir a mayúsculas
    string mayusculas = texto;
    for (char& c : mayusculas) {
        c = toupper(c);
    }
    cout << "   Mayúsculas: " << mayusculas << endl;
}

/*
⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:

1️⃣ **No incluir la librería string**:
```cpp
// ❌ Sin #include <string>
string texto = "Hola";  // Error de compilación
```

2️⃣ **Confundir string con char[]**:
```cpp
// ✅ Correcto
string texto = "Hola mundo";

// ✅ También correcto
char texto_array[] = "Hola mundo";
```

3️⃣ **Conversión de cadenas inválidas**:
```cpp
string invalida = "abc";
int numero = stoi(invalida);  // ❌ Lanza excepción
```

✅ **Formas correctas**:
```cpp
// ✅ Incluir librería
#include <string>
using namespace std;

// ✅ Usar string correctamente
string texto = "Hola mundo";
cout << texto << endl;

// ✅ Conversión segura
string numero_str = "123";
try {
    int numero = stoi(numero_str);
    cout << "Número: " << numero << endl;
} catch (const exception& e) {
    cout << "Error: " << e.what() << endl;
}
```

🔧 EJEMPLO AVANZADO: VALIDACIÓN DE ENTRADA
*/

void ejemplo_validacion() {
    cout << "\n🔧 EJEMPLO: VALIDACIÓN DE ENTRADA" << endl;
    cout << "===============================" << endl;
    
    string entrada;
    
    do {
        cout << "Ingrese un número entero positivo: ";
        cin >> entrada;
        
        // 🔍 Validar que sea un número
        bool es_valido = true;
        for (char c : entrada) {
            if (!isdigit(c)) {
                es_valido = false;
                break;
            }
        }
        
        if (es_valido && !entrada.empty()) {
            int numero = stoi(entrada);
            if (numero > 0) {
                cout << "✅ Número válido: " << numero << endl;
                break;
            } else {
                cout << "❌ El número debe ser positivo" << endl;
            }
        } else {
            cout << "❌ Entrada no válida. Debe ser un número" << endl;
        }
    } while (true);
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 📝 **Manipulación básica**:
   - Crea cadenas y usa métodos size(), length()
   - Practica con substr() y find()
   - Combina múltiples operaciones

2. 🔢 **Conversión de datos**:
   - Convierte cadenas a números diferentes
   - Maneja excepciones en conversiones
   - Valida entradas numéricas

3. 🔍 **Búsqueda y reemplazo**:
   - Busca palabras en textos largos
   - Reemplaza términos específicos
   - Cuenta ocurrencias de caracteres

4. 🔄 **Procesamiento de texto**:
   - Convierte entre mayúsculas y minúsculas
   - Cuenta palabras y caracteres
   - Analiza estructura de textos

5. 🧮 **Calculadora de texto**:
   - Crea funciones para procesar cadenas
   - Implementa operaciones matemáticas con texto
   - Valida formatos de entrada

💡 CONSEJOS PARA USO EFICIENTE:

✅ **Buenas prácticas**:
- 🎯 Siempre incluir #include <string>
- 🔢 Usar getline() para texto con espacios
- 📝 Validar conversiones con try-catch
- 🧪 Probar con entradas límite

❌ **Errores a evitar**:
- 🚫 No incluir librerías necesarias
- 🔥 Acceder fuera de los límites de cadenas
- 📉 No manejar excepciones en conversiones
- 🚫 Confundir string con char[] innecesariamente

🚀 SIGUIENTE PASO:

La biblioteca estándar es fundamental para:
- 📝 Procesamiento avanzado de texto
- 📊 Manejo de datos estructurados
- 🔧 Utilidades de programación
- 💪 Desarrollo de aplicaciones completas

¡Sigue explorando la biblioteca estándar!
*/