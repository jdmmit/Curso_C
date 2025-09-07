/*
  Tema: Variables
  Marca de tiempo: 16:34
  Archivo generado: 2025-09-06
*/
/*
🎯 ARCHIVO: 02_Variables.cpp
📚 TEMA: Variables y Tipos de Datos en C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Aprende a almacenar y usar diferentes tipos de datos en C++

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué son las variables y para qué sirven
   - Tipos de datos fundamentales (int, double, float, char, bool, string)
   - Declaración vs Asignación
   - Cómo mostrar variables en pantalla
   - Buenas prácticas para nombrar variables
*/

#include <iostream> // 📚 Para entrada/salida (cout, cin)
#include <string>   // 📝 Para usar el tipo string

int main()
{
   // 🔢 NÚMEROS ENTEROS (int)
   // Las variables int almacenan números sin decimales

   int x; // 📦 Declaración: creamos una "caja" llamada x
   x = 5; // 📥 Asignación: ponemos el valor 5 en la caja

   int y = 10;       // 📦📥 Declaración + Asignación en una línea
   int suma = x + y; // 🧮 Podemos hacer operaciones matemáticas

   // 📅 Ejemplos prácticos con enteros
   int edad = 43;  // 👤 Edad de una persona
   int año = 2025; // 📅 Año actual
   int dia = 14;   // 📆 Día del mes

   // 🖥️ Mostramos los valores en pantalla
   std::cout << "=== 🔢 NÚMEROS ENTEROS ===" << std::endl;
   std::cout << "x = " << x << std::endl;
   std::cout << "y = " << y << std::endl;
   std::cout << "suma = " << suma << std::endl;
   std::cout << "edad = " << edad << " años" << std::endl;
   std::cout << "año = " << año << std::endl;
   std::cout << "dia = " << dia << std::endl;
   std::cout << std::endl; // 📏 Línea en blanco para separar secciones

   // 🔢 NÚMEROS DECIMALES (double y float)
   // double: mayor precisión (más decimales)
   // float: menor precisión (menos decimales)

   double precio = 10.99; // 💰 Precio de un producto
   double promedio = 2.5; // 📊 Promedio de calificaciones

   // ⚠️ Nota: float tiene menos precisión que double
   float temperatura = 25.3659698369875695569569; // 🌡️ Solo mostrará algunos decimales

   std::cout << "=== 🔢 NÚMEROS DECIMALES ===" << std::endl;
   std::cout << "precio = $" << precio << std::endl;
   std::cout << "promedio = " << promedio << std::endl;
   std::cout << "temperatura = " << temperatura << "°C" << std::endl;
   std::cout << std::endl;

   // 🔤 CARACTERES (char)
   // Almacenan UN solo carácter (letra, número, símbolo)
   // ¡Importante: van entre comillas simples ' '!

   char calificacion = 'A'; // 🎓 Calificación escolar
   char inicial = 'J';      // 👤 Primera letra del nombre

   std::cout << "=== 🔤 CARACTERES ===" << std::endl;
   std::cout << "calificacion = " << calificacion << std::endl;
   std::cout << "inicial = " << inicial << std::endl;
   std::cout << std::endl;

   // ✅❌ BOOLEANOS (bool)
   // Solo pueden ser true (verdadero) o false (falso)
   // Útiles para condiciones y estados

   bool estudiante = true; // ✅ Es estudiante
   bool encendido = false; // ❌ Está apagado

   std::cout << "=== ✅❌ BOOLEANOS ===" << std::endl;
   std::cout << "¿Es estudiante? " << estudiante << std::endl; // Mostrará 1
   std::cout << "¿Está encendido? " << encendido << std::endl; // Mostrará 0
   std::cout << std::endl;

   // 💡 En C++: true se muestra como 1, false se muestra como 0

   // 📝 CADENAS DE TEXTO (string)
   // Almacenan palabras, frases o cualquier texto
   // ¡Van entre comillas dobles " "!

   std::string nombre = "Juan";          // 👤 Nombre de persona
   std::string mensaje = "¡Hola mundo!"; // 💬 Un mensaje

   std::cout << "=== 📝 CADENAS DE TEXTO ===" << std::endl;
   std::cout << "nombre = " << nombre << std::endl;
   std::cout << "mensaje = " << mensaje << std::endl;
   std::cout << "Saludo personalizado: Hola " << nombre << "!" << std::endl;

   return 0; // ✅ Programa terminado exitosamente
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 👤 Crea variables con tu información personal:
   - Tu nombre (string)
   - Tu edad (int)
   - Tu altura en metros (double)
   - La inicial de tu apellido (char)
   - Si tienes mascota (bool)

2. 🧮 Crea dos números enteros y calcula:
   - Su suma
   - Su resta
   - Su multiplicación

3. 🛒 Simula una compra:
   - Precio de un producto (double)
   - Cantidad a comprar (int)
   - Total a pagar (precio * cantidad)

💡 REGLAS IMPORTANTES PARA NOMBRES DE VARIABLES:
✅ Pueden empezar con letra o guión bajo: edad, _contador
❌ NO pueden empezar con número: 2edad (incorrecto)
✅ Pueden contener letras, números y guiones bajos: edad_usuario, precio2
❌ NO pueden tener espacios: mi edad (incorrecto)
✅ Distingue mayúsculas y minúsculas: Edad ≠ edad
✅ Usa nombres descriptivos: edad (bueno) vs x (menos claro)

🚀 SIGUIENTE PASO:
Ve a 03_const.cpp para aprender sobre variables que no cambian.
*/