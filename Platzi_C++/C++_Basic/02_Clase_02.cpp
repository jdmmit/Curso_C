/*
🎯 ARCHIVO: 02_Clase_02.cpp
📚 TEMA: Proceso de Compilación en C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Comprende cómo tu código se convierte en un programa ejecutable

💡 CONCEPTOS QUE APRENDERÁS:
   - El proceso completo de compilación paso a paso
   - Qué hace cada herramienta (preprocesador, compilador, linker, loader)
   - Herramientas necesarias para programar en C++
   - Diferencia entre código fuente y código ejecutable

🔄 EL PROCESO DE COMPILACIÓN: DE CÓDIGO A PROGRAMA

El lenguaje C++ es compilado, lo que significa que tu código debe pasar por varios pasos
antes de convertirse en un programa que puedas ejecutar. ¡Vamos a ver este fascinante proceso!

📝 PASO 1: ESCRIBIR EL CÓDIGO FUENTE
┌─────────────────────────────────────┐
│  👨‍💻 Programador escribe código      │
│  📄 Archivos .cpp y .h              │
│  🖥️ Usando editor (VS Code, etc.)    │
└─────────────────────────────────────┘

El primer paso es escribir tu código en un editor de texto o IDE. En C++:
- 📄 .cpp → Archivos de implementación (tu código principal)
- 📄 .h   → Archivos de cabecera (declaraciones, definiciones)

Ejemplo de código fuente:
```cpp
#include <iostream>  // 📚 Incluir biblioteca
using namespace std;

int main() {
    cout << "¡Hola Mundo!" << endl;  // 💬 Tu código
    return 0;
}
```

🔧 PASO 2: PREPROCESADOR
┌─────────────────────────────────────┐
│  🔧 Procesa directivas #include     │
│  🔄 Expande macros                  │
│  📋 Crea archivo único preparado    │
└─────────────────────────────────────┘

El preprocesador toma tu código y:
- ✅ Incluye archivos de cabecera (#include <iostream>)
- ✅ Procesa macros y definiciones (#define)
- ✅ Maneja compilación condicional (#ifdef, #ifndef)
- ✅ Crea un archivo de texto expandido

Antes del preprocesador:
```cpp
#include <iostream>
```

Después del preprocesador:
```cpp
// Todo el contenido de iostream se incluye aquí
// (miles de líneas de código de la biblioteca)
```

⚙️ PASO 3: COMPILADOR
┌─────────────────────────────────────┐
│  ⚙️ Convierte código a lenguaje     │
│     máquina                         │
│  🔍 Verifica sintaxis y errores     │
│  📦 Genera código objeto (.o/.obj)  │
└─────────────────────────────────────┘

El compilador es donde ocurre la "magia":
- 🔍 Analiza tu código línea por línea
- ✅ Verifica que la sintaxis sea correcta
- 🔄 Traduce a código máquina (binario)
- 📦 Genera archivos objeto (.o en Linux, .obj en Windows)

Tu código legible:
```cpp
cout << "Hola" << endl;
```

Se convierte en algo como:
```
01001000 01100101 01101100 01101100 01101111
(código binario que la máquina entiende)
```

🔗 PASO 4: LINKER (ENLAZADOR)
┌─────────────────────────────────────┐
│  🔗 Une código objeto con librerías │
│  📚 Resuelve referencias externas   │
│  🎯 Crea archivo ejecutable final   │
└─────────────────────────────────────┘

El linker junta todas las piezas:
- 🧩 Combina tu código objeto con librerías del sistema
- 🔗 Resuelve llamadas a funciones externas (como cout)
- 📦 Crea el archivo ejecutable final (.exe en Windows)

Ejemplo:
```
tu_codigo.obj + iostream.lib + sistema.lib = programa.exe
```

🚀 PASO 5: LOADER (CARGADOR)
┌─────────────────────────────────────┐
│  🚀 Carga el programa en memoria    │
│  📚 Conecta librerías dinámicas     │
│  ▶️ Inicia la ejecución             │
└─────────────────────────────────────┘

Cuando ejecutas tu programa:
- 💾 El loader carga el programa en la memoria RAM
- 🔗 Conecta librerías dinámicas (.dll en Windows, .so en Linux)
- ▶️ Transfiere control a tu función main()

🛠️ HERRAMIENTAS NECESARIAS

Para programar en C++ necesitas:

1. 📝 EDITOR DE CÓDIGO:
   - Visual Studio Code (recomendado) 🌟
   - Code::Blocks
   - Dev-C++
   - Visual Studio Community

2. 🔧 COMPILADOR:
   - GCC (GNU Compiler Collection) - Gratuito y potente
   - Clang - Moderno y rápido
   - MSVC (Microsoft Visual C++) - Para Windows

3. 🏗️ SISTEMA DE CONSTRUCCIÓN (opcional):
   - Make
   - CMake
   - Ninja

📋 COMANDOS BÁSICOS DE COMPILACIÓN

En la terminal/consola:

```bash
# 🔧 Compilar un archivo simple
g++ mi_programa.cpp -o mi_programa

# 🚀 Ejecutar el programa
./mi_programa          # Linux/Mac
mi_programa.exe        # Windows

# 🔍 Compilar con información de depuración
g++ -g mi_programa.cpp -o mi_programa

# ⚡ Compilar con optimización
g++ -O2 mi_programa.cpp -o mi_programa
```

🎯 EJEMPLO PRÁCTICO COMPLETO

Vamos a ver todo el proceso con un ejemplo:

1. 📝 Escribes este código (archivo: saludo.cpp):
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre = "Mundo";
    cout << "¡Hola " << nombre << "!" << endl;
    return 0;
}
```

2. 🔧 Compilas con:
```bash
g++ saludo.cpp -o saludo
```

3. 🚀 Ejecutas con:
```bash
./saludo
```

4. 📤 Obtienes:
```
¡Hola Mundo!
```

💡 CONSEJOS IMPORTANTES:

✅ BUENAS PRÁCTICAS:
- Usa nombres descriptivos para tus archivos
- Organiza tu código en carpetas
- Compila frecuentemente para detectar errores temprano
- Usa flags de compilación para obtener más información

⚠️ ERRORES COMUNES:
- Olvidar incluir bibliotecas necesarias
- Errores de sintaxis que impiden la compilación
- Problemas de enlazado por librerías faltantes
- Rutas incorrectas a archivos

🔍 TIPOS DE ERRORES:

1. 🔧 Errores de preprocesador:
   - Archivos no encontrados (#include)
   - Macros mal definidas

2. ⚙️ Errores de compilación:
   - Sintaxis incorrecta
   - Variables no declaradas
   - Tipos incompatibles

3. 🔗 Errores de enlazado:
   - Funciones no encontradas
   - Librerías faltantes
   - Símbolos duplicados

4. 🚀 Errores de ejecución:
   - División por cero
   - Acceso a memoria inválida
   - Librerías dinámicas faltantes

🎓 RESUMEN:

El proceso de compilación transforma tu código legible en un programa ejecutable:
Código Fuente → Preprocesador → Compilador → Linker → Programa Ejecutable

¡Con estas herramientas y conocimiento, estás listo para crear programas increíbles en C++! 🚀
*/

// 🎯 EJEMPLO PRÁCTICO: Programa simple para probar la compilación

#include <iostream>  // 📚 Biblioteca de entrada/salida
#include <string>    // 📝 Biblioteca para strings

using namespace std;  // 🏠 Espacio de nombres estándar

int main()  // 🚀 Función principal
{
    // 👋 Mensaje de bienvenida
    cout << "🎉 ¡Felicidades! Tu programa se compiló correctamente." << endl;
    cout << "🔧 Esto significa que:" << endl;
    cout << "   ✅ El preprocesador procesó las directivas" << endl;
    cout << "   ✅ El compilador tradujo tu código" << endl;
    cout << "   ✅ El linker unió todas las librerías" << endl;
    cout << "   ✅ El loader ejecutó tu programa" << endl;
    cout << endl;
    
    // 🎯 Información del sistema
    cout << "🖥️ Tu programa está funcionando en:" << endl;
    cout << "   📱 Sistema operativo: ";
    
    #ifdef _WIN32
        cout << "Windows" << endl;
    #elif __APPLE__
        cout << "macOS" << endl;
    #elif __linux__
        cout << "Linux" << endl;
    #else
        cout << "Sistema desconocido" << endl;
    #endif
    
    cout << "   🔧 Compilador: ";
    #ifdef __GNUC__
        cout << "GCC " << __GNUC__ << "." << __GNUC_MINOR__ << endl;
    #elif _MSC_VER
        cout << "Microsoft Visual C++" << endl;
    #else
        cout << "Compilador desconocido" << endl;
    #endif
    
    cout << endl << "🚀 ¡Ahora estás listo para programar en C++!" << endl;
    
    return 0;  // ✅ Programa terminado exitosamente
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🔧 Compilación básica:
   - Crea un programa que muestre tu nombre
   - Compílalo usando g++
   - Ejecuta el programa resultante

2. 🔍 Experimentar con errores:
   - Introduce un error de sintaxis intencionalmente
   - Observa el mensaje de error del compilador
   - Corrige el error y vuelve a compilar

3. 📚 Usar múltiples archivos:
   - Crea un archivo .h con una función
   - Crea un archivo .cpp que use esa función
   - Compila ambos archivos juntos

4. 🎯 Flags de compilación:
   - Compila con -Wall para ver todas las advertencias
   - Compila con -O2 para optimización
   - Compila con -g para información de depuración

💡 COMANDOS ÚTILES:

```bash
# Ver información del compilador
g++ --version

# Compilar con advertencias
g++ -Wall -Wextra mi_programa.cpp -o mi_programa

# Compilar múltiples archivos
g++ archivo1.cpp archivo2.cpp -o programa

# Ver solo el preprocesador
g++ -E mi_programa.cpp

# Ver solo la compilación (sin enlazar)
g++ -c mi_programa.cpp
```

🚀 SIGUIENTE PASO:
Ve a 03_Clase_03.cpp para aprender sobre variables y tipos de datos en detalle.
*/