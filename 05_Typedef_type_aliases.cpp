/*
🎯 ARCHIVO: 05_Typedef_type_aliases.cpp
📚 TEMA: Typedef y Type Aliases (Alias de Tipos) en C++
🎓 NIVEL: Principiante-Intermedio
📝 DESCRIPCIÓN: Aprende a crear nombres personalizados para tipos de datos

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué son los alias de tipos y para qué sirven
   - Diferencia entre typedef y using
   - Cómo hacer el código más legible
   - Ejemplos prácticos con tipos complejos
   - Cuándo usar alias de tipos
*/

#include <iostream>  // 📚 Para entrada/salida
#include <vector>    // 📦 Para usar vectores (listas dinámicas)
#include <string>    // 📝 Para strings

// 🏷️ CREANDO ALIAS DE TIPOS CON 'using' (Método moderno - C++11+)

// 📝 Alias simples para tipos básicos
using texto_t = std::string;        // 📝 "texto_t" es ahora sinónimo de std::string
using numero_t = int;               // 🔢 "numero_t" es ahora sinónimo de int
using decimal_t = double;           // 🔢 "decimal_t" es ahora sinónimo de double
using caracter_t = char;            // 🔤 "caracter_t" es ahora sinónimo de char

// 📦 Alias para tipos más complejos
using lista_numeros_t = std::vector<int>;           // 📋 Lista de números enteros
using lista_textos_t = std::vector<std::string>;    // 📋 Lista de textos
using lista_decimales_t = std::vector<double>;      // 📋 Lista de números decimales

// 🎯 Alias para tipos muy complejos (esto se vuelve muy útil!)
using lista_estudiantes_t = std::vector<std::pair<std::string, int>>;  // 👥 Lista de [nombre, edad]

// 🏷️ MÉTODO ANTIGUO: typedef (aún funciona, pero 'using' es más claro)
typedef std::string texto_viejo_t;   // 📝 Método antiguo
typedef int numero_viejo_t;          // 🔢 Método antiguo

int main()
{
    std::cout << "=== 🏷️ USANDO ALIAS DE TIPOS ===" << std::endl;
    
    // 📝 Usando nuestros alias simples
    texto_t nombre = "Ana García";      // En lugar de std::string nombre
    numero_t edad = 25;                 // En lugar de int edad
    decimal_t altura = 1.68;            // En lugar de double altura
    caracter_t inicial = 'A';           // En lugar de char inicial
    
    std::cout << "👤 Información personal:" << std::endl;
    std::cout << "   Nombre: " << nombre << std::endl;
    std::cout << "   Edad: " << edad << " años" << std::endl;
    std::cout << "   Altura: " << altura << " metros" << std::endl;
    std::cout << "   Inicial: " << inicial << std::endl;
    std::cout << std::endl;
    
    // 📋 Usando alias para listas (vectores)
    lista_numeros_t calificaciones = {85, 92, 78, 96, 88};  // 📊 Lista de calificaciones
    lista_textos_t materias = {"Matemáticas", "Historia", "Ciencias", "Arte", "Deportes"};
    
    std::cout << "📚 Calificaciones por materia:" << std::endl;
    for(size_t i = 0; i < materias.size(); i++) {
        std::cout << "   " << materias[i] << ": " << calificaciones[i] << " puntos" << std::endl;
    }
    std::cout << std::endl;
    
    // 🎯 Ejemplo con tipo complejo: lista de estudiantes
    lista_estudiantes_t clase = {
        {"María López", 20},
        {"Carlos Ruiz", 19},
        {"Sofia Chen", 21},
        {"Diego Morales", 18}
    };
    
    std::cout << "👥 Lista de estudiantes en la clase:" << std::endl;
    for(const auto& estudiante : clase) {
        std::cout << "   " << estudiante.first << " - " << estudiante.second << " años" << std::endl;
    }
    std::cout << std::endl;
    
    // 🔄 Comparación: con y sin alias
    std::cout << "=== 🔄 COMPARACIÓN: CON Y SIN ALIAS ===" << std::endl;
    
    // ❌ Sin alias (más difícil de leer)
    std::vector<std::pair<std::string, int>> lista_compleja_sin_alias = {{"Juan", 25}};
    
    // ✅ Con alias (más fácil de leer)
    lista_estudiantes_t lista_compleja_con_alias = {{"Juan", 25}};
    
    std::cout << "✅ Los alias hacen el código más legible!" << std::endl;
    
    // 🎨 Ejemplo práctico: sistema de coordenadas
    using coordenada_t = std::pair<double, double>;  // 📍 Par de (x, y)
    using ruta_t = std::vector<coordenada_t>;        // 🗺️ Lista de coordenadas
    
    ruta_t mi_ruta = {
        {0.0, 0.0},    // 🏠 Casa
        {2.5, 1.8},    // 🏪 Tienda
        {5.2, 3.1},    // 🏫 Escuela
        {0.0, 0.0}     // 🏠 De vuelta a casa
    };
    
    std::cout << std::endl << "🗺️ Mi ruta diaria:" << std::endl;
    std::string lugares[] = {"Casa", "Tienda", "Escuela", "Casa"};
    for(size_t i = 0; i < mi_ruta.size(); i++) {
        std::cout << "   " << lugares[i] << ": (" 
                  << mi_ruta[i].first << ", " << mi_ruta[i].second << ")" << std::endl;
    }

    return 0;  // ✅ Programa terminado exitosamente
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🏪 Crea alias para un sistema de inventario:
   - producto_t para std::pair<std::string, double> (nombre, precio)
   - inventario_t para std::vector<producto_t>
   - Crea una lista de productos con precios

2. 🎮 Crea alias para un videojuego:
   - posicion_t para coordenadas (x, y)
   - jugador_t para información del jugador
   - enemigos_t para lista de enemigos

3. 📊 Crea alias para estadísticas:
   - puntuacion_t para números decimales
   - estadisticas_t para lista de puntuaciones
   - Calcula promedio, máximo y mínimo

💡 ¿CUÁNDO USAR ALIAS DE TIPOS?

✅ USA ALIAS CUANDO:
- Los tipos son muy largos o complejos
- Quieres hacer el código más legible
- Planeas cambiar el tipo en el futuro
- Trabajas con tipos que se repiten mucho

❌ NO uses alias cuando:
- El tipo es simple y claro (int, double, etc.)
- Solo lo usas una vez
- Hace el código más confuso

🆚 typedef vs using:

📜 typedef (método antiguo):
typedef std::vector<int> lista_t;

🆕 using (método moderno - recomendado):
using lista_t = std::vector<int>;

💡 VENTAJAS DE 'using':
- Más fácil de leer (tipo = definición)
- Mejor soporte para templates
- Sintaxis más consistente

🚀 SIGUIENTE PASO:
Ve a 06_Operadores_Aritmeticos.cpp para aprender sobre operaciones matemáticas.
*/