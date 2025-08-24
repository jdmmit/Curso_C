/*
🎯 ARCHIVO: 06_Uniones_y_Enumeraciones.cpp
📚 TEMA: Uniones y Enumeraciones en C++
🎓 NIVEL: Intermedio
📝 DESCRIPCIÓN: Aprende a usar uniones y enumeraciones para manejo eficiente de datos

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué son y cómo funcionan las uniones
   - Uso eficiente de memoria con uniones
   - Creación y uso de enumeraciones
   - Conversión entre tipos en uniones
   - Aplicaciones prácticas de ambos conceptos

🔄 UNIONES EN C++

Las uniones son estructuras especiales que:
- 📦 Almacenan diferentes tipos de valores en el mismo espacio de memoria
- ⚡ Solo mantienen uno de esos valores a la vez
- 💾 Gestionan eficientemente el uso de memoria
- 🎯 Útiles cuando recursos son limitados

🏗️ SINTAXIS DE UNIONES

```cpp
union NombreUnion {
    tipo1 miembro1;
    tipo2 miembro2;
    tipo3 miembro3;
    // ... más miembros
};
```

⚠️ **Importante**: Todos los miembros comparten el mismo espacio de memoria.

💻 PROGRAMA PRÁCTICO: UNIONES Y ENUMERACIONES
*/

#include <iostream>
using namespace std;

int main() {
    cout << "🎯 UNIONES Y ENUMERACIONES EN C++" << endl;
    cout << "===============================" << endl << endl;
    
    // 🔄 UNIONES
    cout << "🔄 UNIONES:" << endl;
    union NumeroLetra {
        int numero;
        char letra;
    };
    
    NumeroLetra x;
    x.letra = 'A';
    
    cout << "   Letra asignada: " << x.letra << endl;
    cout << "   Como número (valor en memoria): " << x.numero << endl;
    cout << "   Como letra (con conversión): " << x.letra << endl;
    cout << "   Código ASCII: " << (int)x.letra << endl;
    cout << "   Dirección de memoria: " << &x << endl << endl;
    
    // 🔄 Cambiar el valor
    x.numero = 66;  // Código ASCII de 'B'
    cout << "   Número asignado: " << x.numero << endl;
    cout << "   Como letra: " << x.letra << endl;
    cout << "   Como número: " << (int)x.letra << endl << endl;
    
    // 🔢 ENUMERACIONES
    cout << "🔢 ENUMERACIONES:" << endl;
    enum DiasSemana {
        lunes,      // 0
        martes,     // 1
        miercoles,  // 2
        jueves,     // 3
        viernes     // 4
    };
    
    DiasSemana dia = martes;
    
    cout << "   Día almacenado: " << dia << endl;
    cout << "   Día como entero: " << (int)dia << endl;
    
    // 📋 Mostrar todos los días
    cout << "\n   Todos los días de la semana:" << endl;
    cout << "   - Lunes: " << lunes << endl;
    cout << "   - Martes: " << martes << endl;
    cout << "   - Miércoles: " << miercoles << endl;
    cout << "   - Jueves: " << jueves << endl;
    cout << "   - Viernes: " << viernes << endl;
    
    return 0;
}

/*
💾 FUNCIONAMIENTO DE UNIONES

Las uniones comparten el mismo espacio de memoria:

```cpp
union Ejemplo {
    int entero;     // 4 bytes
    char caracter;  // 1 byte
    float decimal;  // 4 bytes
};
```

📊 **Tamaño de la unión**: El tamaño es el del miembro más grande (4 bytes en este caso).

🧠 **Representación en memoria**:
```
Dirección: 0x1000  0x1001  0x1002  0x1003
Contenido: [     espacio compartido      ]
           ↑ Todos los miembros usan estas direcciones
```

🎯 VENTAJAS DE UNIONES

✅ **Eficiencia de memoria**:
- ⚡ Mismo espacio para diferentes tipos
- 💾 Ahorro significativo en arrays grandes
- 🚀 Acceso rápido a datos

✅ **Flexibilidad**:
- 🔄 Cambio entre representaciones
- 🔧 Interpretación múltiple de datos
- 🎯 Útil para protocolos de comunicación

⚠️ PRECAUCIONES CON UNIONES

❌ **Errores comunes**:
```cpp
union Datos {
    int numero;
    char letra;
};

Datos d;
d.numero = 65;
cout << d.letra;  // ✅ 'A' (código ASCII)
d.letra = 'B';
cout << d.numero; // ✅ 66 (código ASCII)
```

✅ **Uso correcto**:
- 🎯 Solo usar un miembro a la vez
- 🔍 Conocer el tipo actual almacenado
- 📝 Documentar el propósito de cada uso

🔢 ENUMERACIONES EN C++

Las enumeraciones definen conjuntos de valores relacionados:

```cpp
enum Colores {
    rojo,       // 0
    verde,      // 1
    azul        // 2
};
```

🎨 **Ventajas**:
- 📝 Nombres descriptivos
- 🔢 Valores automáticos
- 🐛 Menos errores de tipeo
- 🎯 Código más legible

🔧 ENUMERACIONES CON VALORES PERSONALIZADOS

```cpp
enum Prioridad {
    baja = 1,
    media = 5,
    alta = 10
};
```

🎯 EJEMPLO AVANZADO: UNIONES Y ENUMS COMBINADOS
*/

void ejemplo_avanzado() {
    cout << "\n🎯 EJEMPLO AVANZADO: UNIONES Y ENUMS" << endl;
    cout << "===================================" << endl;
    
    // 🎯 Unión con enumeración
    enum TipoDato {
        ENTERO,
        FLOTANTE,
        CARACTER
    };
    
    union Valor {
        int entero;
        float flotante;
        char caracter;
    };
    
    struct DatoTipado {
        TipoDato tipo;
        Valor valor;
    };
    
    // 📦 Usar la estructura
    DatoTipado dato;
    dato.tipo = ENTERO;
    dato.valor.entero = 42;
    
    cout << "   Dato entero: " << dato.valor.entero << endl;
    
    // 🔄 Cambiar tipo
    dato.tipo = FLOTANTE;
    dato.valor.flotante = 3.14f;
    cout << "   Dato flotante: " << dato.valor.flotante << endl;
}

/*
📊 APLICACIONES PRÁCTICAS

1️⃣ **Protocolos de comunicación**:
```cpp
union PaqueteDatos {
    int id_dispositivo;
    float temperatura;
    char comando[4];
};
```

2️⃣ **Sistemas embebidos**:
```cpp
union RegistroHardware {
    uint8_t bytes[4];
    uint32_t valor_completo;
};
```

3️⃣ **Juegos**:
```cpp
enum TipoPowerUp {
    VELOCIDAD,
    VIDA_EXTRA,
    ARMAMENTO
};

union PowerUpValor {
    int puntos;
    float duracion;
    bool activo;
};
```

🎯 EJERCICIOS PARA PRACTICAR:

1. 🔄 **Unión básica**:
   - Crea unión con int y float
   - Asigna valores y observa representaciones
   - Experimenta con conversiones

2. 🔢 **Enumeración personalizada**:
   - Crea enum para meses del año
   - Asigna valores específicos
   - Usa en switch statements

3. 🎯 **Combinación avanzada**:
   - Crea estructura con unión y enum
   - Implementa función para mostrar datos
   - Maneja diferentes tipos según el enum

4. 📦 **Aplicación práctica**:
   - Diseña unión para representar IP
   - Crea funciones para convertir formatos
   - Implementa validación básica

💡 CONSEJOS PARA USO EFICIENTE:

✅ **Buenas prácticas con uniones**:
- 🎯 Documentar qué miembro está activo
- 🔍 Usar enums para rastrear tipo actual
- 🧹 Inicializar correctamente
- 📝 Evitar conversiones peligrosas

✅ **Buenas prácticas con enums**:
- 📝 Nombres en mayúsculas o snake_case
- 🔢 Valores lógicos y consistentes
- 🎯 Usar en switch para mejor legibilidad
- 📏 Evitar valores mágicos en código

❌ **Errores a evitar**:
- 🚫 Usar miembros no inicializados
- 🔥 Confundir tipos en uniones
- 📉 Usar valores fuera de rango en enums
- 🚫 No documentar propósito de uniones complejas

🚀 SIGUIENTE PASO:

Estos conceptos te preparan para:
- 📚 Estructuras de datos avanzadas
- 🎮 Desarrollo de juegos
- 🔧 Programación de sistemas embebidos
- 💪 Dominio completo de C++

¡Sigue explorando uniones y enumeraciones!
*/