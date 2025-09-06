/*
🎯 ARCHIVO: 01_Hola_mundo.cpp
📚 TEMA: Tu primer programa en C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Este es tu primer contacto con C++. Aprenderás la estructura básica
               de un programa y cómo mostrar texto en pantalla.

💡 CONCEPTOS QUE APRENDERÁS:
   - Estructura básica de un programa C++
   - Uso de #include para bibliotecas
   - La función main()
   - std::cout para mostrar texto
   - Diferentes formas de hacer saltos de línea
   - Comentarios de una línea y múltiples líneas
*/

#include <iostream> // 📚 Incluimos la biblioteca para entrada/salida

int main() // 🚀 Función principal - aquí empieza tu programa
{
  // 🎉 ¡Tu primer mensaje al mundo!
  std::cout << "Hola Mundo! " << std::endl;

  // 💻 Saludando específicamente a C++
  std::cout << "Hola C++" << "\n";

  // 🍕 Un mensaje personal (¡puedes cambiarlo por lo que te guste!)
  std::cout << "Me Gusta la Pizza";

  return 0; // ✅ Le decimos al sistema que todo salió bien
}

// 📝 TIPOS DE COMENTARIOS EN C++:

// 👆 Este es un comentario de una sola línea
// Puedes escribir notas, explicaciones o recordatorios aquí
// El compilador ignora todo lo que esté después de //

/*
🔽 Este es un comentario de múltiples líneas
Puedes escribir párrafos completos aquí
Es útil para explicaciones largas
o para documentar tu código
*/

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🔄 Cambia "Me Gusta la Pizza" por tu comida favorita
2. ➕ Agrega una línea más con tu nombre
3. 🎨 Experimenta usando solo \n en lugar de std::endl
4. 📝 Agrega tus propios comentarios explicando cada línea

💡 TIPS IMPORTANTES:
- std::endl hace un salto de línea Y limpia el buffer
- \n solo hace un salto de línea (más rápido)
- Siempre incluye return 0; al final de main()
- Los comentarios son tu mejor amigo para recordar qué hace tu código

🚀 SIGUIENTE PASO:
Una vez que entiendas este programa, ve a 02_Variables.cpp
para aprender sobre almacenar datos en tu programa.
*/