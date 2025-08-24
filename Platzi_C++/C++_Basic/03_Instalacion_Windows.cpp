/*
🎯 ARCHIVO: 03_Instalacion_Windows.cpp
📚 TEMA: Instalación de C++ en Windows
🎓 NIVEL: Principiante - Configuración
📝 DESCRIPCIÓN: Guía completa para instalar y configurar C++ en Windows

💡 LO QUE APRENDERÁS:
   - Por qué Windows no incluye compilador C++ por defecto
   - Cómo instalar MinGW (compilador GCC para Windows)
   - Configuración de variables de entorno
   - Instalación de extensiones para VS Code
   - Verificación de la instalación

🪟 INSTALACIÓN DE C++ EN WINDOWS

⚠️ **IMPORTANTE**: A diferencia de Linux y macOS, Windows NO incluye un compilador 
de C++ por defecto. ¡Pero no te preocupes! Te guiaremos paso a paso para instalarlo.

🔧 ¿QUÉ NECESITAMOS INSTALAR?

Para programar en C++ en Windows necesitamos:
1. 🛠️ **Compilador GCC** (a través de MinGW)
2. 📝 **Editor de código** (VS Code recomendado)
3. 🔌 **Extensiones** para VS Code
4. ⚙️ **Configuración** de variables de entorno

📥 PASO 1: DESCARGAR MinGW

MinGW (Minimalist GNU for Windows) es un administrador que nos permite instalar 
el compilador GCC y otras herramientas de desarrollo.

🌐 **Enlace de descarga**: https://www.mingw-w64.org/
📂 **Alternativa recomendada**: https://sourceforge.net/projects/mingw/

📋 **Pasos de descarga**:
1. 🖱️ Haz clic en el botón "Download"
2. ⏳ Espera unos segundos para que se descargue automáticamente
3. 📁 El archivo se guardará en tu carpeta de Descargas

⚙️ PASO 2: INSTALACIÓN DE MinGW

Una vez descargado el instalador:

🚀 **Ejecutar el instalador**:
1. 📂 Abre el archivo descargado (mingw-get-setup.exe)
2. 🛡️ Si Windows pregunta, permite que se ejecute
3. 📋 Aparecerá una ventana con información del software

📁 **Seleccionar carpeta de instalación**:
- 📍 **Carpeta recomendada**: `C:\MinGW` (por defecto)
- ⚠️ **IMPORTANTE**: Recuerda esta carpeta, la necesitaremos después
- ✅ Si cambias la carpeta, anótala en algún lugar
- 🖱️ Haz clic en "Continue"

⏳ **Proceso de instalación**:
1. 📥 Se descargará el administrador de MinGW
2. ⏳ Espera a que termine la descarga
3. 🖱️ Haz clic en "Continue" al finalizar

🔧 PASO 3: INSTALAR EL COMPILADOR

Ahora instalaremos los componentes necesarios:

📦 **Seleccionar paquetes**:
1. 🖥️ Se abrirá el "MinGW Installation Manager"
2. ✅ Marca las siguientes casillas:
   - `mingw32-gcc-g++` (compilador de C++)
   - `mingw32-base` (herramientas básicas)
   - `msys-base` (sistema base)

🚀 **Instalar paquetes**:
1. 📋 Ve al menú "Installation"
2. 🖱️ Selecciona "Apply Changes"
3. ✅ Confirma la instalación
4. ⏳ Espera a que se descarguen e instalen todos los componentes

⚙️ PASO 4: CONFIGURAR VARIABLES DE ENTORNO

Este es el paso MÁS IMPORTANTE para que Windows encuentre el compilador:

🔍 **Abrir configuración de variables**:
1. 🖱️ Clic derecho en "Este equipo" o "Mi PC"
2. 📋 Selecciona "Propiedades"
3. ⚙️ Haz clic en "Configuración avanzada del sistema"
4. 🔧 Botón "Variables de entorno"

📝 **Editar la variable PATH**:
1. 🔍 En "Variables del sistema", busca "Path"
2. ✏️ Selecciona "Path" y haz clic en "Editar"
3. ➕ Haz clic en "Nuevo"
4. 📁 Agrega: `C:\MinGW\bin` (o la carpeta que elegiste + \bin)
5. ✅ Haz clic en "Aceptar" en todas las ventanas

🔄 **Reiniciar la terminal**:
- ⚠️ Cierra todas las ventanas de CMD o PowerShell abiertas
- 🔄 Esto es necesario para que reconozca los cambios

✅ PASO 5: VERIFICAR LA INSTALACIÓN

Vamos a comprobar que todo funciona correctamente:

💻 **Abrir terminal**:
1. ⌨️ Presiona `Windows + R`
2. 📝 Escribe `cmd` y presiona Enter
3. 🖥️ Se abrirá la línea de comandos

🧪 **Probar el compilador**:
```cmd
g++ --version
```

✅ **Resultado esperado**:
```
g++ (MinGW.org GCC-X.X.X) X.X.X
Copyright (C) 20XX Free Software Foundation, Inc.
```

❌ **Si no funciona**:
- 🔄 Verifica que agregaste correctamente la ruta al PATH
- 🔄 Reinicia completamente tu computadora
- 📁 Verifica que la carpeta `C:\MinGW\bin` existe y contiene archivos

📝 PASO 6: INSTALAR VISUAL STUDIO CODE

Si aún no tienes VS Code instalado:

🌐 **Descargar VS Code**:
- 🔗 Ve a: https://code.visualstudio.com/
- 📥 Descarga la versión para Windows
- 🚀 Instala siguiendo el asistente

🔌 PASO 7: EXTENSIONES PARA VS CODE

Instala estas extensiones esenciales:

1️⃣ **C/C++ Extension**:
   - 🔍 Busca "C/C++" en el marketplace de extensiones
   - 👤 Publicado por Microsoft
   - ✅ Proporciona: sintaxis, autocompletado, detección de errores

2️⃣ **C/C++ Compile Run**:
   - 🔍 Busca "C/C++ Compile Run"
   - 👤 Publicado por danielpinto8zz6
   - ✅ Permite compilar y ejecutar con F6

3️⃣ **Code Runner** (opcional pero útil):
   - 🔍 Busca "Code Runner"
   - 👤 Publicado por Jun Han
   - ✅ Ejecuta código con Ctrl+Alt+N

🧪 PASO 8: PROBAR TU INSTALACIÓN

Vamos a crear y ejecutar tu primer programa:

📝 **Crear archivo de prueba**:
1. 📂 Crea una carpeta llamada "MisProgramasCpp"
2. 📄 Crea un archivo llamado "prueba.cpp"
3. 💻 Abre VS Code y abre esa carpeta

💻 **Código de prueba**:
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "🎉 ¡C++ funciona perfectamente en Windows!" << endl;
    cout << "🔧 Compilador instalado correctamente" << endl;
    cout << "📝 VS Code configurado" << endl;
    cout << "🚀 ¡Listo para programar!" << endl;
    return 0;
}
```

🚀 **Compilar y ejecutar**:
- ⌨️ Presiona F6 (si instalaste C/C++ Compile Run)
- 🖥️ O usa la terminal: `g++ prueba.cpp -o prueba.exe && prueba.exe`

✅ **Resultado esperado**:
```
🎉 ¡C++ funciona perfectamente en Windows!
🔧 Compilador instalado correctamente
📝 VS Code configurado
🚀 ¡Listo para programar!
```

🛠️ COMANDOS ÚTILES PARA WINDOWS

```cmd
# Verificar versión del compilador
g++ --version

# Compilar un archivo
g++ mi_programa.cpp -o mi_programa.exe

# Ejecutar el programa
mi_programa.exe

# Compilar y ejecutar en una línea
g++ mi_programa.cpp -o mi_programa.exe && mi_programa.exe

# Compilar con información de depuración
g++ -g mi_programa.cpp -o mi_programa.exe

# Compilar con todas las advertencias
g++ -Wall mi_programa.cpp -o mi_programa.exe
```

🆘 SOLUCIÓN DE PROBLEMAS COMUNES

❌ **"g++ no se reconoce como comando"**:
- 🔧 Verifica que agregaste `C:\MinGW\bin` al PATH
- 🔄 Reinicia la terminal o la computadora
- 📁 Verifica que el archivo `g++.exe` existe en `C:\MinGW\bin`

❌ **Error de permisos**:
- 🛡️ Ejecuta la terminal como administrador
- 📁 Verifica que tienes permisos en la carpeta de trabajo

❌ **Extensiones no funcionan**:
- 🔄 Reinicia VS Code después de instalar extensiones
- ⚙️ Verifica la configuración de C++ en VS Code

❌ **Compilación lenta**:
- 💾 Agrega tu carpeta de proyectos a las exclusiones del antivirus
- 🔧 Usa SSD en lugar de HDD si es posible

🎉 ¡FELICIDADES!

¡Has instalado exitosamente C++ en Windows! Ahora tienes:
- ✅ Compilador GCC funcionando
- ✅ VS Code configurado
- ✅ Extensiones instaladas
- ✅ Entorno listo para programar

🚀 **¡Estás listo para crear programas increíbles en C++!**
*/

// 🎯 PROGRAMA DE VERIFICACIÓN DE INSTALACIÓN

#include <iostream>  // 📚 Biblioteca estándar
#include <string>    // 📝 Para strings

using namespace std;  // 🏠 Espacio de nombres estándar

int main()
{
    // 🎉 Mensaje de bienvenida
    cout << "🎉 ¡INSTALACIÓN DE C++ EN WINDOWS COMPLETADA!" << endl;
    cout << "================================================" << endl;
    cout << endl;
    
    // ✅ Verificaciones del sistema
    cout << "✅ VERIFICACIONES DEL SISTEMA:" << endl;
    cout << "   🔧 Compilador GCC: FUNCIONANDO" << endl;
    cout << "   📝 VS Code: CONFIGURADO" << endl;
    cout << "   🔌 Extensiones: INSTALADAS" << endl;
    cout << "   ⚙️ Variables de entorno: CONFIGURADAS" << endl;
    cout << endl;
    
    // 🖥️ Información del sistema
    cout << "🖥️ INFORMACIÓN DEL SISTEMA:" << endl;
    cout << "   💻 Sistema operativo: Windows" << endl;
    cout << "   🔧 Compilador: ";
    
    #ifdef __GNUC__
        cout << "GCC " << __GNUC__ << "." << __GNUC_MINOR__ << endl;
    #else
        cout << "Desconocido" << endl;
    #endif
    
    cout << "   📅 Fecha de compilación: " << __DATE__ << endl;
    cout << "   ⏰ Hora de compilación: " << __TIME__ << endl;
    cout << endl;
    
    // 🎯 Próximos pasos
    cout << "🚀 PRÓXIMOS PASOS:" << endl;
    cout << "   1. 📖 Lee la documentación en la carpeta Guia/" << endl;
    cout << "   2. 💻 Practica con los ejemplos básicos" << endl;
    cout << "   3. 🎮 Crea tus propios programas" << endl;
    cout << "   4. 🤝 Únete a la comunidad de C++" << endl;
    cout << endl;
    
    // 💡 Consejos finales
    cout << "💡 CONSEJOS PARA PRINCIPIANTES:" << endl;
    cout << "   • 🎯 Practica todos los días" << endl;
    cout << "   • 📚 Lee código de otros programadores" << endl;
    cout << "   • ❓ No tengas miedo de hacer preguntas" << endl;
    cout << "   • 🐛 Los errores son parte del aprendizaje" << endl;
    cout << endl;
    
    cout << "🎉 ¡Bienvenido al mundo de la programación en C++!" << endl;
    
    return 0;  // ✅ Programa ejecutado exitosamente
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🧪 **Verificación básica**:
   - Compila y ejecuta este programa
   - Verifica que aparezcan todos los mensajes
   - Toma una captura de pantalla del resultado

2. 🔧 **Prueba de comandos**:
   - Abre CMD y ejecuta: g++ --version
   - Prueba compilar desde la línea de comandos
   - Familiarízate con los comandos básicos

3. 📝 **Primer programa personal**:
   - Crea un programa que muestre tu nombre
   - Agrega tu edad y ciudad
   - Compílalo y ejecútalo

4. 🎮 **Experimentación**:
   - Cambia los mensajes del programa
   - Agrega más información del sistema
   - Prueba diferentes flags de compilación

💡 RECURSOS ADICIONALES:

📚 **Documentación oficial**:
- MinGW: https://www.mingw-w64.org/
- GCC: https://gcc.gnu.org/
- VS Code C++: https://code.visualstudio.com/docs/languages/cpp

🎥 **Videos tutoriales**:
- Busca "C++ Windows installation" en YouTube
- Mira tutoriales específicos para tu versión de Windows

🤝 **Comunidades**:
- Stack Overflow (etiqueta c++)
- Reddit r/cpp
- Discord servers de programación

🚀 SIGUIENTE PASO:
Ve a 04_Instalacion_Linux.cpp para ver cómo se instala en otros sistemas operativos.
*/