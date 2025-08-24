/*
🎯 ARCHIVO: 15_Polimorfismo_Basico.cpp
📚 TEMA: Polimorfismo Básico en C++ (Funciones Virtuales)
🎓 NIVEL: Intermedio/Avanzado
📝 DESCRIPCIÓN: Aprende sobre polimorfismo, funciones virtuales y cómo crear código flexible y extensible

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué es el polimorfismo en Programación Orientada a Objetos
   - Funciones virtuales y su importancia
   - Polimorfismo dinámico vs estático
   - Cómo implementar polimorfismo en C++
   - Uso de punteros y referencias polimórficas

🎭 POLIMORFISMO EN C++

El polimorfismo es un **pilar fundamental** de la Programación Orientada a Objetos que permite que **objetos de diferentes tipos** sean tratados de manera **uniforme** a través de una **interfaz común**. La palabra "polimorfismo" significa "muchas formas".

🎯 **Tipos de polimorfismo**:
- 🎭 **Polimorfismo dinámico**: Resuelto en tiempo de ejecución (funciones virtuales)
- ⚡ **Polimorfismo estático**: Resuelto en tiempo de compilación (templates, sobrecarga)

🏗️ FUNCIONES VIRTUALES

Las funciones virtuales permiten **sobrescribir** métodos en clases derivadas y **llamar** a la **versión correcta** según el **tipo real** del objeto, incluso cuando se usa un **puntero o referencia** a la clase base.

💻 PROGRAMA PRÁCTICO: POLIMORFISMO BÁSICO
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 🏛️ Clase base abstracta: Animal
class Animal {
protected:
    string nombre;
    static int contadorAnimales;
    
public:
    // 🎯 Constructor
    Animal(string n) : nombre(n) {
        contadorAnimales++;
        cout << "🐾 " << nombre << " creado" << endl;
    }
    
    // 💥 Destructor virtual (importante para polimorfismo)
    virtual ~Animal() {
        contadorAnimales--;
        cout << "🐾 " << nombre << " destruido" << endl;
    }
    
    // 📊 Método estático
    static int getContadorAnimales() {
        return contadorAnimales;
    }
    
    // 📋 Métodos virtuales puros (clase abstracta)
    virtual void hacerSonido() const = 0;
    virtual void moverse() const = 0;
    virtual void comer() const {
        cout << "🍽️ " << nombre << " está comiendo" << endl;
    }
    
    // 📋 Método con implementación por defecto
    virtual void dormir() const {
        cout << "😴 " << nombre << " está durmiendo" << endl;
    }
    
    // 📋 Método no virtual
    void mostrarNombre() const {
        cout << "👤 Nombre: " << nombre << endl;
    }
    
    // 📋 Getter
    string getNombre() const { return nombre; }
};

// 🎯 Inicialización de variable estática
int Animal::contadorAnimales = 0;

// 🐕 Clase derivada: Perro
class Perro : public Animal {
private:
    string raza;
    
public:
    // 🎯 Constructor
    Perro(string nombre, string r) : Animal(nombre), raza(r) {
        cout << "🐕 Perro de raza " << raza << " creado" << endl;
    }
    
    // 📋 Implementación de métodos virtuales
    void hacerSonido() const override {
        cout << "🐕 " << nombre << " dice: ¡Guau guau!" << endl;
    }
    
    void moverse() const override {
        cout << "🐕 " << nombre << " corre alegremente" << endl;
    }
    
    void comer() const override {
        cout << "🍽️ " << nombre << " come croquetas con entusiasmo" << endl;
    }
    
    // 📋 Método específico de Perro
    void sacarPaseo() const {
        cout << "🚶 " << nombre << " disfruta del paseo" << endl;
    }
};

// 🐱 Clase derivada: Gato
class Gato : public Animal {
private:
    string color;
    
public:
    // 🎯 Constructor
    Gato(string nombre, string c) : Animal(nombre), color(c) {
        cout << "🐱 Gato de color " << color << " creado" << endl;
    }
    
    // 📋 Implementación de métodos virtuales
    void hacerSonido() const override {
        cout << "🐱 " << nombre << " dice: ¡Miau miau!" << endl;
    }
    
    void moverse() const override {
        cout << "🐱 " << nombre << " se mueve sigilosamente" << endl;
    }
    
    void comer() const override {
        cout << "🍽️ " << nombre << " come pescado con delicadeza" << endl;
    }
    
    void dormir() const override {
        cout << "😴 " << nombre << " duerme en posición de bola" << endl;
    }
    
    // 📋 Método específico de Gato
    void ronronear() const {
        cout << " purr... " << nombre << " ronronea contento" << endl;
    }
};

// 🐦 Clase derivada: Pajaro
class Pajaro : public Animal {
private:
    string especie;
    
public:
    // 🎯 Constructor
    Pajaro(string nombre, string e) : Animal(nombre), especie(e) {
        cout << "🐦 Pájaro de especie " << especie << " creado" << endl;
    }
    
    // 📋 Implementación de métodos virtuales
    void hacerSonido() const override {
        cout << "🐦 " << nombre << " dice: ¡Pío pío!" << endl;
    }
    
    void moverse() const override {
        cout << "🐦 " << nombre << " vuela graciosamente" << endl;
    }
    
    void comer() const override {
        cout << "🍽️ " << nombre << " come semillas y gusanos" << endl;
    }
    
    // 📋 Método específico de Pájaro
    void volar() const {
        cout << "🦅 " << nombre << " surca los cielos" << endl;
    }
};

int main() {
    cout << "🎯 POLIMORFISMO BÁSICO EN C++" << endl;
    cout << "============================" << endl << endl;
    
    // 📊 Animales iniciales
    cout << "📊 Animales iniciales: " << Animal::getContadorAnimales() << endl;
    
    // 🎭 POLIMORFISMO CON PUNTEROS
    cout << "\n🎭 POLIMORFISMO CON PUNTEROS:" << endl;
    
    // 🎯 Crear objetos con punteros a clase base
    Animal* animales[] = {
        new Perro("Bobby", "Labrador"),
        new Gato("Mishi", "Negro"),
        new Pajaro("Piolín", "Canario")
    };
    
    // 📋 Llamar métodos polimórficos
    cout << "\n📋 SONIDOS DE LOS ANIMALES:" << endl;
    for (int i = 0; i < 3; i++) {
        animales[i]->hacerSonido();  // ✅ Llama al método correcto según el tipo real
    }
    
    cout << "\n🚶 MOVIMIENTOS DE LOS ANIMALES:" << endl;
    for (int i = 0; i < 3; i++) {
        animales[i]->moverse();  // ✅ Llama al método correcto según el tipo real
    }
    
    cout << "\n🍽️ COMPORTAMIENTO ALIMENTARIO:" << endl;
    for (int i = 0; i < 3; i++) {
        animales[i]->comer();  // ✅ Llama al método correcto según el tipo real
    }
    
    // 💥 Liberar memoria (destructor virtual importante)
    cout << "\n💥 LIBERANDO MEMORIA:" << endl;
    for (int i = 0; i < 3; i++) {
        delete animales[i];  // ✅ Llama al destructor correcto
    }
    
    cout << "📊 Animales finales: " << Animal::getContadorAnimales() << endl;
    
    // 🔄 POLIMORFISMO CON REFERENCIAS
    cout << "\n🔄 POLIMORFISMO CON REFERENCIAS:" << endl;
    Perro miPerro("Firulais", "Pastor Alemán");
    Gato miGato("Garfield", "Naranja");
    Pajaro miPajaro("Tweety", "Pájaro carpintero");
    
    // 📋 Función que acepta referencia a Animal (polimorfismo)
    cout << "\n📋 DEMOSTRACIÓN CON REFERENCIAS:" << endl;
    auto mostrarAnimal = [](const Animal& animal) {
        cout << "--- Características del animal ---" << endl;
        animal.mostrarNombre();     // ✅ Método no virtual
        animal.hacerSonido();       // ✅ Método virtual
        animal.moverse();           // ✅ Método virtual
        animal.comer();             // ✅ Método virtual
        animal.dormir();            // ✅ Método virtual
        cout << "--------------------------------" << endl;
    };
    
    mostrarAnimal(miPerro);
    mostrarAnimal(miGato);
    mostrarAnimal(miPajaro);
    
    return 0;
}

/*
🔧 FUNCIONES VIRTUALES

🎯 **Tipos de funciones virtuales**:

1️⃣ **virtual**: Permite sobrescritura
```cpp
virtual void metodo() { }
```

2️⃣ **virtual puro (= 0)**: Método abstracto (clase abstracta)
```cpp
virtual void metodo() = 0;
```

3️⃣ **override**: Indica que se está sobrescribiendo (C++11)
```cpp
void metodo() override { }
```

4️⃣ **final**: Impide sobrescritura posterior (C++11)
```cpp
void metodo() final { }
```

🔌 EJEMPLO COMPLETO: SISTEMA DE MEDIOS
*/

// 🏛️ Clase base abstracta: Medio
class Medio {
protected:
    string titulo;
    string autor;
    int duracion;  // minutos
    
public:
    // 🎯 Constructor
    Medio(string t, string a, int d) : titulo(t), autor(a), duracion(d) {}
    
    // 💥 Destructor virtual
    virtual ~Medio() = default;
    
    // 📋 Métodos virtuales puros
    virtual void reproducir() const = 0;
    virtual void pausar() const = 0;
    virtual void detener() const = 0;
    
    // 📋 Método virtual con implementación por defecto
    virtual void mostrarInfo() const {
        cout << "🎵 " << titulo << " por " << autor << " (" << duracion << " min)" << endl;
    }
    
    // 📋 Getters
    string getTitulo() const { return titulo; }
    string getAutor() const { return autor; }
    int getDuracion() const { return duracion; }
};

// 🎵 Clase derivada: Cancion
class Cancion : public Medio {
private:
    string album;
    int ano;
    
public:
    // 🎯 Constructor
    Cancion(string titulo, string autor, int duracion, string alb, int a) 
        : Medio(titulo, autor, duracion), album(alb), ano(a) {}
    
    // 📋 Implementación de métodos virtuales
    void reproducir() const override {
        cout << "🎵 Reproduciendo canción: " << titulo << " del álbum " << album << endl;
    }
    
    void pausar() const override {
        cout << "⏸️ Pausando canción: " << titulo << endl;
    }
    
    void detener() const override {
        cout << "⏹️ Deteniendo canción: " << titulo << endl;
    }
    
    void mostrarInfo() const override {
        Medio::mostrarInfo();
        cout << "   Álbum: " << album << " (" << ano << ")" << endl;
    }
};

// 🎬 Clase derivada: Pelicula
class Pelicula : public Medio {
private:
    string genero;
    string estudio;
    
public:
    // 🎯 Constructor
    Pelicula(string titulo, string autor, int duracion, string gen, string est) 
        : Medio(titulo, autor, duracion), genero(gen), estudio(est) {}
    
    // 📋 Implementación de métodos virtuales
    void reproducir() const override {
        cout << "🎬 Reproduciendo película: " << titulo << " (" << genero << ")" << endl;
    }
    
    void pausar() const override {
        cout << "⏸️ Pausando película: " << titulo << endl;
    }
    
    void detener() const override {
        cout << "⏹️ Deteniendo película: " << titulo << endl;
    }
    
    void mostrarInfo() const override {
        Medio::mostrarInfo();
        cout << "   Género: " << genero << " | Estudio: " << estudio << endl;
    }
};

// 📚 Clase derivada: Audiolibro
class Audiolibro : public Medio {
private:
    string narrador;
    int capitulos;
    
public:
    // 🎯 Constructor
    Audiolibro(string titulo, string autor, int duracion, string narr, int cap) 
        : Medio(titulo, autor, duracion), narrador(narr), capitulos(cap) {}
    
    // 📋 Implementación de métodos virtuales
    void reproducir() const override {
        cout << "📖 Reproduciendo audiolibro: " << titulo << " narrado por " << narrador << endl;
    }
    
    void pausar() const override {
        cout << "⏸️ Pausando audiolibro: " << titulo << endl;
    }
    
    void detener() const override {
        cout << "⏹️ Deteniendo audiolibro: " << titulo << endl;
    }
    
    void mostrarInfo() const override {
        Medio::mostrarInfo();
        cout << "   Narrador: " << narrador << " | Capítulos: " << capitulos << endl;
    }
};

void ejemplo_sistema_medios() {
    cout << "\n🔌 EJEMPLO: SISTEMA DE MEDIOS" << endl;
    cout << "===========================" << endl;
    
    // 🎯 Crear colección polimórfica
    vector<Medio*> medios;
    medios.push_back(new Cancion("Bohemian Rhapsody", "Queen", 6, "A Night at the Opera", 1975));
    medios.push_back(new Pelicula("Inception", "Christopher Nolan", 148, "Ciencia Ficción", "Warner Bros"));
    medios.push_back(new Audiolibro("1984", "George Orwell", 900, "Stephen Fry", 25));
    
    // 📋 Mostrar información de todos los medios
    cout << "📋 BIBLIOTECA DE MEDIOS:" << endl;
    for (const auto& medio : medios) {
        medio->mostrarInfo();
        cout << endl;
    }
    
    // 🎭 Reproducir todos los medios (polimorfismo)
    cout << "🎭 REPRODUCCIÓN DE MEDIOS:" << endl;
    for (const auto& medio : medios) {
        medio->reproducir();
        medio->pausar();
        medio->detener();
        cout << endl;
    }
    
    // 💥 Liberar memoria
    for (auto& medio : medios) {
        delete medio;
    }
}

/*
⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:

1️⃣ **No hacer destructores virtuales en clases base**:
```cpp
class Base {
public:
    ~Base() { }  // ❌ No virtual - problemas al eliminar derivadas
};

class Derivada : public Base {
public:
    ~Derivada() { }  // ❌ Destructor de derivada no se llama
};

Base* ptr = new Derivada();
delete ptr;  // ❌ Solo se llama al destructor de Base
```

2️⃣ **No usar virtual cuando se necesita polimorfismo**:
```cpp
class Base {
public:
    void metodo() { }  // ❌ No virtual
};

class Derivada : public Base {
public:
    void metodo() { }  // ❌ No se llama si se usa puntero a Base
};

Base* ptr = new Derivada();
ptr->metodo();  // ❌ Llama al método de Base, no de Derivada
```

3️⃣ **Olvidar override en métodos sobrescritos**:
```cpp
class Base {
public:
    virtual void metodo() { }
};

class Derivada : public Base {
public:
    void metodo() { }  // ❌ No indica que es sobrescrito
};
```

✅ **Formas correctas**:
```cpp
// ✅ Destructores virtuales
class Base {
public:
    virtual ~Base() = default;  // ✅ Destructor virtual
};

// ✅ Funciones virtuales
class Base {
public:
    virtual void metodo() { }
};

class Derivada : public Base {
public:
    void metodo() override { }  // ✅ Indica sobrescritura
};

// ✅ Uso polimórfico
Base* ptr = new Derivada();
ptr->metodo();  // ✅ Llama al método de Derivada
delete ptr;     // ✅ Llama al destructor de Derivada
```

🔧 EJEMPLO AVANZADO: SISTEMA DE FORMAS
*/

// 🏛️ Clase base abstracta: Forma
class Forma {
protected:
    string color;
    
public:
    // 🎯 Constructor
    Forma(string c) : color(c) {}
    
    // 💥 Destructor virtual
    virtual ~Forma() = default;
    
    // 📋 Métodos virtuales puros
    virtual double calcularArea() const = 0;
    virtual double calcularPerimetro() const = 0;
    virtual void dibujar() const = 0;
    
    // 📋 Método virtual con implementación
    virtual void mostrarInfo() const {
        cout << "🔷 Forma de color " << color << endl;
        cout << "   Área: " << calcularArea() << endl;
        cout << "   Perímetro: " << calcularPerimetro() << endl;
    }
    
    // 📋 Getter
    string getColor() const { return color; }
};

// 🔷 Clase derivada: Rectangulo
class Rectangulo : public Forma {
private:
    double base;
    double altura;
    
public:
    // 🎯 Constructor
    Rectangulo(string color, double b, double a) 
        : Forma(color), base(b), altura(a) {}
    
    // 📋 Implementación de métodos virtuales
    double calcularArea() const override {
        return base * altura;
    }
    
    double calcularPerimetro() const override {
        return 2 * (base + altura);
    }
    
    void dibujar() const override {
        cout << "🔷 Dibujando rectángulo " << color << " de " << base << "x" << altura << endl;
    }
};

// 🔴 Clase derivada: Circulo
class Circulo : public Forma {
private:
    static const double PI;
    double radio;
    
public:
    // 🎯 Constructor
    Circulo(string color, double r) : Forma(color), radio(r) {}
    
    // 📋 Implementación de métodos virtuales
    double calcularArea() const override {
        return PI * radio * radio;
    }
    
    double calcularPerimetro() const override {
        return 2 * PI * radio;
    }
    
    void dibujar() const override {
        cout << "🔴 Dibujando círculo " << color << " de radio " << radio << endl;
    }
};

// 🎯 Inicialización de constante estática
const double Circulo::PI = 3.14159265359;

// 🔺 Clase derivada: Triangulo
class Triangulo : public Forma {
private:
    double base;
    double altura;
    double lado1, lado2, lado3;
    
public:
    // 🎯 Constructor
    Triangulo(string color, double b, double h, double l1, double l2, double l3) 
        : Forma(color), base(b), altura(h), lado1(l1), lado2(l2), lado3(l3) {}
    
    // 📋 Implementación de métodos virtuales
    double calcularArea() const override {
        return (base * altura) / 2;
    }
    
    double calcularPerimetro() const override {
        return lado1 + lado2 + lado3;
    }
    
    void dibujar() const override {
        cout << "🔺 Dibujando triángulo " << color << endl;
    }
};

void ejemplo_formas() {
    cout << "\n🔧 EJEMPLO: SISTEMA DE FORMAS" << endl;
    cout << "===========================" << endl;
    
    // 🎯 Crear colección polimórfica de formas
    vector<Forma*> formas;
    formas.push_back(new Rectangulo("azul", 5.0, 3.0));
    formas.push_back(new Circulo("rojo", 4.0));
    formas.push_back(new Triangulo("verde", 6.0, 4.0, 5.0, 5.0, 6.0));
    
    // 📋 Dibujar todas las formas (polimorfismo)
    cout << "🎨 DIBUJANDO FORMAS:" << endl;
    for (const auto& forma : formas) {
        forma->dibujar();
    }
    
    cout << "\n📋 INFORMACIÓN DE FORMAS:" << endl;
    for (const auto& forma : formas) {
        forma->mostrarInfo();
        cout << endl;
    }
    
    // 💥 Liberar memoria
    for (auto& forma : formas) {
        delete forma;
    }
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🎭 **Sistema de empleados**:
   - Crea una jerarquía de empleados (gerente, desarrollador, diseñador)
   - Implementa métodos virtuales para calcular salario
   - Usa polimorfismo para manejar colecciones de empleados

2. 🎮 **Juego de personajes**:
   - Diseña personajes con diferentes tipos de ataque
   - Implementa métodos virtuales para acciones de combate
   - Usa polimorfismo para manejar equipos de personajes

3. 🏛️ **Sistema de vehículos**:
   - Crea clases para diferentes tipos de vehículos
   - Implementa métodos virtuales para movimiento y mantenimiento
   - Usa polimorfismo para gestionar flotas de vehículos

4. 📚 **Sistema de documentos**:
   - Diseña clases para diferentes tipos de documentos
   - Implementa métodos virtuales para procesamiento
   - Usa polimorfismo para manejar colecciones de documentos

5. 🎵 **Sistema de instrumentos musicales**:
   - Crea clases para diferentes tipos de instrumentos
   - Implementa métodos virtuales para tocar y afinar
   - Usa polimorfismo para manejar orquestas

💡 CONSEJOS PARA POLIMORFISMO EFECTIVO:

✅ **Buenas prácticas**:
- 🎯 Siempre usar destructores virtuales en clases base polimórficas
- 🔧 Usar virtual para métodos que se sobrescribirán
- 📝 Usar override para indicar sobrescritura explícita
- 🧪 Probar con colecciones polimórficas
- 🏗️ Diseñar interfaces claras y cohesivas

❌ **Errores a evitar**:
- 🚫 No hacer destructores virtuales en clases base
- 🔥 Usar punteros a clase base sin funciones virtuales
- 📉 No indicar override en métodos sobrescritos
- 🚫 Crear jerarquías demasiado complejas
- 🔢 No liberar memoria correctamente en objetos polimórficos

🚀 SIGUIENTE PASO:

El polimorfismo es fundamental para:
- 🎭 Crear código flexible y extensible
- 🏗️ Implementar patrones de diseño
- 💪 Desarrollar sistemas mantenibles
- 🎯 Trabajar con colecciones heterogéneas

¡Sigue practicando con polimorfismo en C++!
*/