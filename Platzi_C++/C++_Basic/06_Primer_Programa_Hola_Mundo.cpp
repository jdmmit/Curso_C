/*
🎯 ARCHIVO: 06_Primer_Programa_Hola_Mundo.cpp
📚 TEMA: Tu Primer Programa en C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Aprende a crear, compilar y ejecutar tu primer programa en C++

💡 CONCEPTOS QUE APRENDERÁS:
   - Estructura básica de un programa C++
   - Función main() como punto de entrada
   - Uso de #include para bibliotecas
   - cout para mostrar texto en pantalla
   - Compilación y ejecución paso a paso
   - Organización de archivos de proyecto

🎉 TU PRIMER PROGRAMA EN C++

¡Crear tu primer programa en C++ es un logro significativo! Este momento marca el inicio 
de tu viaje en uno de los lenguajes de programación más poderosos del mundo.

📁 PASO 1: ORGANIZAR TU ENTORNO DE TRABAJO

Antes de escribir código, es importante organizar tu espacio de trabajo:

🗂️ **Crear estructura de carpetas**:
```
📁 MisProgramasCpp/
├── 📁 01_Basicos/
│   ├── 📄 hola_mundo.cpp
│   └── 📄 mi_primer_programa.cpp
├── 📁 02_Variables/
└── 📁 03_Proyectos/
```

💻 **Comandos para crear la estructura**:
```bash
# Crear carpeta principal
mkdir MisProgramasCpp
cd MisProgramasCpp

# Crear subcarpetas
mkdir 01_Basicos 02_Variables 03_Proyectos

# Entrar a la carpeta de básicos
cd 01_Basicos
```

📝 **Crear tu primer archivo**:
- 📄 Nombre recomendado: `hola_mundo.cpp`
- 🔤 Extensión `.cpp` es específica para C++
- 📋 Usa nombres descriptivos para tus archivos

📋 PASO 2: ESTRUCTURA BÁSICA DE UN PROGRAMA C++

Todo programa en C++ sigue una estructura fundamental:

```cpp
#include <iostream>  // 📚 Incluir bibliotecas necesarias
using namespace std; // 🏠 Declarar espacio de nombres

int main() {         // 🚀 Función principal (punto de entrada)
    // 💻 Tu código va aquí
    cout << "¡Hola Mundo!" << endl;
    return 0;        // ✅ Indicar que el programa terminó bien
}
```

🔍 **Análisis línea por línea**:

1️⃣ **`#include <iostream>`**:
   - 📚 Incluye la biblioteca de entrada/salida estándar
   - 🔧 Permite usar `cout`, `cin`, `endl`
   - ⚠️ Sin esta línea, no podrías mostrar texto en pantalla

2️⃣ **`using namespace std;`**:
   - 🏠 Te permite usar nombres estándar sin prefijo `std::`
   - 📝 Sin esta línea tendrías que escribir `std::cout`
   - 💡 Facilita la escritura de código

3️⃣ **`int main() { ... }`**:
   - 🚀 Función principal donde inicia TODA ejecución
   - 🔢 `int` significa que debe retornar un número entero
   - 📦 Todo el código ejecutable va dentro de las llaves `{}`

4️⃣ **`cout << "¡Hola Mundo!" << endl;`**:
   - 💬 `cout` = "character output" (salida de caracteres)
   - ➡️ `<<` = operador de inserción (envía datos a cout)
   - 📝 `"¡Hola Mundo!"` = texto entre comillas dobles
   - 📏 `endl` = termina la línea y limpia el buffer

5️⃣ **`return 0;`**:
   - ✅ Indica que el programa terminó correctamente
   - 🔢 `0` = éxito, cualquier otro número = error
   - ⚠️ Siempre incluye esta línea al final de main()

💻 PASO 3: ESCRIBIR TU PRIMER PROGRAMA

Aquí está tu primer programa completo:
*/

#include <iostream>  // 📚 Biblioteca para entrada/salida

using namespace std; // 🏠 Usar espacio de nombres estándar

int main()           // 🚀 Función principal - ¡aquí empieza todo!
{
    // 🎉 Tu primer mensaje al mundo
    cout << "¡Hola Mundo!" << endl;
    
    // 💬 Más mensajes para celebrar
    cout << "🎉 ¡Felicidades! Has creado tu primer programa en C++" << endl;
    cout << "🚀 Este es el comienzo de una aventura increíble" << endl;
    cout << "💻 Cada gran programador empezó con 'Hola Mundo'" << endl;
    
    return 0; // ✅ Programa terminado exitosamente
}

/*
🚀 PASO 4: COMPILAR Y EJECUTAR TU PROGRAMA

Ahora viene la parte emocionante: ¡hacer que tu código cobre vida!

💻 **Método 1: Usando VS Code con extensiones**:
1. 📂 Abre VS Code en tu carpeta de proyecto
2. 📄 Abre tu archivo `hola_mundo.cpp`
3. ⌨️ Presiona F6 (si instalaste C/C++ Compile Run)
4. 🎉 ¡Ve tu programa ejecutándose!

💻 **Método 2: Usando la terminal/línea de comandos**:

🪟 **En Windows**:
```cmd
g++ hola_mundo.cpp -o hola_mundo.exe
hola_mundo.exe
```

🐧 **En Linux**:
```bash
g++ hola_mundo.cpp -o hola_mundo
./hola_mundo
```

🍎 **En macOS**:
```bash
clang++ hola_mundo.cpp -o hola_mundo
./hola_mundo
```

✅ **Resultado esperado**:
```
¡Hola Mundo!
🎉 ¡Felicidades! Has creado tu primer programa en C++
🚀 Este es el comienzo de una aventura increíble
💻 Cada gran programador empezó con 'Hola Mundo'
```

🔧 PASO 5: ENTENDER EL PROCESO DE COMPILACIÓN

Cuando compilas tu programa, suceden cosas fascinantes:

📝 **Tu código fuente** (legible para humanos):
```cpp
cout << "¡Hola Mundo!" << endl;
```

⚙️ **Se convierte en código máquina** (entendible por la computadora):
```
01001000 01100101 01101100 01101100 01101111
```

🔄 **Proceso completo**:
1. 📝 Escribes código fuente (.cpp)
2. 🔧 Preprocesador procesa #include
3. ⚙️ Compilador traduce a código objeto
4. 🔗 Linker une con bibliotecas
5. 📦 Se crea archivo ejecutable

🎯 PASO 6: EXPERIMENTAR Y PERSONALIZAR

¡Ahora es tu turno de experimentar!

🎨 **Variaciones para probar**:

```cpp
#include <iostream>
using namespace std;

int main() {
    // 👤 Personaliza con tu información
    cout << "¡Hola! Soy [TU NOMBRE]" << endl;
    cout << "Tengo [TU EDAD] años" << endl;
    cout << "Vivo en [TU CIUDAD]" << endl;
    cout << "¡Y estoy aprendiendo C++!" << endl;
    
    return 0;
}
```

🎮 **Programa más interactivo**:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    
    cout << "¿Cómo te llamas? ";
    cin >> nombre;
    
    cout << "¡Hola " << nombre << "!" << endl;
    cout << "¡Bienvenido al mundo de C++!" << endl;
    
    return 0;
}
```

📊 **Programa con cálculos simples**:

```cpp
#include <iostream>
using namespace std;

int main() {
    int año_actual = 2024;
    int año_nacimiento = 2000;  // Cambia por tu año
    int edad = año_actual - año_nacimiento;
    
    cout << "Si naciste en " << año_nacimiento << endl;
    cout << "En " << año_actual << " tienes " << edad << " años" << endl;
    
    return 0;
}
```

🛠️ COMANDOS ÚTILES PARA COMPILACIÓN

```bash
# Compilación básica
g++ programa.cpp -o programa

# Con información de depuración
g++ -g programa.cpp -o programa

# Con todas las advertencias
g++ -Wall programa.cpp -o programa

# Con optimización
g++ -O2 programa.cpp -o programa

# Especificar estándar de C++
g++ -std=c++17 programa.cpp -o programa

# Compilación detallada (ver proceso)
g++ -v programa.cpp -o programa
```

🆘 SOLUCIÓN DE PROBLEMAS COMUNES

❌ **Error: "iostream: No such file or directory"**:
- 🔧 Verifica que el compilador esté instalado correctamente
- 📝 Asegúrate de escribir `#include <iostream>` (con < >)

❌ **Error: "'cout' was not declared"**:
- 🏠 Agrega `using namespace std;`
- 📝 O usa `std::cout` en lugar de solo `cout`

❌ **Error: "undefined reference to main"**:
- 🚀 Asegúrate de tener la función `main()`
- 📝 Verifica que esté escrita exactamente como `int main()`

❌ **El programa no muestra nada**:
- 📏 Agrega `endl` o `\n` al final de tus mensajes
- 🔄 Asegúrate de que el programa no termine inmediatamente

❌ **"Permission denied" al ejecutar**:
- 🔧 En Linux/Mac: `chmod +x programa`
- 📁 Verifica que estés en la carpeta correcta

🎓 CONCEPTOS IMPORTANTES PARA RECORDAR

💡 **Reglas fundamentales**:
1. 📝 Todo programa C++ DEBE tener una función `main()`
2. 🔤 C++ distingue mayúsculas y minúsculas
3. 📏 Cada instrucción termina con punto y coma `;`
4. 📦 El código ejecutable va dentro de llaves `{}`
5. 📚 Incluye las bibliotecas que necesites con `#include`

🎯 **Buenas prácticas desde el inicio**:
- 📝 Usa nombres descriptivos para archivos
- 💬 Agrega comentarios para explicar tu código
- 🗂️ Organiza tus archivos en carpetas
- 🧪 Prueba tu código frecuentemente
- 📚 Lee los mensajes de error cuidadosamente

🎉 ¡FELICIDADES!

¡Has creado exitosamente tu primer programa en C++! Este es un momento histórico en tu 
viaje como programador. Cada experto en C++ comenzó exactamente donde estás ahora.

🌟 **Lo que has logrado**:
- ✅ Entiendes la estructura básica de un programa C++
- ✅ Sabes cómo compilar y ejecutar código
- ✅ Puedes mostrar texto en pantalla
- ✅ Tienes las bases para programas más complejos

🚀 **¿Qué sigue después de "Hola Mundo"?**

La estructura básica que has aprendido se utilizará en TODOS tus futuros proyectos:
- 🎮 Videojuegos
- 📱 Aplicaciones móviles
- 🤖 Inteligencia artificial
- 🌐 Servidores web
- 🚗 Software automotriz

¡Sigue practicando y nunca dejes de aprender! El mundo de C++ está lleno de 
posibilidades increíbles esperándote.

🎯 EJERCICIOS PARA PRACTICAR:

1. 👤 **Programa personal**:
   - Crea un programa que muestre tu información personal
   - Incluye nombre, edad, ciudad, pasatiempos

2. 🎨 **Programa artístico**:
   - Usa caracteres ASCII para crear dibujos simples
   - Experimenta con espacios y símbolos

3. 🧮 **Calculadora básica**:
   - Crea un programa que sume dos números
   - Muestra el resultado en pantalla

4. 📅 **Programa de fecha**:
   - Muestra el año actual
   - Calcula cuántos años han pasado desde un evento importante

5. 🎭 **Programa creativo**:
   - Crea una historia corta usando cout
   - Usa emojis y caracteres especiales

💡 **Recuerda**: Cada línea de código que escribas te acerca más a convertirte en 
un programador experto. ¡La práctica hace al maestro!

🚀 SIGUIENTE PASO:
Ve a 07_Variables_Basicas.cpp para aprender a almacenar y manipular datos.
*/