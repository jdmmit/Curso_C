/*
🎯 ARCHIVO: 07_Introduccion_a_POO.cpp
📚 TEMA: Introducción a la Programación Orientada a Objetos
🎓 NIVEL: Intermedio
📝 DESCRIPCIÓN: Comprende los fundamentos de la POO en C++

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué es la programación orientada a objetos
   - Características de un objeto
   - Enfoque de la POO
   - Conceptos fundamentales: abstracción y encapsulación
   - Diferencias con programación estructurada

🎯 ¿QUÉ ES LA PROGRAMACIÓN ORIENTADA A OBJETOS?

La Programación Orientada a Objetos (POO) es un **paradigma revolucionario** que:
- 🏗️ Organiza el código en "objetos" que representan entidades
- 🎯 Permite modelar tanto entidades físicas como abstractas
- 🔧 Hace el código más comprensible, modular y reutilizable
- 💪 Revolucionó el desarrollo de software

🚀 **Origen**: C++ fue creado a partir de C con capacidades POO adicionales.

📦 CARACTERÍSTICAS DE UN OBJETO

Un objeto es una **entidad** con estas características:

1️⃣ **Clase**: Indica el tipo de objeto al que pertenece
   - 🏷️ Ejemplo: Persona, Coche, Animal

2️⃣ **Nombre**: Proporciona la identidad única del objeto
   - 🎯 Ejemplo: "Juan", "MiCoche", "Fido"

3️⃣ **Propiedades**: Describen las características del objeto
   - 📝 Ejemplo: Color de un coche, especie de un animal
   - 📦 Variables que almacenan datos

4️⃣ **Métodos**: Son las acciones que el objeto puede realizar
   - ⚙️ Ejemplo: Acelerar, frenar, hablar, saludar
   - 🎯 Funciones asociadas al objeto

🧠 EJEMPLO VISUAL:

```
OBJETO: Persona
├── Clase: Persona
├── Nombre: "María"
├── Propiedades:
│   ├── edad: 25
│   ├── altura: 1.65
│   └── profesion: "Ingeniera"
└── Métodos:
    ├── saludar()
    ├── trabajar()
    └── descansar()
```

🎯 ENFOQUE DE LA POO

La POO se centra en:
- 🎯 **Modelar programas pensando en entidades**
- 🔗 **Interacciones entre objetos**
- 🔄 **Intercambio de información**
- 🏗️ **Agregar comportamientos específicos**

🏢 **Ejemplo empresarial**:
```
Entidad: Persona en empresa
├── Datos: correo institucional
├── Acciones: enviar correos
└── Interacción: con otros objetos (servidor, mensaje)
```

🔧 IMPLEMENTACIÓN DE LA POO EN C++

La implementación se basa en conceptos fundamentales:

🎨 ¿QUÉ ES LA ABSTRACCIÓN?

La abstracción es la capacidad de:
- 🎯 Desarrollar programas mediante definiciones abstractas
- 🧠 Pensar en términos de objetos con atributos y métodos
- 🔍 Mostrar solo información esencial
- 🚫 Ocultar detalles internos de implementación

🏢 **Ejemplo de abstracción**:
```
Persona en empresa → enviar correo
├── Vista pública: método enviarCorreo()
└── Vista privada: implementación detallada oculta
```

🛡️ ¿QUÉ ES LA ENCAPSULACIÓN?

La encapsulación es:
- 📦 Agrupar datos bajo una misma unidad
- 🛡️ Proteger detalles de acceso indebido
- 🔒 Controlar acceso a propiedades y métodos

⚖️ **Diferencias con estructuras**:

| Aspecto | Estructuras | Clases (POO) |
|---------|-------------|--------------|
| Datos | Accesibles desde fuera | Pueden ocultarse |
| Métodos | No tienen | Incluidos |
| Seguridad | Baja | Alta |
| Organización | Básica | Avanzada |

💻 PROGRAMA PRÁCTICO: CONCEPTOS BÁSICOS
*/

#include <iostream>
#include <string>
using namespace std;

// 🏗️ Estructura tradicional (antes de POO)
struct PersonaEstructura {
    string nombre;
    int edad;
};

// 🎯 Clase básica (introducción a POO)
class PersonaClase {
private:  // 🔒 Encapsulación: datos privados
    string nombre;
    int edad;
    
public:   // 🌍 Acceso público a métodos
    // Constructor
    PersonaClase(string n, int e) : nombre(n), edad(e) {}
    
    // Métodos públicos (abstracción)
    void saludar() {
        cout << "¡Hola! Soy " << nombre << " y tengo " << edad << " años." << endl;
    }
    
    // Getters (acceso controlado)
    string getNombre() { return nombre; }
    int getEdad() { return edad; }
    
    // Setters (modificación controlada)
    void setEdad(int nuevaEdad) {
        if (nuevaEdad > 0) {
            edad = nuevaEdad;
        }
    }
};

int main() {
    cout << "🎯 INTRODUCCIÓN A LA POO EN C++" << endl;
    cout << "=============================" << endl << endl;
    
    // 📦 Estructura tradicional
    cout << "📦 ESTRUCTURA TRADICIONAL:" << endl;
    PersonaEstructura persona1 = {"Carlos", 30};
    cout << "   Nombre: " << persona1.nombre << endl;
    cout << "   Edad: " << persona1.edad << endl;
    cout << "   Acceso directo a datos" << endl << endl;
    
    // 🎯 Clase con POO
    cout << "🎯 CLASE CON POO:" << endl;
    PersonaClase persona2("María", 25);
    persona2.saludar();
    cout << "   Nombre (getter): " << persona2.getNombre() << endl;
    cout << "   Edad (getter): " << persona2.getEdad() << endl;
    cout << "   Acceso controlado a través de métodos" << endl;
    
    // 🔄 Modificación segura
    persona2.setEdad(26);
    cout << "   Nueva edad: " << persona2.getEdad() << endl;
    
    return 0;
}

/*
📊 VENTAJAS DE LA POO

✅ **Organización**:
- 📦 Código estructurado en objetos
- 🏷️ Nombres descriptivos
- 🎯 Separación de responsabilidades

✅ **Reutilización**:
- 🔄 Herencia de clases
- 📝 Componentes reutilizables
- 🔧 Bibliotecas de objetos

✅ **Mantenimiento**:
- 🐛 Fácil de depurar
- 🔧 Cambios localizados
- 📈 Escalabilidad

✅ **Seguridad**:
- 🛡️ Encapsulación de datos
- 🔒 Control de acceso
- 🚫 Prevención de acceso indebido

🎯 CONCEPTOS FUNDAMENTALES DE LA POO

1️⃣ **Abstracción**:
   - 🎯 Mostrar solo lo esencial
   - 🚫 Ocultar complejidad
   - 🏗️ Definiciones claras

2️⃣ **Encapsulación**:
   - 📦 Agrupar datos y métodos
   - 🔒 Proteger información
   - 🎯 Control de acceso

3️⃣ **Herencia** (próximamente):
   - 🔄 Reutilizar código
   - 🏗️ Jerarquía de clases
   - 🎯 Extender funcionalidades

4️⃣ **Polimorfismo** (próximamente):
   - 🎭 Múltiples formas
   - 🔧 Interfaces flexibles
   - 🎯 Comportamiento dinámico

🎯 EJEMPLO AVANZADO: SISTEMA DE GESTIÓN
*/

void ejemplo_sistema_gestion() {
    cout << "\n🎯 EJEMPLO: SISTEMA DE GESTIÓN" << endl;
    cout << "=============================" << endl;
    
    // 🏢 Sistema de empleados
    class Empleado {
    private:
        string nombre;
        int id;
        double salario;
        
    public:
        Empleado(string n, int i, double s) : nombre(n), id(i), salario(s) {}
        
        // Abstracción: métodos que representan acciones
        virtual void trabajar() {
            cout << nombre << " está trabajando." << endl;
        }
        
        virtual void mostrarInfo() {
            cout << "Empleado: " << nombre << " (ID: " << id << ")" << endl;
            cout << "Salario: $" << salario << endl;
        }
        
        // Encapsulación: acceso controlado
        double getSalario() { return salario; }
        void setSalario(double nuevoSalario) {
            if (nuevoSalario > 0) salario = nuevoSalario;
        }
    };
    
    // 🎯 Uso del sistema
    Empleado emp("Ana López", 1001, 2500.0);
    emp.mostrarInfo();
    emp.trabajar();
}

/*
🔧 CONSEJOS Y RECOMENDACIONES

✅ **Para principiantes**:
1. 📚 **Estudia teoría y práctica**:
   - Cursos especializados en POO
   - Comprender conceptos y aplicaciones

2. 🧪 **Experimenta con ejemplos**:
   - Modela situaciones del mundo real
   - Practica con objetos y sus interacciones

3. 🎯 **Empieza con proyectos pequeños**:
   - Implementa pequeños programas
   - Practica clases y objetos
   - Entiende encapsulación

4. 🔍 **Revisión y optimización**:
   - Revisa tu código regularmente
   - Identifica áreas de mejora
   - Sigue buenas prácticas de POO

❌ **Errores comunes a evitar**:
- 🚫 Tratar clases como estructuras avanzadas
- 🔓 No encapsular datos adecuadamente
- 📉 No aprovechar la abstracción
- 🚫 Confundir POO con programación estructurada

🎯 EJERCICIOS PARA PRACTICAR:

1. 📦 **Conversión de estructuras**:
   - Convierte estructuras existentes a clases
   - Aplica encapsulación
   - Implementa métodos apropiados

2. 🎯 **Modelado de entidades**:
   - Crea clase para Libro
   - Incluye propiedades y métodos
   - Usa encapsulación adecuada

3. 🔧 **Sistema simple**:
   - Diseña sistema de estudiantes
   - Implementa clases con POO
   - Prueba interacciones básicas

4. 🎨 **Abstracción práctica**:
   - Crea clase para Figura Geométrica
   - Implementa métodos abstractos
   - Usa encapsulación de propiedades

💡 CONSEJOS PARA DOMINAR LA POO:

✅ **Buenas prácticas**:
- 🎯 Siempre encapsula datos sensibles
- 📝 Usa nombres descriptivos para clases y métodos
- 🔧 Implementa constructores y destructores
- 📏 Sigue principios SOLID (cuando avances)

❌ **Errores a evitar**:
- 🚫 Hacer todo público (pierdes encapsulación)
- 🔥 No validar datos en setters
- 📉 Clases demasiado grandes (viola responsabilidad única)
- 🚫 No documentar propósito de clases

🚀 SIGUIENTE PASO EN POO:

Este conocimiento te prepara para:
- 🏗️ **Herencia**: Extender clases existentes
- 🎭 **Polimorfismo**: Objetos con múltiples formas
- 🔧 **Composición**: Construir objetos complejos
- 💪 **Patrones de diseño**: Soluciones reutilizables

¡Continúa aprendiendo y desarrollando tus habilidades de programación orientada a objetos!
*/