/*
🎯 ARCHIVO: 07_Conversion_Typos.cpp
📚 TEMA: Conversión de Tipos (Type Casting) en C++
🎓 NIVEL: Principiante-Intermedio
📝 DESCRIPCIÓN: Aprende a convertir entre diferentes tipos de datos de forma segura

💡 CONCEPTOS QUE APRENDERÁS:
   - Conversión implícita vs explícita
   - static_cast, dynamic_cast, const_cast, reinterpret_cast
   - Cuándo y cómo usar cada tipo de conversión
   - Problemas comunes y cómo evitarlos
   - Ejemplos prácticos del mundo real
*/

#include <iostream> // 📚 Para entrada/salida
#include <string>   // 📝 Para strings
#include <sstream>  // 🔄 Para conversiones string-número

int main()
{
  std::cout << "=== 🔄 CONVERSIÓN DE TIPOS EN C++ ===" << std::endl;

  // 🔄 CONVERSIÓN IMPLÍCITA (Automática)
  // C++ convierte automáticamente cuando es "seguro"

  std::cout << "=== 🤖 CONVERSIÓN IMPLÍCITA (Automática) ===" << std::endl;

  int entero = 42;
  double decimal = entero; // ✅ int → double (seguro, no se pierde información)

  std::cout << "🔢 Entero original: " << entero << std::endl;
  std::cout << "🔢 Convertido a double: " << decimal << std::endl;

  // ⚠️ Conversión que puede perder información
  double pi = 3.14159;
  int pi_entero = pi; // ⚠️ double → int (se pierden los decimales)

  std::cout << "🥧 Pi original: " << pi << std::endl;
  std::cout << "🔢 Pi como entero: " << pi_entero << " (se perdieron los decimales)" << std::endl;
  std::cout << std::endl;

  // 🎯 CONVERSIÓN EXPLÍCITA CON static_cast
  // La forma más común y segura de convertir tipos

  std::cout << "=== 🎯 CONVERSIÓN EXPLÍCITA (static_cast) ===" << std::endl;

  // Conversión segura de int a double
  int estudiantes = 25;
  int grupos = 4;
  double promedio_por_grupo = static_cast<double>(estudiantes) / grupos;

  std::cout << "👥 Estudiantes: " << estudiantes << std::endl;
  std::cout << "📚 Grupos: " << grupos << std::endl;
  std::cout << "📊 Promedio por grupo: " << promedio_por_grupo << std::endl;

  // Sin static_cast sería división entera
  int division_entera = estudiantes / grupos;
  std::cout << "⚠️ Sin conversión (división entera): " << division_entera << std::endl;
  std::cout << std::endl;

  // 🔤 CONVERSIÓN ENTRE CHAR Y INT
  std::cout << "=== 🔤 CONVERSIÓN CHAR ↔ INT ===" << std::endl;

  char letra = 'A';
  int codigo_ascii = static_cast<int>(letra);

  std::cout << "🔤 Letra: " << letra << std::endl;
  std::cout << "🔢 Código ASCII: " << codigo_ascii << std::endl;

  // Conversión inversa
  int codigo = 66;
  char letra_desde_codigo = static_cast<char>(codigo);

  std::cout << "🔢 Código: " << codigo << std::endl;
  std::cout << "🔤 Letra correspondiente: " << letra_desde_codigo << std::endl;
  std::cout << std::endl;

  // 📝 CONVERSIÓN STRING ↔ NÚMEROS
  std::cout << "=== 📝 CONVERSIÓN STRING ↔ NÚMEROS ===" << std::endl;

  // String a número
  std::string texto_numero = "123";
  std::string texto_decimal = "45.67";

  int numero_desde_string = std::stoi(texto_numero);      // string to int
  double decimal_desde_string = std::stod(texto_decimal); // string to double

  std::cout << "📝 Texto: \"" << texto_numero << "\" → Número: " << numero_desde_string << std::endl;
  std::cout << "📝 Texto: \"" << texto_decimal << "\" → Decimal: " << decimal_desde_string << std::endl;

  // Número a string
  int edad = 25;
  double precio = 19.99;

  std::string edad_texto = std::to_string(edad);
  std::string precio_texto = std::to_string(precio);

  std::cout << "🔢 Número: " << edad << " → Texto: \"" << edad_texto << "\"" << std::endl;
  std::cout << "🔢 Decimal: " << precio << " → Texto: \"" << precio_texto << "\"" << std::endl;
  std::cout << std::endl;

  // 🎯 EJEMPLO PRÁCTICO: Calculadora con entrada de texto
  std::cout << "=== 🧮 EJEMPLO PRÁCTICO: CALCULADORA ===" << std::endl;

  // Simulamos entrada del usuario (normalmente sería std::cin)
  std::string entrada1 = "15.5";
  std::string entrada2 = "4.2";

  try
  {
    double num1 = std::stod(entrada1);
    double num2 = std::stod(entrada2);

    std::cout << "📝 Entrada 1: \"" << entrada1 << "\" → " << num1 << std::endl;
    std::cout << "📝 Entrada 2: \"" << entrada2 << "\" → " << num2 << std::endl;
    std::cout << "🧮 Resultados:" << std::endl;
    std::cout << "   ➕ Suma: " << (num1 + num2) << std::endl;
    std::cout << "   ➖ Resta: " << (num1 - num2) << std::endl;
    std::cout << "   ✖️ Multiplicación: " << (num1 * num2) << std::endl;
    std::cout << "   ➗ División: " << (num1 / num2) << std::endl;
  }
  catch (const std::exception &e)
  {
    std::cout << "❌ Error en la conversión: " << e.what() << std::endl;
  }
  std::cout << std::endl;

  // ⚠️ CONVERSIONES PELIGROSAS Y CÓMO EVITARLAS
  std::cout << "=== ⚠️ CUIDADO CON ESTAS CONVERSIONES ===" << std::endl;

  // Overflow: número muy grande para el tipo
  int numero_grande = 2000000000;
  short numero_pequeño = static_cast<short>(numero_grande); // ⚠️ Puede causar overflow

  std::cout << "🔢 Número grande: " << numero_grande << std::endl;
  std::cout << "⚠️ Convertido a short: " << numero_pequeño << " (¡overflow!)" << std::endl;

  // Conversión de negativo a unsigned
  int negativo = -5;
  unsigned int sin_signo = static_cast<unsigned int>(negativo); // ⚠️ Resultado inesperado

  std::cout << "➖ Número negativo: " << negativo << std::endl;
  std::cout << "⚠️ Como unsigned: " << sin_signo << " (¡número muy grande!)" << std::endl;
  std::cout << std::endl;

  // 🎨 EJEMPLO PRÁCTICO: Sistema de calificaciones
  std::cout << "=== 🎓 SISTEMA DE CALIFICACIONES ===" << std::endl;

  // Convertir calificaciones numéricas a letras
  double calificaciones[] = {95.5, 87.2, 76.8, 65.1, 54.3};
  int num_calificaciones = sizeof(calificaciones) / sizeof(calificaciones[0]);

  for (int i = 0; i < num_calificaciones; i++)
  {
    double nota = calificaciones[i];
    char letra;

    // Conversión de número a letra usando lógica
    if (nota >= 90)
      letra = 'A';
    else if (nota >= 80)
      letra = 'B';
    else if (nota >= 70)
      letra = 'C';
    else if (nota >= 60)
      letra = 'D';
    else
      letra = 'F';

    // Convertir a entero para mostrar sin decimales si es número redondo
    int nota_entera = static_cast<int>(nota);
    bool es_entero = (nota == nota_entera);

    std::cout << "📊 Calificación " << (i + 1) << ": ";
    if (es_entero)
    {
      std::cout << nota_entera;
    }
    else
    {
      std::cout << nota;
    }
    std::cout << " → " << letra << std::endl;
  }

  return 0; // ✅ Programa terminado exitosamente
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🌡️ Conversor de temperatura:
   - Convierte Celsius a Fahrenheit y viceversa
   - Maneja entrada como string y convierte a double
   - Muestra resultado redondeado a entero si es apropiado

2. 💰 Conversor de monedas:
   - Entrada: cantidad como string
   - Conversión: aplica tasa de cambio
   - Salida: resultado formateado como string

3. 🎮 Sistema de puntuación:
   - Convierte puntos (double) a nivel (int)
   - Convierte nivel a rango (char: S, A, B, C, D)
   - Maneja casos especiales y errores

4. 📱 Validador de entrada:
   - Lee string del usuario
   - Intenta convertir a número
   - Maneja errores con try-catch

💡 TIPOS DE CONVERSIÓN EN C++:

🎯 static_cast<tipo>(valor):
- Conversiones "normales" y seguras
- Verificación en tiempo de compilación
- Más usado para tipos básicos

🔄 dynamic_cast<tipo>(valor):
- Para jerarquías de clases (herencia)
- Verificación en tiempo de ejecución
- Devuelve nullptr si falla

🔒 const_cast<tipo>(valor):
- Quita o agrega const/volatile
- Úsalo con mucho cuidado
- Puede causar comportamiento indefinido

⚡ reinterpret_cast<tipo>(valor):
- Conversión de bajo nivel
- Muy peligroso, evítalo si es posible
- Para casos muy específicos

⚠️ REGLAS DE ORO:

1. ✅ Prefiere static_cast para conversiones básicas
2. ⚠️ Siempre verifica rangos antes de convertir
3. 🛡️ Usa try-catch para conversiones string-número
4. 📝 Documenta conversiones que puedan perder información
5. 🧪 Prueba casos extremos (números muy grandes/pequeños)

🚀 SIGUIENTE PASO:
¡Felicidades! Has completado los conceptos básicos de C++.
Ahora puedes explorar los archivos de Platzi para conceptos más avanzados.
*/