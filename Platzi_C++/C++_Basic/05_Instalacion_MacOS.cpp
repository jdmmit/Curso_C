/*
🎯 ARCHIVO: 05_Instalacion_MacOS.cpp
📚 TEMA: Instalación de C++ en macOS
🎓 NIVEL: Principiante - Configuración
📝 DESCRIPCIÓN: Guía completa para instalar y configurar C++ en macOS

💡 LO QUE APRENDERÁS:
   - Cómo instalar Xcode Command Line Tools
   - Verificación del compilador en macOS
   - Configuración de VS Code para macOS
   - Diferencias entre Clang y GCC en Mac
   - Herramientas específicas de desarrollo para Mac

🍎 INSTALACIÓN DE C++ EN macOS

✅ **VENTAJA DE macOS**: Como sistema Unix, macOS puede incluir herramientas de desarrollo, 
pero necesitas instalar las Xcode Command Line Tools para tener acceso completo.

🔍 PASO 1: VERIFICAR INSTALACIÓN EXISTENTE

Primero, vamos a verificar si ya tienes las herramientas instaladas:

💻 **Abrir Terminal**:
- ⌨️ Presiona `Cmd + Espacio` y busca "Terminal"
- 🖥️ O ve a Aplicaciones > Utilidades > Terminal

🧪 **Verificar si tienes el compilador**:
```bash
g++ --version
```

✅ **Si ves algo como esto, ya tienes el compilador**:
```
Apple clang version 12.0.0 (clang-1200.0.32.29)
Target: x86_64-apple-darwin20.1.0
Thread model: posix
```

❌ **Si ves "command not found", necesitas instalar las herramientas**.

🛠️ PASO 2: INSTALAR XCODE COMMAND LINE TOOLS

Las Xcode Command Line Tools incluyen el compilador y herramientas esenciales:

⚡ **Método rápido (Recomendado)**:
```bash
xcode-select --install
```

🖥️ **Lo que sucederá**:
1. 📋 Aparecerá un cuadro de diálogo
2. 🖱️ Haz clic en "Instalar"
3. ⏳ Espera a que se complete la descarga (puede tomar tiempo)
4. ✅ Se instalará automáticamente

📝 **Notas importantes**:
- ⏰ La instalación puede tomar 30-60 minutos dependiendo de tu conexión
- 💾 Requiere varios GB de espacio libre
- 🔄 Si no aparece el cuadro de diálogo, es normal en algunas versiones de macOS

🧪 **Verificar instalación completada**:
```bash
xcode-select --install
```

✅ **Si está instalado, verás**:
```
xcode-select: error: command line tools are already installed
```

🔧 **Verificar que funciona**:
```bash
g++ --version
clang++ --version
```

🍎 PASO 3: ENTENDER CLANG VS GCC EN macOS

En macOS, `g++` es en realidad un alias de `clang++`:

🔍 **Diferencias importantes**:
- 🍎 **Clang**: Compilador nativo de Apple (recomendado)
- 🐧 **GCC**: Compilador GNU (disponible via Homebrew)

💻 **Verificar qué compilador usas**:
```bash
which g++
ls -la /usr/bin/g++
```

🎯 **Para la mayoría de casos, Clang es perfecto y más optimizado para Mac**.

📦 PASO 4: INSTALAR HOMEBREW (Opcional pero Recomendado)

Homebrew es el gestor de paquetes más popular para macOS:

🌐 **Instalar Homebrew**:
```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

📚 **Instalar herramientas adicionales con Homebrew**:
```bash
# GCC real (si lo prefieres sobre Clang)
brew install gcc

# Herramientas útiles para desarrollo
brew install cmake
brew install gdb  # Nota: requiere configuración adicional en macOS
brew install lldb  # Depurador nativo de Apple (recomendado)
```

📝 PASO 5: INSTALAR VISUAL STUDIO CODE

VS Code funciona excelentemente en macOS:

🌐 **Descargar VS Code**:
1. 🔗 Ve a: https://code.visualstudio.com/
2. 📥 Descarga la versión para macOS
3. 📂 Arrastra VS Code a la carpeta Aplicaciones

⌨️ **Instalar desde terminal con Homebrew**:
```bash
brew install --cask visual-studio-code
```

🔌 PASO 6: EXTENSIONES PARA VS CODE

Instala estas extensiones esenciales:

1️⃣ **C/C++ Extension**:
   - 🔍 Busca "C/C++" en el marketplace
   - 👤 Publicado por Microsoft
   - ✅ Soporte completo para Clang

2️⃣ **C/C++ Compile Run**:
   - 🔍 Busca "C/C++ Compile Run"
   - ⌨️ Compila y ejecuta con F6
   - 🍎 Configurado para macOS

3️⃣ **Code Runner**:
   - 🔍 Busca "Code Runner"
   - ⌨️ Ejecuta con Cmd+Alt+N

4️⃣ **CodeLLDB** (Recomendado para macOS):
   - 🐛 Mejor depurador para macOS
   - 🍎 Optimizado para Clang

🧪 PASO 7: PROBAR LA INSTALACIÓN

Vamos a crear y ejecutar un programa de prueba:

📂 **Crear directorio de trabajo**:
```bash
mkdir ~/MisProgramasCpp
cd ~/MisProgramasCpp
```

📝 **Crear archivo de prueba**:
```bash
nano prueba.cpp
# O usa TextEdit, VS Code, etc.
```

💻 **Código de prueba**:
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "🍎 ¡C++ funciona perfectamente en macOS!" << endl;
    cout << "🔧 Xcode Command Line Tools instaladas" << endl;
    cout << "📝 Entorno configurado" << endl;
    cout << "🚀 ¡Listo para programar!" << endl;
    return 0;
}
```

🚀 **Compilar y ejecutar**:
```bash
# Compilar con Clang (recomendado)
clang++ prueba.cpp -o prueba

# O usar el alias g++
g++ prueba.cpp -o prueba

# Ejecutar
./prueba
```

✅ **Resultado esperado**:
```
🍎 ¡C++ funciona perfectamente en macOS!
🔧 Xcode Command Line Tools instaladas
📝 Entorno configurado
🚀 ¡Listo para programar!
```

🛠️ COMANDOS ÚTILES PARA macOS

```bash
# Información del compilador
clang++ --version
g++ --version

# Compilar con diferentes estándares
clang++ -std=c++17 programa.cpp -o programa
clang++ -std=c++20 programa.cpp -o programa

# Compilar con optimización
clang++ -O2 programa.cpp -o programa

# Compilar con información de depuración
clang++ -g programa.cpp -o programa

# Compilar con todas las advertencias
clang++ -Wall -Wextra programa.cpp -o programa

# Ver información detallada de compilación
clang++ -v programa.cpp -o programa

# Compilar para diferentes arquitecturas
clang++ -arch x86_64 programa.cpp -o programa_intel
clang++ -arch arm64 programa.cpp -o programa_m1

# Compilar universal (Intel + Apple Silicon)
clang++ -arch x86_64 -arch arm64 programa.cpp -o programa_universal
```

🔧 HERRAMIENTAS ESPECÍFICAS DE macOS

🐛 **LLDB (Depurador nativo)**:
```bash
# Compilar con información de depuración
clang++ -g programa.cpp -o programa

# Usar LLDB
lldb ./programa

# Comandos básicos en LLDB
(lldb) run
(lldb) breakpoint set --name main
(lldb) continue
(lldb) quit
```

📊 **Instruments (Profiling)**:
```bash
# Instalar Xcode completo para Instruments
# Disponible en Mac App Store

# Usar desde línea de comandos
instruments -t "Time Profiler" ./programa
```

🏗️ **Xcodebuild (Construcción avanzada)**:
```bash
# Para proyectos más complejos
xcodebuild -project MiProyecto.xcodeproj
```

⚙️ CONFIGURACIÓN AVANZADA

📝 **Configurar VS Code para macOS** (.vscode/tasks.json):
```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Compilar C++ (macOS)",
            "type": "shell",
            "command": "clang++",
            "args": [
                "-std=c++17",
                "-Wall",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}/${fileBasenameNoExtension}"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "presentation": {
                "echo": true,
                "reveal": "always",
                "focus": false,
                "panel": "shared"
            }
        }
    ]
}
```

🐛 **Configuración de depuración** (.vscode/launch.json):
```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Depurar C++ (macOS)",
            "type": "lldb",
            "request": "launch",
            "program": "${fileDirname}/${fileBasenameNoExtension}",
            "args": [],
            "stopOnEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false
        }
    ]
}
```

🆘 SOLUCIÓN DE PROBLEMAS COMUNES

❌ **"xcrun: error: invalid active developer path"**:
```bash
# Reinstalar Command Line Tools
sudo xcode-select --reset
xcode-select --install
```

❌ **"Permission denied" al ejecutar**:
```bash
# Dar permisos de ejecución
chmod +x programa
./programa
```

❌ **Problemas con GDB en macOS**:
```bash
# GDB requiere certificado en macOS, usa LLDB en su lugar
lldb ./programa
```

❌ **Error de arquitectura en Apple Silicon (M1/M2)**:
```bash
# Compilar específicamente para ARM64
clang++ -arch arm64 programa.cpp -o programa

# O instalar Rosetta 2 para compatibilidad x86_64
softwareupdate --install-rosetta
```

❌ **VS Code no encuentra el compilador**:
```bash
# Verificar PATH
echo $PATH
which clang++

# Reiniciar VS Code después de instalar Command Line Tools
```

🍎 CARACTERÍSTICAS ESPECÍFICAS DE macOS

✅ **Ventajas de desarrollar C++ en macOS**:
- 🚀 Clang optimizado para hardware Apple
- 🔧 Herramientas de desarrollo integradas
- 🎨 Excelente soporte para desarrollo de GUI (Cocoa)
- 📱 Desarrollo para iOS/macOS con C++
- 🔒 Sandboxing y seguridad avanzada

✅ **Frameworks nativos disponibles**:
- 🖥️ Cocoa (GUI nativa)
- 🎵 Core Audio
- 🎮 Metal (gráficos de alto rendimiento)
- 📱 Core Foundation

🎯 DESARROLLO MULTIPLATAFORMA

```bash
# Compilar para múltiples plataformas
clang++ -DMACOS programa.cpp -o programa_mac
clang++ -DLINUX programa.cpp -o programa_linux  # Con cross-compilation
```

🎉 ¡FELICIDADES!

¡Has configurado exitosamente C++ en macOS! Tu Mac ahora tiene:
- ✅ Xcode Command Line Tools instaladas
- ✅ Compilador Clang funcionando
- ✅ VS Code con extensiones optimizadas
- ✅ Herramientas de depuración nativas
- ✅ Entorno listo para desarrollo profesional

🚀 **¡macOS es una plataforma excelente para desarrollo en C++!**
*/

// 🎯 PROGRAMA DE VERIFICACIÓN PARA macOS

#include <iostream>     // 📚 Biblioteca estándar
#include <string>       // 📝 Para strings

#ifdef __APPLE__
#include <sys/utsname.h> // 🍎 Información del sistema macOS
#include <TargetConditionals.h> // 🎯 Información de la plataforma
#endif

using namespace std;

int main()
{
    // 🎉 Mensaje de bienvenida
    cout << "🍎 ¡C++ CONFIGURADO EXITOSAMENTE EN macOS!" << endl;
    cout << "===========================================" << endl;
    cout << endl;
    
    #ifdef __APPLE__
    // 🖥️ Información específica de macOS
    struct utsname sys_info;
    if (uname(&sys_info) == 0) {
        cout << "🖥️ INFORMACIÓN DEL SISTEMA:" << endl;
        cout << "   🍎 Sistema: " << sys_info.sysname << endl;
        cout << "   🏷️ Nombre: " << sys_info.nodename << endl;
        cout << "   📋 Versión: " << sys_info.release << endl;
        cout << "   🏗️ Arquitectura: " << sys_info.machine << endl;
        
        // Detectar tipo de Mac
        string arch = sys_info.machine;
        if (arch.find("arm64") != string::npos) {
            cout << "   🚀 Procesador: Apple Silicon (M1/M2/M3)" << endl;
        } else if (arch.find("x86_64") != string::npos) {
            cout << "   💻 Procesador: Intel" << endl;
        }
    }
    #endif
    cout << endl;
    
    // 🔧 Información del compilador
    cout << "🔧 INFORMACIÓN DEL COMPILADOR:" << endl;
    
    #ifdef __clang__
        cout << "   ⚙️ Compilador: Clang " << __clang_major__ << "." << __clang_minor__ << "." << __clang_patchlevel__ << endl;
        cout << "   🍎 Optimizado para macOS: SÍ" << endl;
    #elif defined(__GNUC__)
        cout << "   ⚙️ Compilador: GCC " << __GNUC__ << "." << __GNUC_MINOR__ << endl;
        cout << "   📦 Instalado via: Homebrew" << endl;
    #endif
    
    #ifdef __cplusplus
        long cpp_version = __cplusplus;
        cout << "   📋 Estándar C++: ";
        if (cpp_version >= 202002L) cout << "C++20 o superior";
        else if (cpp_version >= 201703L) cout << "C++17";
        else if (cpp_version >= 201402L) cout << "C++14";
        else if (cpp_version >= 201103L) cout << "C++11";
        else cout << "C++98/03";
        cout << " (" << cpp_version << ")" << endl;
    #endif
    
    cout << "   📅 Compilado: " << __DATE__ << " " << __TIME__ << endl;
    cout << endl;
    
    // ✅ Estado de la instalación
    cout << "✅ VERIFICACIONES DEL SISTEMA:" << endl;
    cout << "   🔧 Xcode Command Line Tools: INSTALADAS" << endl;
    cout << "   📝 Bibliotecas estándar: DISPONIBLES" << endl;
    cout << "   🍎 APIs de macOS: ACCESIBLES" << endl;
    cout << "   ⚡ Optimización nativa: HABILITADA" << endl;
    cout << endl;
    
    // 🎯 Características específicas de macOS
    cout << "🍎 CARACTERÍSTICAS DE macOS PARA C++:" << endl;
    cout << "   • 🚀 Compilador Clang optimizado" << endl;
    cout << "   • 🔧 Xcode Command Line Tools integradas" << endl;
    cout << "   • 🎨 Acceso a frameworks nativos (Cocoa, Metal)" << endl;
    cout << "   • 📱 Desarrollo para iOS/macOS" << endl;
    cout << "   • 🐛 LLDB como depurador nativo" << endl;
    cout << "   • 🔒 Sandboxing y seguridad avanzada" << endl;
    cout << endl;
    
    // 💡 Consejos específicos para macOS
    cout << "💡 CONSEJOS PARA DESARROLLO EN macOS:" << endl;
    cout << "   🔍 Usa 'man' para documentación: man clang++" << endl;
    cout << "   📦 Instala Homebrew para herramientas adicionales" << endl;
    cout << "   🐛 Prefiere LLDB sobre GDB para depuración" << endl;
    cout << "   🎯 Considera Xcode para proyectos GUI nativos" << endl;
    cout << "   📊 Usa Instruments para profiling avanzado" << endl;
    cout << endl;
    
    cout << "🎉 ¡Bienvenido al desarrollo profesional de C++ en macOS!" << endl;
    
    return 0;
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🧪 **Verificación del sistema**:
   - Ejecuta este programa y revisa la información
   - Compara con 'system_profiler SPSoftwareDataType'
   - Verifica si tienes Apple Silicon o Intel

2. 🔧 **Comandos específicos de macOS**:
   - Prueba 'xcode-select -p' para ver la ruta de herramientas
   - Experimenta con diferentes flags de Clang
   - Compila para diferentes arquitecturas

3. 📚 **Explorar herramientas nativas**:
   - Instala y prueba LLDB
   - Experimenta con Instruments (si tienes Xcode)
   - Prueba compilar con frameworks de macOS

4. 🎮 **Proyecto específico de Mac**:
   - Crea un programa que use APIs de macOS
   - Experimenta con Core Foundation
   - Prueba desarrollo de aplicaciones con GUI

💡 RECURSOS ESPECÍFICOS PARA macOS:

📖 **Documentación de Apple**:
- Apple Developer Documentation
- Xcode Help
- man pages específicas de macOS

🔧 **Herramientas de desarrollo**:
- lldb: depurador nativo
- instruments: profiling y análisis
- otool: análisis de binarios
- codesign: firma de código

📦 **Homebrew packages útiles**:
- cmake: sistema de construcción
- ninja: construcción rápida
- ccache: cache de compilación
- pkg-config: gestión de librerías

🚀 SIGUIENTE PASO:
Ve a 06_Primer_Programa_Hola_Mundo.cpp para crear tu primer programa.
*/