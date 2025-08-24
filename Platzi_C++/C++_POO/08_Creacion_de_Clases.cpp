/*
🎯 ARCHIVO: 08_Creacion_de_Clases.cpp
📚 TEMA: Creación de Clases en C++ (POO)
🎓 NIVEL: Intermedio
📝 DESCRIPCIÓN: Aprende a crear tu primera clase en programación orientada a objetos

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué es la Programación Orientada a Objetos (POO)
   - Cómo definir una clase en C++
   - Atributos y métodos de una clase
   - Instanciación de objetos
   - Uso de punteros con objetos

🏛️ PROGRAMACIÓN ORIENTADA A OBJETOS (POO)

La Programación Orientada a Objetos (POO) es un **paradigma** que nos permite estructurar nuestro código y datos de una manera clara y eficiente. En lugar de pensar en funciones que operan sobre datos, pensamos en **objetos** que contienen tanto datos como las funciones que operan sobre ellos.

🎯 **Pilares fundamentales de la POO**:
- 🏗️ **Encapsulación**: Agrupar datos y métodos que operan sobre ellos
- 🔁 **Herencia**: Crear nuevas clases basadas en clases existentes
- 🎭 **Polimorfismo**: Un mismo método puede comportarse de diferentes formas
- 📦 **Abstracción**: Ocultar detalles complejos detrás de una interfaz simple

_GenericClass EN C++

Una clase es una **plantilla** o molde para crear objetos. Define qué datos (atributos) y qué operaciones (métodos) puede tener un objeto de ese tipo.

🏗️ SINTAXIS BÁSICA

```cpp
class NombreClase {
public:
    // Atributos (variables)
    tipo_dato atributo1;
    tipo_dato atributo2;
    
    // Métodos (funciones)
    tipo_retorno metodo1(parametros);
    tipo_retorno metodo2(parametros);
};
```

💻 PROGRAMA PRÁCTICO: CLASE PERSONA
*/

#include <iostream>
#include <string>
using namespace std;

// 🏛️ Definición de la clase Persona
class Persona {
public:
    // 🔤 Atributos públicos
    string nombre;
    int edad;
    
    // 🗣️ Método para saludar
    void saludar() {
        cout << "👋 Hola, mi nombre es " << nombre << " y tengo " << edad << " años." << endl;
    }
};

int main() {
    cout << "🎯 CREACIÓN DE CLASES EN C++" << endl;
    cout << "===========================" << endl << endl;
    
    // 🎯 Crear objeto en la pila (stack)
    cout << "📦 OBJETO EN LA PILA:" << endl;
    Persona p;
    p.nombre = "Diana";
    p.edad = 26;
    
    cout << "   Nombre: " << p.nombre << endl;
    cout << "   Edad: " << p.edad << endl;
    p.saludar();
    
    // 🔄 Crear objeto en el heap (memoria dinámica)
    cout << "\n💾 OBJETO EN EL HEAP:" << endl;
    Persona *p2 = new Persona();
    p2->nombre = "Carlos";
    p2->edad = 30;
    
    cout << "   Nombre: " << p2->nombre << endl;
    cout << "   Edad: " << p2->edad << endl;
    p2->saludar();
    
    // 🧹 Liberar memoria
    delete p2;
    cout << "   Memoria liberada correctamente" << endl;
    
    // 🎯 Ejemplo con múltiples objetos
    cout << "\n👥 MÚLTIPLES OBJETOS:" << endl;
    Persona personas[3];
    personas[0].nombre = "Ana";
    personas[0].edad = 25;
    
    personas[1].nombre = "Luis";
    personas[1].edad = 35;
    
    personas[2].nombre = "María";
    personas[2].edad = 28;
    
    for (int i = 0; i < 3; i++) {
        personas[i].saludar();
    }
    
    return 0;
}

/*
📊 DIFERENCIAS ENTRE OBJETOS EN PILA Y HEAP

| Aspecto | Stack (Pila) | Heap (Memoria Dinámica) |
|---------|--------------|-------------------------|
| **Creación** | `Persona p;` | `Persona *p = new Persona();` |
| **Acceso** | `p.atributo` | `p->atributo` |
| **Liberación** | Automática | Manual (`delete`) |
| **Velocidad** | Más rápida | Más lenta |
| **Tamaño** | Limitada | Grande |

🔧 OPERADORES DE ACCESO

1️⃣ **Punto (.)**: Para objetos directos
```cpp
Persona p;
p.nombre = "Juan";
p.saludar();
```

2️⃣ **Flecha (->)**: Para punteros a objetos
```cpp
Persona *p = new Persona();
p->nombre = "Juan";
p->saludar();
```

🔌 EJEMPLO COMPLETO: SISTEMA DE GESTIÓN DE PERSONAS
*/

class PersonaSistema {
public:
    string nombre;
    int edad;
    string email;
    
    // 🎯 Constructor (método especial)
    PersonaSistema() {
        nombre = "Desconocido";
        edad = 0;
        email = "sin@email.com";
    }
    
    // 🎯 Constructor con parámetros
    PersonaSistema(string n, int e, string em) {
        nombre = n;
        edad = e;
        email = em;
    }
    
    // 🗣️ Métodos
    void mostrarInfo() {
        cout << "👤 " << nombre << " (" << edad << " años) - " << email << endl;
    }
    
    void cumplirAnios() {
        edad++;
        cout << "🎉 ¡Feliz cumpleaños " << nombre << "! Ahora tienes " << edad << " años." << endl;
    }
};

void ejemplo_sistema_gestion() {
    cout << "\n🔌 EJEMPLO: SISTEMA DE GESTIÓN" << endl;
    cout << "=============================" << endl;
    
    // 🎯 Crear personas con diferentes constructores
    PersonaSistema p1;  // Constructor por defecto
    PersonaSistema p2("Elena", 28, "elena@correo.com");  // Constructor con parámetros
    
    cout << "Personas en el sistema:" << endl;
    p1.mostrarInfo();
    p2.mostrarInfo();
    
    // 🎉 Simular cumpleaños
    p2.cumplirAnios();
    p2.mostrarInfo();
}

/*
⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:

1️⃣ **No liberar memoria dinámica**:
```cpp
Persona *p = new Persona();
// ❌ Falta delete p;
```

2️⃣ **Acceder a memoria liberada**:
```cpp
Persona *p = new Persona();
delete p;
p->saludar();  // ❌ Error: p ya no es válido
```

3️⃣ **Confundir operadores de acceso**:
```cpp
Persona p;
Persona *ptr = &p;

// ❌ Incorrecto
// p->nombre = "Juan";
// ptr.nombre = "Juan";

// ✅ Correcto
p.nombre = "Juan";
ptr->nombre = "Juan";
```

✅ **Formas correctas**:
```cpp
// ✅ Objeto en la pila
Persona p;
p.nombre = "Juan";
p.saludar();

// ✅ Objeto en el heap
Persona *p2 = new Persona();
p2->nombre = "María";
p2->saludar();
delete p2;  // ✅ Liberar memoria
```

🎯 EJERCICIOS PARA PRACTICAR:

1. 🏛️ **Clases básicas**:
   - Crea una clase Coche con atributos marca, modelo, año
   - Implementa métodos para mostrar información
   - Crea varios objetos y úsalos

2. 🎯 **Múltiples constructores**:
   - Implementa diferentes constructores para una clase
   - Usa constructores por defecto y con parámetros
   - Prueba todas las combinaciones

3. 🔄 **Objetos en diferentes ubicaciones**:
   - Crea objetos en la pila y en el heap
   - Practica con ambos tipos de acceso
   - Asegúrate de liberar memoria correctamente

4. 📦 **Sistema de gestión**:
   - Diseña un sistema para gestionar libros
   - Crea clase Libro con título, autor, páginas
   - Implementa métodos para mostrar y actualizar información

5. 👥 **Colecciones de objetos**:
   - Crea arrays de objetos
   - Implementa funciones para buscar y filtrar
   - Practica con bucles y objetos

💡 CONSEJOS PARA CLASES EFICIENTES:

✅ **Buenas prácticas**:
- 🎯 Usa nombres descriptivos para clases y métodos
- 🔤 Sigue convenciones de nombres (PascalCase para clases)
- 📝 Comenta el propósito de cada clase y método
- 🧪 Prueba tus clases con diferentes escenarios

❌ **Errores a evitar**:
- 🚫 Hacer todos los atributos públicos (mejor usar private/protected)
- 🔥 No liberar memoria dinámica
- 📉 No inicializar atributos correctamente
- 🚫 Crear clases demasiado grandes o con demasiadas responsabilidades

🚀 SIGUIENTE PASO:

Las clases son fundamentales para:
- 🏗️ Estructurar código de forma modular
- 🔧 Crear objetos reutilizables
- 🎯 Implementar los pilares de la POO
- 💪 Desarrollar aplicaciones complejas

¡Sigue practicando con clases en C++!
*/