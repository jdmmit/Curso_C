/*
🎯 ARCHIVO: 07_Variables_Basicas.cpp
📚 TEMA: Variables Básicas en C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Aprende a crear, usar y manipular variables en C++

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué son las variables y para qué sirven
   - Declaración vs asignación de variables
   - Cómo cambiar el valor de una variable
   - Mostrar variables en pantalla
   - Buenas prácticas para nombrar variables
   - Diferencia entre variables y constantes

📦 ¿QUÉ SON LAS VARIABLES?

Las variables son **contenedores** que almacenan datos que tu programa necesita 
manipular durante su ejecución. Piensa en ellas como **cajas etiquetadas** donde 
puedes guardar diferentes tipos de información.

🎯 **¿Para qué sirven las variables?**
- 📊 Almacenar datos del usuario (nombre, edad, puntuación)
- 🧮 Realizar cálculos matemáticos
- 🎮 Mantener el estado del programa (vidas, nivel, progreso)
- 📝 Procesar información (listas de tareas, inventarios)
- 🔄 Controlar el flujo del programa

🏗️ ANATOMÍA DE UNA VARIABLE

Una variable tiene tres componentes principales:

```cpp
int edad = 25;
│   │    │
│   │    └── 📥 VALOR (lo que contiene la caja)
│   └─────── 🏷️ NOMBRE (etiqueta de la caja)
└─────────── 📦 TIPO (qué tipo de datos puede contener)
```

📝 DECLARACIÓN VS ASIGNACIÓN

🔍 **Declaración**: Crear la variable (preparar la caja)
```cpp
int edad;  // 📦 Creamos una caja llamada "edad" para números enteros
```

📥 **Asignación**: Darle un valor (poner algo en la caja)
```cpp
edad = 18;  // 📥 Ponemos el número 18 en la caja "edad"
```

⚡ **Declaración + Asignación** (en una línea):
```cpp
int edad = 18;  // 📦📥 Creamos la caja y le ponemos valor al mismo tiempo
```

💻 PROGRAMA PRÁCTICO: TRABAJANDO CON VARIABLES
*/

#include <iostream>  // 📚 Biblioteca para entrada/salida

using namespace std; // 🏠 Espacio de nombres estándar

int main()
{
    // 🎉 Mensaje de bienvenida
    cout << "🎯 ¡APRENDIENDO VARIABLES EN C++!" << endl;
    cout << "=================================" << endl;
    cout << endl;
    
    // 📦 DECLARACIÓN DE VARIABLES
    cout << "📦 PASO 1: DECLARANDO VARIABLES" << endl;
    
    int edad;           // 📦 Caja para números enteros
    cout << "✅ Variable 'edad' declarada (tipo int)" << endl;
    
    // 📥 ASIGNACIÓN DE VALORES
    cout << endl << "📥 PASO 2: ASIGNANDO VALORES" << endl;
    
    edad = 0;           // 📥 Valor inicial
    cout << "✅ Variable 'edad' inicializada con valor: " << edad << endl;
    
    // 🔄 CAMBIAR EL VALOR DE UNA VARIABLE
    cout << endl << "🔄 PASO 3: CAMBIANDO VALORES" << endl;
    
    cout << "📊 Valor actual de edad: " << edad << endl;
    
    edad = 18;          // 🔄 Cambiamos el valor
    cout << "🔄 Cambiamos edad a: " << edad << endl;
    
    edad = 25;          // 🔄 Cambiamos otra vez
    cout << "🔄 Ahora edad es: " << edad << endl;
    
    edad = 30;          // 🔄 Y otra vez más
    cout << "🔄 Finalmente edad es: " << edad << endl;
    
    // 📊 EJEMPLO PRÁCTICO: INFORMACIÓN PERSONAL
    cout << endl << "👤 EJEMPLO PRÁCTICO: INFORMACIÓN PERSONAL" << endl;
    cout << "=========================================" << endl;
    
    // 📦📥 Declaración y asignación en una línea
    int año_nacimiento = 1995;
    int año_actual = 2024;
    int edad_calculada = año_actual - año_nacimiento;
    
    cout << "📅 Año de nacimiento: " << año_nacimiento << endl;
    cout << "📅 Año actual: " << año_actual << endl;
    cout << "🎂 Edad calculada: " << edad_calculada << " años" << endl;
    
    // 🔄 SIMULANDO CAMBIOS EN EL TIEMPO
    cout << endl << "⏰ SIMULANDO EL PASO DEL TIEMPO" << endl;
    cout << "===============================" << endl;
    
    cout << "🎂 Edad actual: " << edad_calculada << " años" << endl;
    
    // Cumpleaños!
    edad_calculada = edad_calculada + 1;  // 🎉 Cumplimos años
    cout << "🎉 ¡Feliz cumpleaños! Ahora tienes: " << edad_calculada << " años" << endl;
    
    // Pasan 5 años más
    edad_calculada = edad_calculada + 5;  // ⏰ Pasan 5 años
    cout << "⏰ Después de 5 años más: " << edad_calculada << " años" << endl;
    
    // 🎯 EJEMPLO: CONTADOR DE PUNTOS EN UN JUEGO
    cout << endl << "🎮 EJEMPLO: CONTADOR DE PUNTOS" << endl;
    cout << "==============================" << endl;
    
    int puntos = 0;     // 🎯 Empezamos con 0 puntos
    cout << "🎮 Puntos iniciales: " << puntos << endl;
    
    puntos = puntos + 100;  // 🏆 Ganamos 100 puntos
    cout << "🏆 Después de completar nivel 1: " << puntos << " puntos" << endl;
    
    puntos = puntos + 250;  // 🌟 Ganamos 250 puntos más
    cout << "🌟 Después de completar nivel 2: " << puntos << " puntos" << endl;
    
    puntos = puntos - 50;   // 💔 Perdemos 50 puntos
    cout << "💔 Después de perder una vida: " << puntos << " puntos" << endl;
    
    // 🧮 EJEMPLO: CALCULADORA SIMPLE
    cout << endl << "🧮 EJEMPLO: CALCULADORA SIMPLE" << endl;
    cout << "===============================" << endl;
    
    int numero1 = 15;
    int numero2 = 7;
    int resultado;      // 📦 Variable para almacenar el resultado
    
    cout << "🔢 Primer número: " << numero1 << endl;
    cout << "🔢 Segundo número: " << numero2 << endl;
    cout << endl;
    
    resultado = numero1 + numero2;
    cout << "➕ Suma: " << numero1 << " + " << numero2 << " = " << resultado << endl;
    
    resultado = numero1 - numero2;
    cout << "➖ Resta: " << numero1 << " - " << numero2 << " = " << resultado << endl;
    
    resultado = numero1 * numero2;
    cout << "✖️ Multiplicación: " << numero1 << " × " << numero2 << " = " << resultado << endl;
    
    // 📊 RESUMEN FINAL
    cout << endl << "📊 RESUMEN DE LO APRENDIDO" << endl;
    cout << "==========================" << endl;
    cout << "✅ Cómo declarar variables" << endl;
    cout << "✅ Cómo asignar valores" << endl;
    cout << "✅ Cómo cambiar valores durante la ejecución" << endl;
    cout << "✅ Cómo usar variables en cálculos" << endl;
    cout << "✅ Cómo mostrar variables en pantalla" << endl;
    
    return 0;  // ✅ Programa terminado exitosamente
}

/*
🎯 CONCEPTOS CLAVE SOBRE VARIABLES

💡 **¿Por qué son importantes las variables?**

Sin variables, tus programas serían muy limitados:
❌ Sin variables: Solo podrías mostrar texto fijo
✅ Con variables: Puedes procesar datos, hacer cálculos, interactuar con usuarios

🔄 **La naturaleza "variable" de las variables**:

Las variables se llaman así porque su valor puede VARIAR (cambiar) durante la ejecución:

```cpp
int vidas = 3;      // 🎮 Empezamos con 3 vidas
cout << vidas;      // Muestra: 3

vidas = vidas - 1;  // 💔 Perdemos una vida
cout << vidas;      // Muestra: 2

vidas = vidas - 1;  // 💔 Perdemos otra vida
cout << vidas;      // Muestra: 1
```

📝 **Operaciones comunes con variables**:

```cpp
// Asignación simple
edad = 25;

// Incrementar valor
edad = edad + 1;    // Forma larga
edad++;             // Forma corta (veremos esto después)

// Decrementar valor
edad = edad - 1;    // Forma larga
edad--;             // Forma corta

// Operaciones matemáticas
total = precio * cantidad;
promedio = suma / contador;
resto = dividendo % divisor;
```

🏷️ REGLAS PARA NOMBRAR VARIABLES

✅ **PERMITIDO**:
- `edad` (descriptivo y claro)
- `nombre_usuario` (con guión bajo)
- `puntos2024` (con números al final)
- `_contador` (empezar con guión bajo)
- `miEdad` (camelCase)

❌ **NO PERMITIDO**:
- `2edad` (no puede empezar con número)
- `mi edad` (no puede tener espacios)
- `int` (es una palabra reservada)
- `mi-edad` (no puede tener guiones)
- `edad@usuario` (no puede tener símbolos especiales)

🎯 **Convenciones recomendadas**:
- 📝 Usa nombres descriptivos: `edad` mejor que `e`
- 🐍 snake_case: `nombre_usuario`
- 🐪 camelCase: `nombreUsuario`
- 📏 No muy largos: `edad` mejor que `edadDelUsuarioEnAños`

🔍 DIFERENCIA ENTRE VARIABLES Y CONSTANTES

📦 **Variables** (pueden cambiar):
```cpp
int puntos = 100;
puntos = 200;       // ✅ Permitido
puntos = puntos + 50; // ✅ Permitido
```

🔒 **Constantes** (NO pueden cambiar):
```cpp
const int VIDAS_MAXIMAS = 3;
VIDAS_MAXIMAS = 5;  // ❌ ERROR: no se puede cambiar
```

💡 **¿Cuándo usar cada una?**
- 📦 Variables: Para datos que cambian (puntuación, edad, contador)
- 🔒 Constantes: Para valores fijos (PI, velocidad de la luz, límites del juego)

🆘 ERRORES COMUNES Y CÓMO EVITARLOS

❌ **Error 1: Usar variable sin declararla**:
```cpp
edad = 25;  // ❌ ERROR: 'edad' no está declarada
```
✅ **Solución**:
```cpp
int edad;   // ✅ Primero declarar
edad = 25;  // ✅ Luego asignar
```

❌ **Error 2: Usar variable sin inicializar**:
```cpp
int edad;
cout << edad;  // ❌ Valor impredecible
```
✅ **Solución**:
```cpp
int edad = 0;  // ✅ Siempre inicializar
cout << edad;  // ✅ Muestra: 0
```

❌ **Error 3: Nombres confusos**:
```cpp
int x = 25;    // ❌ ¿Qué representa x?
int a = x + 5; // ❌ ¿Qué es a?
```
✅ **Solución**:
```cpp
int edad = 25;           // ✅ Claro y descriptivo
int edad_en_5_años = edad + 5; // ✅ Muy descriptivo
```

🎯 EJERCICIOS PARA PRACTICAR:

1. 👤 **Información personal**:
   - Crea variables para tu nombre, edad, ciudad
   - Muestra toda la información en pantalla
   - Calcula en qué año naciste

2. 🛒 **Simulador de compras**:
   - Crea variables para precio y cantidad
   - Calcula el total a pagar
   - Simula un descuento del 10%

3. 🎮 **Contador de juego**:
   - Empieza con 0 puntos
   - Simula ganar puntos en diferentes niveles
   - Simula perder puntos por errores
   - Muestra el puntaje final

4. 📊 **Calculadora de promedio**:
   - Crea variables para 3 calificaciones
   - Calcula el promedio
   - Muestra si aprobaste (promedio >= 70)

5. ⏰ **Calculadora de tiempo**:
   - Convierte minutos a horas y minutos
   - Ejemplo: 150 minutos = 2 horas y 30 minutos

💡 **Consejos para principiantes**:

🎯 **Empieza simple**:
- Usa variables para almacenar números simples
- Practica cambiar sus valores
- Experimenta con diferentes nombres

🧪 **Experimenta**:
- Cambia los valores en el programa de ejemplo
- Agrega tus propias variables
- Prueba diferentes cálculos

📝 **Documenta tu código**:
- Agrega comentarios explicando qué hace cada variable
- Usa nombres descriptivos
- Organiza tu código en secciones

🔄 **Practica regularmente**:
- Las variables son la base de TODA la programación
- Mientras más practiques, más natural se volverá
- Cada programa que escribas usará variables

🚀 SIGUIENTE PASO:

¡Felicidades! Ahora entiendes uno de los conceptos más fundamentales de la programación.
Las variables son como los ladrillos con los que construirás todos tus programas futuros.

Ve al siguiente archivo para aprender sobre diferentes tipos de datos que puedes 
almacenar en tus variables (números, texto, valores verdadero/falso, etc.).

¡Sigue practicando y experimentando! 🎉
*/