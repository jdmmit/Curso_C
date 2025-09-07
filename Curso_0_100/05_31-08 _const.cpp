/*
  Tema: const
  Marca de tiempo: 31:08
  Archivo generado: 2025-09-06
*/
/*
🎯 ARCHIVO: 03_const.cpp
📚 TEMA: Constantes en C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Aprende a usar variables que no pueden cambiar su valor (constantes)

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué son las constantes y cuándo usarlas
   - Diferencia entre variables y constantes
   - La palabra clave 'const'
   - Buenas prácticas con constantes
   - Ejemplo práctico: cálculo de circunferencia
*/

#include <iostream> // 📚 Para entrada/salida

int main()
{
   // 🔒 CONSTANTES: Variables que NO pueden cambiar
   // Una vez que les asignas un valor, ese valor es permanente

   // 🥧 PI es un valor matemático que nunca cambia
   const double PI = 3.14159; // 🔒 Esta es una constante

   // 📏 Variables normales que SÍ pueden cambiar
   double radio = 10; // 📐 Radio del círculo en centímetros

   // 🧮 Calculamos la circunferencia usando la fórmula: 2 * π * r
   double circunferencia = 2 * PI * radio;

   // 🖥️ Mostramos el resultado
   std::cout << "=== 🔵 CÁLCULO DE CIRCUNFERENCIA ===" << std::endl;
   std::cout << "Radio: " << radio << " cm" << std::endl;
   std::cout << "PI: " << PI << std::endl;
   std::cout << "Circunferencia: " << circunferencia << " cm" << std::endl;
   std::cout << std::endl;

   // 🔄 Podemos cambiar el radio y recalcular
   radio = 5;                       // ✅ Esto está permitido (radio no es constante)
   circunferencia = 2 * PI * radio; // 🔄 Recalculamos

   std::cout << "=== 🔵 NUEVO CÁLCULO ===" << std::endl;
   std::cout << "Nuevo radio: " << radio << " cm" << std::endl;
   std::cout << "Nueva circunferencia: " << circunferencia << " cm" << std::endl;
   std::cout << std::endl;

   // ❌ Si intentáramos hacer esto, daría ERROR:
   // PI = 3.14;  // ❌ ERROR: no puedes cambiar una constante

   // 🌟 MÁS EJEMPLOS DE CONSTANTES ÚTILES
   const int DIAS_SEMANA = 7;              // 📅 Los días de la semana nunca cambian
   const double VELOCIDAD_LUZ = 299792458; // 💡 Velocidad de la luz (m/s)
   const char GRADO_CELSIUS = 'C';         // 🌡️ Símbolo de grados Celsius
   const bool ES_MAYOR_EDAD = true;        // ✅ Estado que no cambiará en el programa

   std::cout << "=== 🌟 OTRAS CONSTANTES ÚTILES ===" << std::endl;
   std::cout << "Días en una semana: " << DIAS_SEMANA << std::endl;
   std::cout << "Velocidad de la luz: " << VELOCIDAD_LUZ << " m/s" << std::endl;
   std::cout << "Símbolo de temperatura: " << GRADO_CELSIUS << std::endl;
   std::cout << "Es mayor de edad: " << ES_MAYOR_EDAD << std::endl;

   return 0; // ✅ Programa terminado exitosamente
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🏠 Crea constantes para:
   - Número de habitaciones en tu casa
   - Tu año de nacimiento
   - El número de ruedas de un carro

2. 🧮 Usa la constante PI para calcular:
   - El área de un círculo (π * r²)
   - El volumen de una esfera (4/3 * π * r³)

3. 🛒 Crea un programa que calcule el precio con impuestos:
   - Constante para el porcentaje de impuesto (ej: 0.16 para 16%)
   - Variable para el precio base
   - Calcula el precio final

💡 CUÁNDO USAR CONSTANTES:

✅ USA const CUANDO:
- El valor nunca va a cambiar (PI, días de la semana, etc.)
- Quieres evitar cambios accidentales
- El valor representa una configuración fija
- Quieres hacer tu código más legible

❌ NO uses const CUANDO:
- El valor necesita cambiar durante el programa
- Estás aprendiendo y experimentando con valores

🎨 CONVENCIONES DE NOMBRES:
- Constantes suelen escribirse en MAYÚSCULAS: PI, DIAS_SEMANA
- Usa guiones bajos para separar palabras: VELOCIDAD_LUZ
- Esto hace que sea fácil identificar constantes en tu código

🚀 SIGUIENTE PASO:
Ve a 04_Namespace.cpp para aprender a organizar tu código.
*/