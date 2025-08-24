/*
🎯 ARCHIVO: 13_Sentencia_Switch.cpp
📚 TEMA: Sentencia Switch Case en C++
🎓 NIVEL: Principiante
📝 DESCRIPCIÓN: Aprende a usar sentencias switch case para optimizar decisiones múltiples

💡 CONCEPTOS QUE APRENDERÁS:
   - Sentencia switch case y su sintaxis
   - Comparación con estructuras if-else
   - Uso de break y default
   - Implementación de menús interactivos
   - Ventajas de switch sobre if-else

🎛️ SENTENCIA SWITCH CASE

La sentencia `switch case` es una **alternativa más compacta** a cadenas de `if-else` cuando quieres verificar varias condiciones posibles de una sola variable. Es especialmente útil para menús interactivos y selecciones basadas en valores constantes.

🎯 **Ventajas**:
- 🚀 Más eficiente que múltiples if-else
- 📝 Código más limpio y legible
- ⚡ Evaluación rápida de casos

🏗️ SINTAXIS BÁSICA

```cpp
switch (variable) {
    case valor1:
        // Código para valor1
        break;
    case valor2:
        // Código para valor2
        break;
    default:
        // Código por defecto
        break;
}
```

💻 PROGRAMA PRÁCTICO: MENÚ INTERACTIVO
*/

#include <iostream>
using namespace std;

int main() {
    cout << "🎯 SENTENCIA SWITCH CASE EN C++" << endl;
    cout << "=============================" << endl << endl;
    
    int opcion;  // Variable para almacenar la opción del usuario
    
    // 🎯 Menú interactivo
    cout << "🍽️ MENÚ DEL RESTAURANTE" << endl;
    cout << "1. Pizza" << endl;
    cout << "2. Hamburguesa" << endl;
    cout << "3. Ensalada" << endl;
    cout << "4. Pasta" << endl;
    cout << "5. Salir" << endl;
    cout << "\nSeleccione una opción (1-5): ";
    
    cin >> opcion;  // Leer la opción del usuario
    
    // 🔄 Sentencia switch para evaluar la opción
    switch (opcion) {
        case 1:
            cout << "🍕 Has seleccionado Pizza" << endl;
            cout << "   Tiempo de preparación: 15 minutos" << endl;
            break;
        case 2:
            cout << "🍔 Has seleccionado Hamburguesa" << endl;
            cout << "   Tiempo de preparación: 10 minutos" << endl;
            break;
        case 3:
            cout << "🥗 Has seleccionado Ensalada" << endl;
            cout << "   Tiempo de preparación: 5 minutos" << endl;
            break;
        case 4:
            cout << "🍝 Has seleccionado Pasta" << endl;
            cout << "   Tiempo de preparación: 12 minutos" << endl;
            break;
        case 5:
            cout << "👋 ¡Gracias por usar nuestro servicio!" << endl;
            break;
        default:
            cout << "❌ Opción no válida. Por favor, seleccione 1-5." << endl;
            break;
    }
    
    // 🎯 Ejemplo adicional: Días de la semana
    cout << "\n📅 EJEMPLO: DÍAS DE LA SEMANA" << endl;
    int dia;
    cout << "Ingrese un número del 1 al 7: ";
    cin >> dia;
    
    switch (dia) {
        case 1:
            cout << "Lunes - ¡Comienza la semana!" << endl;
            break;
        case 2:
            cout << "Martes - Segundo día" << endl;
            break;
        case 3:
            cout << "Miércoles - ¡Mitad de semana!" << endl;
            break;
        case 4:
            cout << "Jueves - Casi viernes" << endl;
            break;
        case 5:
            cout << "Viernes - ¡Fin de semana pronto!" << endl;
            break;
        case 6:
            cout << "Sábado - ¡Fin de semana!" << endl;
            break;
        case 7:
            cout << "Domingo - Día de descanso" << endl;
            break;
        default:
            cout << "❌ Número no válido. Ingrese 1-7." << endl;
            break;
    }
    
    return 0;
}

/*
📊 COMPARACIÓN: SWITCH VS IF-ELSE

🔧 **Switch Case**:
✅ Ventajas:
- 🚀 Más eficiente para múltiples casos
- 📝 Código más limpio y organizado
- ⚡ Evaluación directa de valores constantes

❌ Limitaciones:
- 🚫 Solo funciona con valores constantes
- 🚫 No permite condiciones complejas
- 🚫 Requiere break para evitar fall-through

🔧 **If-Else**:
✅ Ventajas:
- 🎯 Permite condiciones complejas
- 🔧 Funciona con cualquier tipo de expresión
- 🔄 Más flexible para rangos y comparaciones

❌ Limitaciones:
- 🐌 Más lento para muchos casos simples
- 📉 Código más verboso
- 🔢 Más propenso a errores

🔌 EJEMPLO EQUIVALENTE: IF-ELSE vs SWITCH
*/

void ejemplo_equivalente() {
    cout << "\n🔌 EJEMPLO: EQUIVALENCIA IF-ELSE vs SWITCH" << endl;
    cout << "========================================" << endl;
    
    int nota = 85;
    
    // 🔄 Usando if-else
    cout << "📊 Con if-else:" << endl;
    if (nota >= 90) {
        cout << "   Excelente - A" << endl;
    } else if (nota >= 80) {
        cout << "   Muy Bien - B" << endl;
    } else if (nota >= 70) {
        cout << "   Bien - C" << endl;
    } else {
        cout << "   Necesita mejorar" << endl;
    }
    
    // 🔄 Usando switch (requiere ajuste para rangos)
    cout << "\n📊 Con switch (valores específicos):" << endl;
    int opcion = 2;
    switch (opcion) {
        case 1:
            cout << "   Opción 1 seleccionada" << endl;
            break;
        case 2:
            cout << "   Opción 2 seleccionada" << endl;
            break;
        case 3:
            cout << "   Opción 3 seleccionada" << endl;
            break;
        default:
            cout << "   Opción desconocida" << endl;
            break;
    }
}

/*
⚠️ CONCEPTOS IMPORTANTES DE SWITCH

1️⃣ **Break**:
- 🚫 Sin break, se ejecutan todos los casos siguientes (fall-through)
- ✅ Con break, se sale del switch inmediatamente

2️⃣ **Default**:
- 🎯 Se ejecuta cuando ningún caso coincide
- 📝 Similar a else en estructuras condicionales

3️⃣ **Fall-through** (intencional):
```cpp
switch (nota) {
    case 'A':
    case 'B':
        cout << "Aprobado con buen desempeño" << endl;
        break;
    case 'C':
        cout << "Aprobado" << endl;
        break;
    default:
        cout << "No aprobado" << endl;
        break;
}
```

🔧 EJEMPLO AVANZADO: CALCULADORA SIMPLE
*/

void ejemplo_calculadora() {
    cout << "\n🔧 EJEMPLO: CALCULADORA SIMPLE" << endl;
    cout << "=============================" << endl;
    
    char operacion;
    double num1, num2;
    
    cout << "🧮 Calculadora Simple" << endl;
    cout << "Ingrese primer número: ";
    cin >> num1;
    cout << "Ingrese operación (+, -, *, /): ";
    cin >> operacion;
    cout << "Ingrese segundo número: ";
    cin >> num2;
    
    switch (operacion) {
        case '+':
            cout << "Resultado: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Resultado: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            } else {
                cout << "❌ Error: División por cero" << endl;
            }
            break;
        default:
            cout << "❌ Operación no válida" << endl;
            break;
    }
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🎯 **Menú básico**:
   - Crea un menú con 5 opciones
   - Implementa switch para manejar selecciones
   - Incluye opción de salida

2. 📅 **Conversor de meses**:
   - Convierte números a nombres de meses
   - Maneja casos inválidos
   - Usa default apropiadamente

3. 🎮 **Sistema de puntuación**:
   - Evalúa puntuaciones con switch
   - Proporciona retroalimentación
   - Agrupa casos similares

4. 🧮 **Calculadora avanzada**:
   - Implementa más operaciones
   - Maneja errores de entrada
   - Usa validaciones adecuadas

5. 🔧 **Selector de idioma**:
   - Crea menú de selección de idioma
   - Muestra mensajes en diferentes idiomas
   - Incluye opción por defecto

💡 CONSEJOS PARA USO EFICIENTE:

✅ **Buenas prácticas**:
- 🎯 Usa switch para valores constantes y discretos
- 🔢 Siempre incluye break (salvo que quieras fall-through intencional)
- 📝 Agrega default para manejar casos no esperados
- 🧪 Prueba todos los casos posibles

❌ **Errores a evitar**:
- 🚫 Olvidar break (fall-through no intencional)
- 🔥 Usar switch para condiciones complejas o rangos
- 📉 No incluir caso default
- 🚫 Usar valores no constantes en case

🚀 SIGUIENTE PASO:

Switch case es ideal para:
- 🎯 Menús interactivos
- 📊 Clasificación de datos discretos
- 🔧 Sistemas de selección
- 💪 Programas estructurados

¡Sigue practicando con switch case!
*/