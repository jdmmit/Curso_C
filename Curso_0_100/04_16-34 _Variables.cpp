/*
🎯 ARCHIVO: 04_Namespace.cpp
📚 TEMA: Namespaces (Espacios de Nombres) en C++
🎓 NIVEL: Principiante-Intermedio
📝 DESCRIPCIÓN: Aprende a organizar tu código y evitar conflictos de nombres

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué son los namespaces y para qué sirven
   - Cómo crear tus propios namespaces
   - Cómo usar variables de diferentes namespaces
   - La diferencia entre std::cout y cout
   - Cuándo usar "using namespace"
*/

#include <iostream> // 📚 Biblioteca estándar de C++

// 🏠 CREANDO NUESTROS PROPIOS NAMESPACES
// Un namespace es como una "casa" donde viven las variables y funciones

namespace primero // 🏠 Primera "casa" o espacio de nombres
{
  int x = 1;             // 📦 Variable x en el namespace "primero"
  double precio = 10.50; // 💰 Variable precio en "primero"

  void saludar()
  { // 👋 Función en el namespace "primero"
    std::cout << "¡Hola desde el namespace primero!" << std::endl;
  }
} // namespace primero

namespace segundo // 🏠 Segunda "casa" o espacio de nombres
{
  int x = 2;             // 📦 Otra variable x (¡mismo nombre, diferente lugar!)
  double precio = 25.75; // 💰 Otra variable precio

  void saludar()
  { // 👋 Otra función saludar
    std::cout << "¡Hola desde el namespace segundo!" << std::endl;
  }
} // namespace segundo

// 🏢 También podemos crear namespaces para diferentes módulos
namespace matematicas
{
  const double PI = 3.14159;

  double calcularArea(double radio)
  {
    return PI * radio * radio;
  }
}

namespace fisica
{
  const double VELOCIDAD_LUZ = 299792458; // m/s

  double calcularEnergia(double masa)
  {
    return masa * VELOCIDAD_LUZ * VELOCIDAD_LUZ; // E = mc²
  }
}

int main()
{
  // 🎯 USANDO NAMESPACES

  // 📍 Método 1: Especificar el namespace completo
  std::cout << "=== 📍 ACCESO DIRECTO A NAMESPACES ===" << std::endl;
  std::cout << "primero::x = " << primero::x << std::endl;
  std::cout << "segundo::x = " << segundo::x << std::endl;
  std::cout << "primero::precio = $" << primero::precio << std::endl;
  std::cout << "segundo::precio = $" << segundo::precio << std::endl;
  std::cout << std::endl;

  // 👋 Llamando funciones de diferentes namespaces
  primero::saludar();
  segundo::saludar();
  std::cout << std::endl;

  // 📍 Método 2: Usar "using namespace" para un namespace específico
  {                          // 🔒 Creamos un bloque para limitar el alcance
    using namespace primero; // 🏠 Ahora "vivimos" en el namespace primero

    std::cout << "=== 🏠 USANDO 'using namespace primero' ===" << std::endl;
    std::cout << "x = " << x << " (viene de primero)" << std::endl;
    std::cout << "precio = $" << precio << " (viene de primero)" << std::endl;

    // ⚠️ Si queremos acceder al segundo, necesitamos especificarlo
    std::cout << "segundo::x = " << segundo::x << std::endl;
  }
  std::cout << std::endl;

  // 📦 Variable local (en main)
  int x = 0; // 🏠 Esta x vive en la función main

  std::cout << "=== 🏠 VARIABLES LOCALES VS NAMESPACES ===" << std::endl;
  std::cout << "x local = " << x << std::endl;             // Variable de main
  std::cout << "primero::x = " << primero::x << std::endl; // Variable de primero
  std::cout << "segundo::x = " << segundo::x << std::endl; // Variable de segundo
  std::cout << std::endl;

  // 🧮 Usando namespaces especializados
  std::cout << "=== 🧮 NAMESPACES ESPECIALIZADOS ===" << std::endl;
  double radio = 5.0;
  double masa = 10.0;

  std::cout << "Área del círculo (radio=" << radio << "): "
            << matematicas::calcularArea(radio) << std::endl;
  std::cout << "Energía (masa=" << masa << "kg): "
            << fisica::calcularEnergia(masa) << " J" << std::endl;

  return 0; // ✅ Programa terminado exitosamente
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🏠 Crea dos namespaces llamados "casa" y "trabajo":
   - Cada uno con una variable "temperatura"
   - Cada uno con una función "mostrarInfo()"
   - Muestra ambas temperaturas en main

2. 🎮 Crea namespaces para un videojuego:
   - "jugador" con variables vida, puntos
   - "enemigo" con variables vida, daño
   - Simula una batalla mostrando las estadísticas

3. 🏪 Crea namespaces para una tienda:
   - "productos" con precios de diferentes artículos
   - "descuentos" con porcentajes de descuento
   - Calcula precios finales

💡 ¿POR QUÉ USAR NAMESPACES?

✅ VENTAJAS:
- Evita conflictos de nombres (dos variables pueden llamarse igual)
- Organiza el código en grupos lógicos
- Hace el código más legible y mantenible
- Permite reutilizar nombres sin problemas

🤔 EJEMPLO DEL MUNDO REAL:
Imagina que tienes dos amigos llamados "Juan":
- Juan de la escuela
- Juan del trabajo

Los namespaces son como especificar "Juan de la escuela" vs "Juan del trabajo"
para que sepas exactamente de cuál estás hablando.

⚠️ CUIDADO CON "using namespace std":
- std::cout es más claro que solo cout
- "using namespace std" puede causar conflictos
- Es mejor ser específico, especialmente en proyectos grandes

🚀 SIGUIENTE PASO:
Ve a 05_Typedef_type_aliases.cpp para aprender a crear nombres personalizados para tipos.
*/