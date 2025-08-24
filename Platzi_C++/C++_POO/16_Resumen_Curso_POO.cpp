/*
🎯 ARCHIVO: 16_Resumen_Curso_POO.cpp
📚 TEMA: Resumen del Curso de Programación Orientada a Objetos con C++
🎓 NIVEL: Intermedio/Avanzado
📝 DESCRIPCIÓN: Repaso completo de los conceptos aprendidos en el curso de POO con C++

💡 CONCEPTOS APRENDIDOS:
   - Fundamentos de Programación Orientada a Objetos
   - Clases, objetos y encapsulación
   - Herencia y polimorfismo
   - Miembros estáticos y method chaining
   - Herencia múltiple y virtual
   - Siguientes pasos en C++

🎉 RESUMEN DEL CURSO DE POO CON C++

¡Felicidades por completar el curso de Programación Orientada a Objetos con C++! Has adquirido conocimientos **avanzados** sobre uno de los paradigmas de programación más importantes y utilizados en el desarrollo de software profesional.

🏆 **Logros alcanzados**:
- 🏛️ **Dominio de clases y objetos**: Creación, instanciación y gestión
- 🛡️ **Encapsulación**: Protección de datos y control de acceso
- 🔗 **Method chaining**: Código fluido y legible
- 📊 **Miembros estáticos**: Compartir datos entre instancias
- 🌳 **Herencia**: Reutilización y extensión de código
- 💎 **Herencia múltiple**: Combinación de funcionalidades
- 🎭 **Polimorfismo**: Flexibilidad y extensibilidad

🏁 CONCEPTOS ESENCIALES APRENDIDOS

1️⃣ **Clases y Objetos**: La base de la POO
```cpp
class Persona {
private:
    string nombre;
public:
    Persona(string n) : nombre(n) { }
    void saludar() const { cout << "Hola, soy " << nombre << endl; }
};
```

2️⃣ **Encapsulación**: Protección de datos
```cpp
class Cuenta {
private:
    double saldo;
public:
    double getSaldo() const { return saldo; }
    void depositar(double monto) { if(monto > 0) saldo += monto; }
};
```

3️⃣ **Herencia**: Reutilización de código
```cpp
class Animal { /* ... */ };
class Perro : public Animal { /* ... */ };
```

4️⃣ **Polimorfismo**: Flexibilidad
```cpp
Animal* animales[] = {new Perro(), new Gato()};
for(auto animal : animales) animal->hacerSonido(); // Comportamiento específico
```

5️⃣ **Miembros estáticos**: Datos compartidos
```cpp
class Persona {
public:
    static int contador;
    Persona() { contador++; }
};
```

💻 PROGRAMA INTEGRADOR: DEMO DE POO
*/

#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

// 🏛️ Clase base abstracta: Entidad
class Entidad {
protected:
    static int contadorEntidades;
    int id;
    string nombre;
    
public:
    // 🎯 Constructor
    Entidad(string n) : nombre(n), id(++contadorEntidades) {
        cout << "🏗️ Entidad #" << id << " (" << nombre << ") creada" << endl;
    }
    
    // 💥 Destructor virtual
    virtual ~Entidad() {
        cout << "💣 Entidad #" << id << " (" << nombre << ") destruida" << endl;
    }
    
    // 📋 Métodos virtuales
    virtual void mostrarInfo() const = 0;
    virtual void ejecutarAccion() const = 0;
    
    // 📊 Método estático
    static int getContadorEntidades() {
        return contadorEntidades;
    }
    
    // 📋 Getters
    int getID() const { return id; }
    string getNombre() const { return nombre; }
};

// 🎯 Inicialización de variable estática
int Entidad::contadorEntidades = 0;

// 👤 Clase derivada: Persona
class Persona : public Entidad {
private:
    int edad;
    string profesion;
    
public:
    // 🎯 Constructor con method chaining
    Persona(string n, int e, string p) : Entidad(n), edad(e), profesion(p) {
        cout << "👤 Persona " << nombre << " registrada" << endl;
    }
    
    // 📋 Métodos encadenables
    Persona& setEdad(int e) {
        edad = e;
        return *this;
    }
    
    Persona& setProfesion(string p) {
        profesion = p;
        return *this;
    }
    
    // 📋 Implementación de métodos virtuales
    void mostrarInfo() const override {
        cout << "👤 Persona #" << id << ": " << nombre << " (" << edad << " años) - " << profesion << endl;
    }
    
    void ejecutarAccion() const override {
        cout << "💼 " << nombre << " está trabajando como " << profesion << endl;
    }
    
    // 📋 Métodos específicos
    void cumplirAnios() {
        edad++;
        cout << "🎉 ¡Feliz cumpleaños " << nombre << "! Ahora tienes " << edad << " años" << endl;
    }
};

// 🐕 Clase derivada: Mascota
class Mascota : public Entidad {
private:
    string tipo;
    string dueno;
    
public:
    // 🎯 Constructor
    Mascota(string n, string t, string d) : Entidad(n), tipo(t), dueno(d) {
        cout << "🐾 Mascota " << nombre << " registrada" << endl;
    }
    
    // 📋 Implementación de métodos virtuales
    void mostrarInfo() const override {
        cout << "🐾 Mascota #" << id << ": " << nombre << " (" << tipo << ") de " << dueno << endl;
    }
    
    void ejecutarAccion() const override {
        cout << "🐾 " << nombre << " está jugando con " << dueno << endl;
    }
    
    // 📋 Métodos específicos
    void hacerTruco() const {
        cout << "🎪 " << nombre << " hace un truco adorable" << endl;
    }
};

// 🏠 Clase derivada: Vivienda
class Vivienda : public Entidad {
private:
    string direccion;
    int habitantes;
    
public:
    // 🎯 Constructor
    Vivienda(string n, string dir, int hab) : Entidad(n), direccion(dir), habitantes(hab) {
        cout << "🏠 Vivienda " << nombre << " registrada" << endl;
    }
    
    // 📋 Implementación de métodos virtuales
    void mostrarInfo() const override {
        cout << "🏠 Vivienda #" << id << ": " << nombre << " en " << direccion << " (" << habitantes << " habitantes)" << endl;
    }
    
    void ejecutarAccion() const override {
        cout << "🏠 " << nombre << " proporciona refugio y comodidad" << endl;
    }
    
    // 📋 Métodos específicos
    void mostrarDireccion() const {
        cout << "📍 " << nombre << " se encuentra en: " << direccion << endl;
    }
};

int main() {
    cout << "🎯 RESUMEN DEL CURSO DE POO CON C++" << endl;
    cout << "=================================" << endl;
    cout << "🎉 ¡Felicidades por completar el curso!" << endl << endl;
    
    // 📊 Entidades iniciales
    cout << "📊 Entidades iniciales: " << Entidad::getContadorEntidades() << endl;
    
    // 🎯 Crear objetos con diferentes características
    cout << "\n🏗️ CREANDO ENTIDADES:" << endl;
    
    // 👤 Persona con method chaining
    Persona persona1("Ana García", 28, "Ingeniera de Software");
    persona1.setEdad(29).setProfesion("Senior Developer");  // 🔗 Method chaining
    
    // 🐕 Mascota
    Mascota mascota1("Firulais", "Perro", "Ana García");
    
    // 🏠 Vivienda
    Vivienda vivienda1("Casa Principal", "Calle Principal 123", 3);
    
    // 📊 Entidades creadas
    cout << "\n📊 Entidades creadas: " << Entidad::getContadorEntidades() << endl;
    
    // 🎭 POLIMORFISMO EN ACCIÓN
    cout << "\n🎭 POLIMORFISMO CON PUNTEROS:" << endl;
    
    // 🎯 Vector polimórfico
    vector<Entidad*> entidades = {
        new Persona("Carlos López", 35, "Diseñador Gráfico"),
        new Mascota("Mishi", "Gato", "Carlos López"),
        new Vivienda("Departamento", "Av. Reforma 456", 2)
    };
    
    // 📋 Mostrar información de todas las entidades
    cout << "\n📋 INFORMACIÓN DE ENTIDADES:" << endl;
    for (const auto& entidad : entidades) {
        entidad->mostrarInfo();
    }
    
    // 🎯 Acciones específicas usando polimorfismo
    cout << "\n🎯 ACCIONES DE ENTIDADES:" << endl;
    for (const auto& entidad : entidades) {
        entidad->ejecutarAccion();
    }
    
    // 📋 Funcionalidades específicas
    cout << "\n🔧 FUNCIONALIDADES ESPECÍFICAS:" << endl;
    // Cast seguro para acceder a métodos específicos
    if (auto* persona = dynamic_cast<Persona*>(entidades[0])) {
        persona->cumplirAnios();
    }
    
    if (auto* mascota = dynamic_cast<Mascota*>(entidades[1])) {
        mascota->hacerTruco();
    }
    
    if (auto* vivienda = dynamic_cast<Vivienda*>(entidades[2])) {
        vivienda->mostrarDireccion();
    }
    
    // 💥 Liberar memoria
    cout << "\n💥 LIBERANDO MEMORIA:" << endl;
    for (auto& entidad : entidades) {
        delete entidad;
    }
    
    cout << "\n📊 Entidades finales: " << Entidad::getContadorEntidades() << endl;
    
    // 🔄 Demostrar funcionalidades aprendidas
    cout << "\n🔄 DEMO DE FUNCIONALIDADES APRENDIDAS:" << endl;
    
    // 🔗 Method chaining
    cout << "\n🔗 METHOD CHAINING:" << endl;
    Persona("María Rodríguez", 25, "Estudiante")
        .setEdad(26)
        .setProfesion("Desarrolladora Jr")
        .mostrarInfo();
    
    // 📊 Miembros estáticos
    cout << "\n📊 MIEMBROS ESTÁTICOS:" << endl;
    cout << "Total de entidades creadas: " << Entidad::getContadorEntidades() << endl;
    
    return 0;
}

/*
🚀 APLICACIÓN DE CONOCIMIENTOS

🎯 **Proyectos personales recomendados**:
- 🎮 Sistema de gestión de personajes para un juego
- 🏛️ Sistema de inventario con diferentes tipos de productos
- 🎭 Sistema de gestión de empleados con diferentes roles
- 🏠 Sistema de control de propiedades inmobiliarias
- 🐾 Sistema de gestión de clínica veterinaria

🔌 **Colaboración en proyectos**:
- Contribuye a proyectos de código abierto orientados a objetos
- Aprende patrones de diseño de otros desarrolladores
- Desarrolla habilidades de arquitectura de software

🏆 **Competencias de programación**:
- Resuelve problemas complejos usando POO
- Mejora tu pensamiento estructurado
- Prepárate para entrevistas técnicas avanzadas

🌐 **Integración con tecnologías modernas**:
- Combina C++ con APIs REST para backend
- Usa C++ para módulos de alto rendimiento en aplicaciones
- Integra con bases de datos y sistemas empresariales

⏭️ SIGUIENTES PASOS EN C++

🎓 **Temas avanzados recomendados**:

1️⃣ **Patrones de diseño**:
   - Singleton, Factory, Observer, Strategy
   - MVC (Modelo-Vista-Controlador)
   - Dependency Injection

2️⃣ **STL (Standard Template Library)**:
   - Contenedores: vector, list, map, set
   - Algoritmos: sort, find, transform
   - Iteradores y adaptadores

3️⃣ **Templates y metaprogramación**:
   - Programación genérica
   - Templates de funciones y clases
   - SFINAE y expresiones constantes

4️⃣ **Smart pointers y gestión de memoria**:
   - unique_ptr, shared_ptr, weak_ptr
   - RAII (Resource Acquisition Is Initialization)
   - Move semantics y perfect forwarding

5️⃣ **Concurrencia y paralelismo**:
   - Threads y mutex
   - async y futures
   - Atomics y condiciones de carrera

6️⃣ **Modern C++ (C++11/14/17/20)**:
   - auto y decltype
   - Lambdas y closures
   - Ranged for loops
   - Initializer lists

🔧 **Especializaciones avanzadas**:
- Desarrollo de motores de juegos con C++
- Programación de sistemas embebidos y IoT
- Desarrollo de aplicaciones de alto rendimiento
- Criptografía y seguridad informática
- Inteligencia artificial y machine learning
- Computación gráfica y procesamiento de imágenes

🌟 **Buenas prácticas profesionales**:

✅ **Principios SOLID**:
- 🎯 **S**ingle Responsibility: Una clase, una responsabilidad
- 🔧 **O**pen/Closed: Abierto para extensión, cerrado para modificación
- 🔄 **L**iskov Substitution: Las clases derivadas deben ser sustituibles
- 📋 **I**nterface Segregation: Interfaces específicas, no generales
- 🔌 **D**ependency Inversion: Depender de abstracciones, no de implementaciones

✅ **Patrones de arquitectura**:
- 🏗️ Model-View-Controller (MVC)
- 🎯 Model-View-ViewModel (MVVM)
- 🔧 Observer pattern
- 🔄 Factory pattern
- 📦 Repository pattern

🎯 CONSEJOS PARA CONTINUAR APRENDIENDO

✅ **Buenas prácticas**:
- 📚 Lee código de proyectos open source avanzados
- 🧪 Practica con ejercicios de diseño orientado a objetos
- 🎯 Establece metas de aprendizaje específicas
- 🤝 Únete a comunidades de desarrolladores C++
- 📝 Escribe documentación de tu código

❌ **Errores a evitar**:
- 🚫 Dejar de practicar conceptos de POO
- 🔥 Copiar código sin entender los principios
- 📉 No aplicar buenas prácticas de diseño
- 🚫 Ignorar las nuevas características de C++
- 🔢 No probar diferentes enfoques de solución

🎉 FRASES MOTIVACIONALES

"La programación orientada a objetos no es solo una técnica, es una forma de pensar." - Autor desconocido

"El buen diseño es el arte de esconder lo complejo detrás de lo simple." - Autor desconocido

"La reutilización de código comienza con un buen diseño orientado a objetos." - Principio de desarrollo

🚀 RECURSOS RECOMENDADOS

📖 **Libros esenciales**:
- "Design Patterns" por Gang of Four
- "Effective C++" por Scott Meyers
- "Effective Modern C++" por Scott Meyers
- "C++ Primer" por Lippman, Lajoie y Moo
- "The C++ Programming Language" por Bjarne Stroustrup

🌐 **Sitios web y documentación**:
- cppreference.com (documentación oficial)
- isocpp.org (sitio oficial de C++)
- GeeksforGeeks (tutoriales y ejercicios)
- LeetCode (problemas de programación)
- GitHub (proyectos de código abierto)

🎓 **Plataformas de aprendizaje**:
- Coursera y edX (cursos universitarios avanzados)
- Udemy y Platzi (cursos especializados)
- YouTube (tutoriales y conferencias técnicas)
- LinkedIn Learning (cursos profesionales)

💪 MENSAJE FINAL

Has completado un **viaje extraordinario** en el mundo de la Programación Orientada a Objetos con C++. Los conceptos que has aprendido son **fundamentales** para el desarrollo de software profesional moderno.

Ahora estás preparado para:

1. 🎯 **Desarrollar aplicaciones complejas** usando principios de POO
2. 🔧 **Crear código mantenible y extensible**
3. 🌟 **Aplicar patrones de diseño en proyectos reales**
4. 🤝 **Colaborar en proyectos de código abierto**
5. 💼 **Enfrentar desafíos profesionales avanzados**

🚀 **Siguientes pasos recomendados**:

1. **Practica con proyectos personales** que integren todos los conceptos aprendidos
2. **Explora patrones de diseño** y cómo aplicarlos en situaciones reales
3. **Aprende Modern C++** (C++11/14/17/20) para escribir código más eficiente
4. **Contribuye a proyectos open source** para ganar experiencia real
5. **Mantente actualizado** con las últimas tendencias en C++ y desarrollo de software

¡El mundo del desarrollo de software te espera con infinitas posibilidades!

Recuerda: **la maestría en programación se logra con práctica constante y curiosidad infinita**.

🚀 ¡Sigue programando, sigue aprendiendo, y nunca dejes de innovar!

🎓 **Certificado de Finalización**:
Felicidades por completar el curso de Programación Orientada a Objetos con C++. Has demostrado dominio de:
- ✅ Clases y objetos
- ✅ Encapsulación y method chaining
- ✅ Herencia simple y múltiple
- ✅ Polimorfismo y funciones virtuales
- ✅ Miembros estáticos
- ✅ Gestión de memoria y destructores virtuales

¡Estás listo para enfrentar los desafíos más avanzados en C++!
*/