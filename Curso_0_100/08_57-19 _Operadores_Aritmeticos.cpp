/*
  Tema: Operadores Aritméticos
  Marca de tiempo: 57:19
  Archivo generado: 2025-09-05
*/

/*
🎯 ARCHIVO: 06_Operadores_Aritmeticos.cpp
📚 TEMA: Operadores Aritméticos en C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Aprende a realizar operaciones matemáticas en C++

💡 CONCEPTOS QUE APRENDERÁS:
   - Operadores básicos: +, -, *, /, %
   - Operadores de asignación: +=, -=, *=, /=, %=
   - Operadores de incremento/decremento: ++, --
   - Precedencia de operadores
   - Ejemplos prácticos con diferentes escenarios
*/

#include <iostream> // 📚 Para entrada/salida
#include <cmath>    // 🧮 Para funciones matemáticas avanzadas

int main()
{
  std::cout << "=== 🧮 OPERADORES ARITMÉTICOS BÁSICOS ===" << std::endl;

  // 🔢 Variables para nuestros ejemplos
  int a = 10;
  int b = 3;
  double x = 15.5;
  double y = 4.2;

  // ➕ SUMA
  int suma_enteros = a + b;
  double suma_decimales = x + y;

  std::cout << "➕ SUMA:" << std::endl;
  std::cout << "   " << a << " + " << b << " = " << suma_enteros << std::endl;
  std::cout << "   " << x << " + " << y << " = " << suma_decimales << std::endl;
  std::cout << std::endl;

  // ➖ RESTA
  int resta_enteros = a - b;
  double resta_decimales = x - y;

  std::cout << "➖ RESTA:" << std::endl;
  std::cout << "   " << a << " - " << b << " = " << resta_enteros << std::endl;
  std::cout << "   " << x << " - " << y << " = " << resta_decimales << std::endl;
  std::cout << std::endl;

  // ✖️ MULTIPLICACIÓN
  int multiplicacion_enteros = a * b;
  double multiplicacion_decimales = x * y;

  std::cout << "✖️ MULTIPLICACIÓN:" << std::endl;
  std::cout << "   " << a << " * " << b << " = " << multiplicacion_enteros << std::endl;
  std::cout << "   " << x << " * " << y << " = " << multiplicacion_decimales << std::endl;
  std::cout << std::endl;

  // ➗ DIVISIÓN
  double division_enteros = static_cast<double>(a) / b; // 🔄 Conversión para obtener decimales
  double division_decimales = x / y;
  int division_entera = a / b; // ⚠️ División entera (sin decimales)

  std::cout << "➗ DIVISIÓN:" << std::endl;
  std::cout << "   " << a << " / " << b << " = " << division_enteros << " (con decimales)" << std::endl;
  std::cout << "   " << a << " / " << b << " = " << division_entera << " (división entera)" << std::endl;
  std::cout << "   " << x << " / " << y << " = " << division_decimales << std::endl;
  std::cout << std::endl;

  // 🔢 MÓDULO (Residuo de la división)
  int modulo = a % b; // ⚠️ Solo funciona con enteros

  std::cout << "🔢 MÓDULO (Residuo):" << std::endl;
  std::cout << "   " << a << " % " << b << " = " << modulo << std::endl;
  std::cout << "   (El residuo de dividir " << a << " entre " << b << ")" << std::endl;
  std::cout << std::endl;

  // 🎯 EJEMPLO PRÁCTICO: Sistema de estudiantes
  std::cout << "=== 🎓 EJEMPLO PRÁCTICO: GESTIÓN DE ESTUDIANTES ===" << std::endl;

  int estudiantes = 20; // 👥 Número inicial de estudiantes
  std::cout << "👥 Estudiantes iniciales: " << estudiantes << std::endl;

  // ➕ Llegan nuevos estudiantes
  estudiantes += 5; // Equivale a: estudiantes = estudiantes + 5
  std::cout << "➕ Después de inscribir 5 más: " << estudiantes << std::endl;

  // ➖ Algunos estudiantes se dan de baja
  estudiantes -= 2; // Equivale a: estudiantes = estudiantes - 2
  std::cout << "➖ Después de 2 bajas: " << estudiantes << std::endl;

  // ✖️ Se duplica el número (nueva sede)
  estudiantes *= 2; // Equivale a: estudiantes = estudiantes * 2
  std::cout << "✖️ Después de abrir nueva sede (duplicar): " << estudiantes << std::endl;

  // ➗ Se dividen en grupos
  double grupos = static_cast<double>(estudiantes) / 4;
  std::cout << "➗ Divididos en grupos de 4: " << grupos << " grupos" << std::endl;

  // 🔢 ¿Cuántos estudiantes sobran?
  int sobrantes = estudiantes % 4;
  std::cout << "🔢 Estudiantes que sobran: " << sobrantes << std::endl;
  std::cout << std::endl;

  // 🔄 OPERADORES DE INCREMENTO Y DECREMENTO
  std::cout << "=== 🔄 INCREMENTO Y DECREMENTO ===" << std::endl;

  int contador = 5;
  std::cout << "🔢 Contador inicial: " << contador << std::endl;

  // Pre-incremento (++variable)
  std::cout << "Pre-incremento (++contador): " << ++contador << std::endl; // Incrementa y luego muestra

  // Post-incremento (variable++)
  std::cout << "Post-incremento (contador++): " << contador++ << std::endl; // Muestra y luego incrementa
  std::cout << "Valor después del post-incremento: " << contador << std::endl;

  // Pre-decremento (--variable)
  std::cout << "Pre-decremento (--contador): " << --contador << std::endl;

  // Post-decremento (variable--)
  std::cout << "Post-decremento (contador--): " << contador-- << std::endl;
  std::cout << "Valor final del contador: " << contador << std::endl;
  std::cout << std::endl;

  // 🚀 EXPONENCIACIÓN (Potencias)
  std::cout << "=== 🚀 EXPONENCIACIÓN ===" << std::endl;

  int base = 2;
  int exponente = 3;

  // Método 1: Usando bucle (método manual)
  int resultado_manual = 1;
  for (int i = 0; i < exponente; ++i)
  {
    resultado_manual *= base;
  }

  // Método 2: Usando función pow() de cmath
  double resultado_pow = std::pow(base, exponente);

  std::cout << "🧮 " << base << " elevado a " << exponente << ":" << std::endl;
  std::cout << "   Método manual: " << resultado_manual << std::endl;
  std::cout << "   Usando pow(): " << resultado_pow << std::endl;
  std::cout << std::endl;

  // 🎯 EJEMPLO PRÁCTICO: Calculadora de interés compuesto
  std::cout << "=== 💰 CALCULADORA DE INTERÉS COMPUESTO ===" << std::endl;

  double capital_inicial = 1000.0; // 💰 $1000 iniciales
  double tasa_interes = 0.05;      // 📈 5% anual
  int años = 3;                    // ⏰ 3 años

  double capital_final = capital_inicial * std::pow(1 + tasa_interes, años);
  double ganancia = capital_final - capital_inicial;

  std::cout << "💰 Capital inicial: $" << capital_inicial << std::endl;
  std::cout << "📈 Tasa de interés: " << (tasa_interes * 100) << "% anual" << std::endl;
  std::cout << "⏰ Tiempo: " << años << " años" << std::endl;
  std::cout << "💵 Capital final: $" << capital_final << std::endl;
  std::cout << "🎉 Ganancia total: $" << ganancia << std::endl;

  return 0; // ✅ Programa terminado exitosamente
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🛒 Calculadora de compras:
   - Precio de 3 productos diferentes
   - Cantidad de cada producto
   - Calcular subtotal, impuestos (16%) y total

2. 🏃‍♂️ Calculadora de velocidad:
   - Distancia recorrida en metros
   - Tiempo en segundos
   - Calcular velocidad en m/s y km/h

3. 🎂 Calculadora de edad:
   - Año actual y año de nacimiento
   - Calcular edad exacta
   - Determinar cuántos días has vivido (aproximado)

4. 📐 Calculadora geométrica:
   - Área y perímetro de un rectángulo
   - Área y circunferencia de un círculo
   - Volumen de una esfera

💡 PRECEDENCIA DE OPERADORES (orden de ejecución):

1. 🔢 Paréntesis: ( )
2. 🚀 Exponenciación: pow()
3. ✖️➗ Multiplicación y División: *, /, %
4. ➕➖ Suma y Resta: +, -

Ejemplo: 2 + 3 * 4 = 2 + 12 = 14 (no 20)
Para cambiar el orden: (2 + 3) * 4 = 5 * 4 = 20

⚠️ CUIDADOS IMPORTANTES:

- División entre enteros da resultado entero: 7/2 = 3 (no 3.5)
- Para obtener decimales: 7.0/2 o static_cast<double>(7)/2
- El módulo (%) solo funciona con números enteros
- Cuidado con la división entre cero (causa error)

🚀 SIGUIENTE PASO:
Ve a 07_Conversion_Typos.cpp para aprender sobre conversión de tipos.
*/