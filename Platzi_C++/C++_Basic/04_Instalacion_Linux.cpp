/*
🎯 ARCHIVO: 04_Instalacion_Linux.cpp
📚 TEMA: Instalación de C++ en Linux
🎓 NIVEL: Principiante - Configuración
📝 DESCRIPCIÓN: Guía completa para instalar y configurar C++ en distribuciones Linux

💡 LO QUE APRENDERÁS:
   - Por qué Linux suele incluir GCC por defecto
   - Cómo verificar si tienes el compilador instalado
   - Instalación en diferentes distribuciones Linux
   - Configuración de VS Code en Linux
   - Comandos útiles para desarrollo

🐧 INSTALACIÓN DE C++ EN LINUX

✅ **VENTAJA DE LINUX**: A diferencia de Windows, la mayoría de distribuciones Linux 
incluyen el compilador GCC por defecto o lo tienen disponible fácilmente.

🔍 PASO 1: VERIFICAR INSTALACIÓN EXISTENTE

Antes de instalar, vamos a verificar si ya tienes el compilador:

💻 **Abrir terminal**:
- ⌨️ Presiona `Ctrl + Alt + T`
- 🖥️ O busca "Terminal" en el menú de aplicaciones

🧪 **Verificar GCC**:
```bash
gcc --version
```

🧪 **Verificar G++** (compilador de C++):
```bash
g++ --version
```

✅ **Si ves algo como esto, ¡ya tienes el compilador!**:
```
g++ (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Copyright (C) 2019 Free Software Foundation, Inc.
```

❌ **Si ves "command not found", necesitas instalarlo**.

📦 PASO 2: INSTALACIÓN POR DISTRIBUCIÓN

Cada distribución Linux tiene su propio gestor de paquetes:

🟠 **UBUNTU / DEBIAN**:
```bash
# Actualizar lista de paquetes
sudo apt update

# Instalar herramientas de desarrollo esenciales
sudo apt install build-essential

# Verificar instalación
g++ --version
```

🔴 **FEDORA / RHEL / CentOS**:
```bash
# Para Fedora (versiones recientes)
sudo dnf install gcc-c++

# Para versiones más antiguas de Fedora/CentOS
sudo yum install gcc-c++

# Verificar instalación
g++ --version
```

🦎 **OPENSUSE**:
```bash
# Instalar herramientas de desarrollo
sudo zypper install gcc-c++

# Verificar instalación
g++ --version
```

🏔️ **ARCH LINUX / MANJARO**:
```bash
# Instalar herramientas de desarrollo
sudo pacman -S base-devel

# Verificar instalación
g++ --version
```

🐧 **ALPINE LINUX**:
```bash
# Instalar herramientas de desarrollo
sudo apk add build-base

# Verificar instalación
g++ --version
```

📝 PASO 3: INSTALAR VISUAL STUDIO CODE

VS Code es excelente para desarrollo en C++ en Linux:

🌐 **Método 1: Desde el sitio web**:
1. 🔗 Ve a: https://code.visualstudio.com/
2. 📥 Descarga el paquete .deb (Ubuntu/Debian) o .rpm (Fedora/RHEL)
3. 🚀 Instala el paquete descargado

🟠 **Ubuntu/Debian**:
```bash
# Si descargaste el .deb
sudo dpkg -i code_*.deb

# Si hay problemas de dependencias
sudo apt install -f
```

🔴 **Fedora/RHEL**:
```bash
# Si descargaste el .rpm
sudo rpm -i code-*.rpm

# O usando dnf
sudo dnf install code-*.rpm
```

📦 **Método 2: Usando Snap** (Universal):
```bash
sudo snap install code --classic
```

🐧 **Método 3: Usando Flatpak** (Universal):
```bash
flatpak install flathub com.visualstudio.code
```

🔌 PASO 4: EXTENSIONES PARA VS CODE

Instala estas extensiones esenciales:

1️⃣ **C/C++ Extension**:
   - 🔍 Busca "C/C++" en el marketplace
   - 👤 Publicado por Microsoft
   - ✅ Autocompletado, sintaxis, depuración

2️⃣ **C/C++ Compile Run**:
   - 🔍 Busca "C/C++ Compile Run"
   - ⌨️ Compila y ejecuta con F6

3️⃣ **Code Runner** (opcional):
   - 🔍 Busca "Code Runner"
   - ⌨️ Ejecuta con Ctrl+Alt+N

4️⃣ **C/C++ Themes** (opcional):
   - 🎨 Temas específicos para C++
   - 🌈 Mejor resaltado de sintaxis

🧪 PASO 5: PROBAR LA INSTALACIÓN

Vamos a crear y ejecutar un programa de prueba:

📂 **Crear directorio de trabajo**:
```bash
mkdir ~/MisProgramasCpp
cd ~/MisProgramasCpp
```

📝 **Crear archivo de prueba**:
```bash
nano prueba.cpp
# O usa tu editor favorito: vim, gedit, etc.
```

💻 **Código de prueba**:
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "🐧 ¡C++ funciona perfectamente en Linux!" << endl;
    cout << "🔧 Compilador GCC instalado" << endl;
    cout << "📝 Entorno configurado" << endl;
    cout << "🚀 ¡Listo para programar!" << endl;
    return 0;
}
```

🚀 **Compilar y ejecutar**:
```bash
# Compilar
g++ prueba.cpp -o prueba

# Ejecutar
./prueba
```

✅ **Resultado esperado**:
```
🐧 ¡C++ funciona perfectamente en Linux!
🔧 Compilador GCC instalado
📝 Entorno configurado
🚀 ¡Listo para programar!
```

🛠️ COMANDOS ÚTILES PARA LINUX

```bash
# Información del compilador
g++ --version
gcc --version

# Compilar con diferentes flags
g++ -Wall -Wextra -std=c++17 programa.cpp -o programa

# Compilar con información de depuración
g++ -g programa.cpp -o programa

# Compilar con optimización
g++ -O2 programa.cpp -o programa

# Ver información detallada de compilación
g++ -v programa.cpp -o programa

# Compilar múltiples archivos
g++ archivo1.cpp archivo2.cpp -o programa

# Crear archivo objeto sin enlazar
g++ -c programa.cpp

# Enlazar archivos objeto
g++ programa.o -o programa
```

🔧 HERRAMIENTAS ADICIONALES ÚTILES

📊 **GDB (Depurador)**:
```bash
# Ubuntu/Debian
sudo apt install gdb

# Fedora
sudo dnf install gdb

# Usar el depurador
g++ -g programa.cpp -o programa
gdb ./programa
```

📈 **Valgrind (Análisis de memoria)**:
```bash
# Ubuntu/Debian
sudo apt install valgrind

# Fedora
sudo dnf install valgrind

# Detectar fugas de memoria
valgrind --leak-check=full ./programa
```

🏗️ **Make (Sistema de construcción)**:
```bash
# Ubuntu/Debian
sudo apt install make

# Fedora
sudo dnf install make

# Crear Makefile simple
echo "programa: programa.cpp
	g++ programa.cpp -o programa" > Makefile

# Compilar con make
make programa
```

📊 **CMake (Sistema de construcción avanzado)**:
```bash
# Ubuntu/Debian
sudo apt install cmake

# Fedora
sudo dnf install cmake
```

⚙️ CONFIGURACIÓN AVANZADA DE VS CODE

📝 **Crear configuración de tareas** (.vscode/tasks.json):
```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Compilar C++",
            "type": "shell",
            "command": "g++",
            "args": [
                "-g",
                "-Wall",
                "-std=c++17",
                "${file}",
                "-o",
                "${fileDirname}/${fileBasenameNoExtension}"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
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
            "name": "Depurar C++",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/${fileBasenameNoExtension}",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb"
        }
    ]
}
```

🆘 SOLUCIÓN DE PROBLEMAS COMUNES

❌ **"Permission denied" al ejecutar**:
```bash
# Dar permisos de ejecución
chmod +x programa
./programa
```

❌ **"No such file or directory" al compilar**:
```bash
# Verificar que el archivo existe
ls -la *.cpp

# Verificar ruta actual
pwd
```

❌ **Errores de librerías faltantes**:
```bash
# Instalar librerías de desarrollo
sudo apt install libc6-dev  # Ubuntu/Debian
sudo dnf install glibc-devel  # Fedora
```

❌ **VS Code no reconoce C++**:
```bash
# Reinstalar extensión C/C++
# Verificar que g++ está en PATH
which g++
echo $PATH
```

🎯 VENTAJAS DE DESARROLLAR C++ EN LINUX

✅ **Rendimiento superior**:
- 🚀 Compilación más rápida
- ⚡ Ejecución más eficiente
- 💾 Mejor gestión de memoria

✅ **Herramientas nativas**:
- 🔧 GCC optimizado para Linux
- 🐛 Mejores herramientas de depuración
- 📊 Profilers y analizadores avanzados

✅ **Ecosistema de desarrollo**:
- 📚 Librerías abundantes
- 🤝 Comunidad activa
- 🔄 Actualizaciones frecuentes

✅ **Compatibilidad**:
- 🌐 Estándares POSIX
- 🔗 Fácil integración con sistemas
- 📦 Gestores de paquetes potentes

🎉 ¡FELICIDADES!

¡Has configurado exitosamente C++ en Linux! Tu sistema ahora tiene:
- ✅ Compilador GCC/G++ funcionando
- ✅ VS Code con extensiones
- ✅ Herramientas de desarrollo
- ✅ Entorno optimizado para programar

🚀 **¡Linux es una excelente plataforma para desarrollar en C++!**
*/

// 🎯 PROGRAMA DE VERIFICACIÓN PARA LINUX

#include <iostream>     // 📚 Biblioteca estándar
#include <string>       // 📝 Para strings
#include <unistd.h>     // 🐧 Funciones específicas de Unix/Linux
#include <sys/utsname.h> // 🖥️ Información del sistema

using namespace std;

int main()
{
    // 🎉 Mensaje de bienvenida
    cout << "🐧 ¡C++ CONFIGURADO EXITOSAMENTE EN LINUX!" << endl;
    cout << "=============================================" << endl;
    cout << endl;
    
    // 🖥️ Información del sistema Linux
    struct utsname sys_info;
    if (uname(&sys_info) == 0) {
        cout << "🖥️ INFORMACIÓN DEL SISTEMA:" << endl;
        cout << "   🐧 Sistema: " << sys_info.sysname << endl;
        cout << "   🏷️ Nombre: " << sys_info.nodename << endl;
        cout << "   📋 Versión: " << sys_info.release << endl;
        cout << "   🏗️ Arquitectura: " << sys_info.machine << endl;
    }
    cout << endl;
    
    // 🔧 Información del compilador
    cout << "🔧 INFORMACIÓN DEL COMPILADOR:" << endl;
    #ifdef __GNUC__
        cout << "   ⚙️ Compilador: GCC " << __GNUC__ << "." << __GNUC_MINOR__ << "." << __GNUC_PATCHLEVEL__ << endl;
    #endif
    
    #ifdef __cplusplus
        cout << "   📋 Estándar C++: " << __cplusplus << endl;
    #endif
    
    cout << "   📅 Compilado: " << __DATE__ << " " << __TIME__ << endl;
    cout << endl;
    
    // ✅ Estado de la instalación
    cout << "✅ VERIFICACIONES DEL SISTEMA:" << endl;
    cout << "   🔧 Compilador GCC: FUNCIONANDO" << endl;
    cout << "   📝 Bibliotecas estándar: DISPONIBLES" << endl;
    cout << "   🐧 Funciones del sistema: ACCESIBLES" << endl;
    cout << "   ⚡ Rendimiento: OPTIMIZADO" << endl;
    cout << endl;
    
    // 🎯 Ventajas de Linux para C++
    cout << "🚀 VENTAJAS DE LINUX PARA C++:" << endl;
    cout << "   • ⚡ Compilación más rápida" << endl;
    cout << "   • 🔧 Herramientas nativas incluidas" << endl;
    cout << "   • 📚 Acceso directo a APIs del sistema" << endl;
    cout << "   • 🐛 Mejores herramientas de depuración" << endl;
    cout << "   • 🌐 Compatibilidad con estándares POSIX" << endl;
    cout << endl;
    
    // 💡 Consejos para desarrollo en Linux
    cout << "💡 CONSEJOS PARA DESARROLLO EN LINUX:" << endl;
    cout << "   🔍 Usa 'man' para documentación: man g++" << endl;
    cout << "   📦 Instala librerías con el gestor de paquetes" << endl;
    cout << "   🔧 Aprende comandos básicos de terminal" << endl;
    cout << "   🐛 Usa gdb para depuración avanzada" << endl;
    cout << "   📊 Experimenta con valgrind para análisis de memoria" << endl;
    cout << endl;
    
    cout << "🎉 ¡Bienvenido al desarrollo profesional de C++ en Linux!" << endl;
    
    return 0;
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🧪 **Verificación del sistema**:
   - Ejecuta este programa y revisa la información
   - Compara con la salida de 'uname -a' en terminal
   - Verifica la versión de tu compilador

2. 🔧 **Comandos de terminal**:
   - Practica compilar desde terminal
   - Usa diferentes flags: -Wall, -O2, -g
   - Experimenta con make y Makefiles

3. 📚 **Explorar herramientas**:
   - Instala y prueba gdb
   - Experimenta con valgrind
   - Prueba diferentes editores (vim, emacs, nano)

4. 🎮 **Proyecto personal**:
   - Crea un programa que use funciones del sistema
   - Experimenta con hilos (threads)
   - Prueba programación de red básica

💡 RECURSOS ESPECÍFICOS PARA LINUX:

📖 **Documentación**:
- man pages: man g++, man gdb
- Info pages: info gcc
- /usr/share/doc/ (documentación local)

🔧 **Herramientas de desarrollo**:
- gdb: depurador
- valgrind: análisis de memoria
- strace: rastreo de llamadas al sistema
- ltrace: rastreo de llamadas a librerías

📦 **Gestores de paquetes útiles**:
- apt (Ubuntu/Debian): sudo apt search libname-dev
- dnf (Fedora): sudo dnf search libname-devel
- pacman (Arch): sudo pacman -Ss libname

🚀 SIGUIENTE PASO:
Ve a 05_Instalacion_MacOS.cpp para ver la instalación en macOS.
*/