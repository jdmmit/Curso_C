/*
🎯 ARCHIVO: 03_Punteros_y_Caracteres.cpp
📚 TEMA: Punteros y Variables de Carácter
🎓 NIVEL: Intermedio
📝 DESCRIPCIÓN: Aprende a manipular variables de carácter usando punteros

💡 CONCEPTOS QUE APRENDERÁS:
   - Cómo crear y usar punteros para variables carácter
   - Conversión de direcciones de memoria
   - Acceso a valores mediante punteros
   - Representación de direcciones en formato legible
   - Operador de desreferenciación

🔤 PUNTEROS CON VARIABLES CARÁCTER

Los punteros son especialmente útiles para trabajar con variables de tipo carácter:
- 🔤 Manipulación de cadenas de texto
- 📦 Acceso eficiente a caracteres individuales
- 🔧 Operaciones avanzadas con texto
- ⚡ Rendimiento optimizado

⌨️ DECLARACIÓN Y USO BÁSICO

```cpp
char letra = 'A';           // Variable carácter
char* puntero = &letra;     // Puntero a carácter
char valor = *puntero;      // Acceso al valor
```

💻 PROGRAMA PRÁCTICO: PUNTEROS Y CARACTERES
*/

#include <iostream>
using namespace std;

int main() {
    cout << "🎯 PUNTEROS Y VARIABLES CARÁCTER" << endl;
    cout << "===============================" << endl << endl;
    
    // 📝 Variable carácter
    char letra = 'A';
    cout << "🔤 Variable carácter:" << endl;
    cout << "   Letra: " << letra << endl;
    cout << "   Código ASCII: " << (int)letra << endl;
    cout << "   Dirección en memoria: " << (void*)&letra << endl << endl;
    
    // 🔍 Puntero a carácter
    char* puntero = &letra;
    cout << "🔍 Puntero a carácter:" << endl;
    cout << "   Dirección almacenada: " << (void*)puntero << endl;
    cout << "   Valor apuntado: " << *puntero << endl;
    cout << "   Código ASCII vía puntero: " << (int)*puntero << endl << endl;
    
    // 🔄 Modificación a través del puntero
    *puntero = 'B';
    cout << "🔄 Modificación a través del puntero:" << endl;
    cout << "   Nueva letra: " << letra << endl;
    cout << "   Nueva letra vía puntero: " << *puntero << endl << endl;
    
    // 🔢 Mostrar direcciones en formato entero
    cout << "🔢 Direcciones en formato hexadecimal:" << endl;
    cout << "   Dirección de letra: " << &letra << endl;
    cout << "   Dirección almacenada: " << puntero << endl;
    cout << "   ¿Son iguales? " << (&letra == puntero ? "Sí" : "No") << endl;
    
    return 0;
}

/*
🎯 CONVERSIÓN DE DIRECCIONES DE MEMORIA

Las direcciones de memoria a veces se muestran en formatos confusos:
- 🎨 Interpretación como caracteres (formato por defecto)
- 🔢 Conversión a formato entero hexadecimal

🔢 **Conversión a entero**:
```cpp
char letra = 'A';
cout << (void*)&letra << endl;  // Formato legible
```

🎨 **Interpretación como caracteres**:
```cpp
char letra = 'A';
cout << &letra << endl;         // Puede mostrar caracteres extraños
```

🔧 **Métodos de conversión**:
```cpp
// Método 1: Casting a void*
cout << (void*)&letra << endl;

// Método 2: Casting a int*
cout << (int*)&letra << endl;

// Método 3: Uso de reinterpret_cast
cout << reinterpret_cast<void*>(&letra) << endl;
```

🎯 OPERADOR DE DESREFERENCIACIÓN (*)

El asterisco (*) tiene dos usos principales:

1️⃣ **Declaración de puntero**:
```cpp
char* puntero;  // * indica que es un puntero
```

2️⃣ **Acceso al valor apuntado**:
```cpp
char valor = *puntero;  // * accede al valor en la dirección
```

📊 EJEMPLO COMPLETO: MANIPULACIÓN AVANZADA
*/

void ejemplo_manipulacion_avanzada() {
    cout << "\n🎯 EJEMPLO DE MANIPULACIÓN AVANZADA" << endl;
    cout << "==================================" << endl;
    
    char texto[] = {'H', 'o', 'l', 'a', '\0'};
    char* ptr = texto;
    
    cout << "🔤 Texto original: " << texto << endl;
    cout << "🔍 Primer carácter: " << *ptr << endl;
    cout << "🔍 Segundo carácter: " << *(ptr + 1) << endl;
    cout << "🔍 Tercer carácter: " << *(ptr + 2) << endl;
    
    // 🔄 Modificar caracteres
    *(ptr + 1) = 'U';
    *(ptr + 3) = 'I';
    cout << "🔤 Texto modificado: " << texto << endl;
}

/*
⚠️ PRECAUCIONES CON PUNTEROS A CARACTERES

❌ **Errores comunes**:
```cpp
char* ptr = "Hola";  // Cadena literal (solo lectura)
*ptr = 'h';          // ❌ ERROR: Violación de segmento
```

✅ **Forma correcta**:
```cpp
char texto[] = "Hola";  // Array modificable
char* ptr = texto;      // Puntero al array
*ptr = 'h';             // ✅ Permitido
```

🎯 DIFERENCIAS IMPORTANTES:

1️⃣ **Cadena literal**:
```cpp
char* ptr = "Hola";     // Solo lectura
```

2️⃣ **Array de caracteres**:
```cpp
char texto[] = "Hola";  // Modificable
char texto2[10] = "Hola"; // Espacio extra
```

🧮 ARITMÉTICA DE PUNTEROS

Con punteros a caracteres puedes:
- ➕ Sumar para avanzar posiciones
- ➖ Restar para retroceder
- 🔢 Acceder a elementos específicos

```cpp
char texto[] = "Hola";
char* ptr = texto;

cout << *ptr;        // 'H' (posición 0)
cout << *(ptr+1);    // 'o' (posición 1)
cout << *(ptr+2);    // 'l' (posición 2)
```

🎯 EJERCICIOS PARA PRACTICAR:

1. 🔤 **Manipulación básica**:
   - Crea variables carácter
   - Usa punteros para modificarlas
   - Muestra direcciones en formato legible

2. 📝 **Cadenas simples**:
   - Crea arrays de caracteres
   - Manipula caracteres individuales
   - Convierte mayúsculas a minúsculas

3. 🔢 **Conversión de formatos**:
   - Experimenta con diferentes métodos de casting
   - Compara resultados obtenidos
   - Anota observaciones importantes

4. 🎯 **Aritmética de punteros**:
   - Avanza y retrocede en arrays
   - Accede a elementos específicos
   - Modifica valores en posiciones específicas

💡 CONSEJOS PARA MANEJO SEGURO:

✅ **Buenas prácticas**:
- 🎯 Siempre verifica límites del array
- 🔍 Usa (void*) para mostrar direcciones legibles
- 🧹 Libera memoria cuando uses new
- 📝 Documenta el propósito de cada puntero

❌ **Errores a evitar**:
- 🚫 Escribir en cadenas literales
- 🔥 Acceder fuera de límites del array
- 📉 Usar punteros sin inicializar
- 🚫 No verificar NULL antes de usar

🚀 SIGUIENTE PASO:

Este conocimiento te prepara para:
- 📚 Cadenas de texto avanzadas
- 🎮 Procesamiento de texto en aplicaciones
- 🔧 Manipulación de datos en tiempo real
- 💪 Dominio completo de la memoria dinámica

¡Sigue explorando las posibilidades de los punteros!
*/