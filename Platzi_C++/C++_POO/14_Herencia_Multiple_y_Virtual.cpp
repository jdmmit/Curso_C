/*
🎯 ARCHIVO: 14_Herencia_Multiple_y_Virtual.cpp
📚 TEMA: Herencia Múltiple y Herencia Virtual en C++
🎓 NIVEL: Avanzado
📝 DESCRIPCIÓN: Aprende sobre herencia múltiple y el problema del diamante, y cómo resolverlo con herencia virtual

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué es la herencia múltiple en C++
   - Problema del diamante y cómo resolverlo
   - Herencia virtual y su importancia
   - Cómo implementar herencia múltiple correctamente
   - Casos de uso apropiados

💎 HERENCIA MÚLTIPLE EN C++

La herencia múltiple permite que una **clase derive de más de una clase base**. Aunque poderosa, puede generar **problemas de ambigüedad** y el famoso **problema del diamante**.

🎯 **Ventajas**:
- 🔧 Combinar funcionalidades de múltiples clases
- 🎯 Modelar relaciones complejas
- 💪 Mayor flexibilidad en diseño

🎯 **Desafíos**:
- 🚫 Ambigüedad en nombres de miembros
- 🔺 Problema del diamante
- 📉 Complejidad en la jerarquía

🔺 PROBLEMA DEL DIAMANTE

El problema del diamante ocurre cuando una clase hereda de dos clases que a su vez heredan de una misma clase base, creando una estructura en forma de diamante.

```
    Animal
   /      \
Herbivoro  Carnivoro
   \      /
    Omnivoro
```

💻 PROGRAMA PRÁCTICO: HERENCIA MÚLTIPLE
*/

#include <iostream>
#include <string>
using namespace std;

// 🏛️ Clase base: Animal
class Animal {
protected:
    static int numeroDeAnimales;
    string nombre;
    
public:
    // 🎯 Constructor
    Animal(string n = "Animal") : nombre(n) {
        cout << "🐾 Creando " << nombre << endl;
        numeroDeAnimales++;
    }
    
    // 💥 Destructor
    virtual ~Animal() {
        cout << "🐾 Destruyendo " << nombre << endl;
        numeroDeAnimales--;
    }
    
    // 📊 Método estático
    static int obtenerNumeroDeAnimales() {
        return numeroDeAnimales;
    }
    
    // 📋 Método virtual
    virtual void comer() const {
        cout << "🍽️ " << nombre << " está comiendo" << endl;
    }
    
    // 📋 Método para mostrar nombre
    string getNombre() const {
        return nombre;
    }
};

// 🎯 Inicialización de variable estática
int Animal::numeroDeAnimales = 0;

// 🌿 Clase base: Herbivoro
class Herbivoro {
protected:
    string dietaHerbivora;
    
public:
    // 🎯 Constructor
    Herbivoro() : dietaHerbivora("plantas") {
        cout << "🌿 Herbívoro creado" << endl;
    }
    
    // 🌱 Método específico
    void pastar() const {
        cout << "🌿 Comiendo " << dietaHerbivora << endl;
    }
    
    // 📋 Obtener dieta
    string getDietaHerbivora() const {
        return dietaHerbivora;
    }
};

// 🍖 Clase base: Carnivoro
class Carnivoro {
protected:
    string dietaCarnivora;
    
public:
    // 🎯 Constructor
    Carnivoro() : dietaCarnivora("carne") {
        cout << "🍖 Carnívoro creado" << endl;
    }
    
    // 🦴 Método específico
    void cazar() const {
        cout << "🍖 Comiendo " << dietaCarnivora << endl;
    }
    
    // 📋 Obtener dieta
    string getDietaCarnivora() const {
        return dietaCarnivora;
    }
};

// ⚠️ Ejemplo SIN herencia virtual (problema del diamante)
class Mamifero : public Animal {
public:
    Mamifero(string nombre) : Animal(nombre + " (Mamífero)") {
        cout << "哺 Mamífero creado" << endl;
    }
    
    void amamantar() const {
        cout << "🍼 " << getNombre() << " está amamantando" << endl;
    }
};

class Volador : public Animal {
public:
    Volador(string nombre) : Animal(nombre + " (Volador)") {
        cout << "✈️ Volador creado" << endl;
    }
    
    void volar() const {
        cout << "🦅 " << getNombre() << " está volando" << endl;
    }
};

// ⚠️ PROBLEMA: Herencia múltiple sin virtual
// Esta clase tendría DOS subobjetos Animal (ambigüedad)
/*
class Murcielago : public Mamifero, public Volador {
public:
    Murcielago(string nombre) : Mamifero(nombre), Volador(nombre) {
        cout << "🦇 Murciélago creado" << endl;
    }
};
*/

// ✅ SOLUCIÓN: Herencia virtual
class MamiferoVirtual : virtual public Animal {
public:
    MamiferoVirtual(string nombre) : Animal(nombre + " (Mamífero Virtual)") {
        cout << "哺 Mamífero virtual creado" << endl;
    }
    
    void amamantar() const {
        cout << "🍼 " << getNombre() << " está amamantando" << endl;
    }
};

class VoladorVirtual : virtual public Animal {
public:
    VoladorVirtual(string nombre) : Animal(nombre + " (Volador Virtual)") {
        cout << "✈️ Volador virtual creado" << endl;
    }
    
    void volar() const {
        cout << "🦅 " << getNombre() << " está volando" << endl;
    }
};

// 🦇 Clase con herencia múltiple y virtual (solución correcta)
class Murcielago : public MamiferoVirtual, public VoladorVirtual {
public:
    Murcielago(string nombre) : 
        Animal(nombre + " (Murciélago)"),  // ✅ Constructor de clase virtual compartida
        MamiferoVirtual(nombre), 
        VoladorVirtual(nombre) {
        cout << "🦇 Murciélago creado correctamente" << endl;
    }
    
    // 📋 Método sobrescrito
    void comer() const override {
        cout << "🦇 " << getNombre() << " come insectos voladores" << endl;
    }
};

int main() {
    cout << "🎯 HERENCIA MÚLTIPLE Y VIRTUAL EN C++" << endl;
    cout << "====================================" << endl << endl;
    
    // 📊 Animales iniciales
    cout << "📊 Animales iniciales: " << Animal::obtenerNumeroDeAnimales() << endl;
    
    // 🦇 Crear murciélago (herencia múltiple con virtual)
    cout << "\n🦇 CREANDO MURCIÉLAGO:" << endl;
    Murcielago bat("Vampiro");
    cout << "   Total animales: " << Animal::obtenerNumeroDeAnimales() << endl;
    
    // 📋 Funcionalidades del murciélago
    cout << "\n📋 FUNCIONALIDADES DEL MURCIÉLAGO:" << endl;
    bat.comer();      // ✅ Método sobrescrito
    bat.amamantar();  // ✅ De MamiferoVirtual
    bat.volar();      // ✅ De VoladorVirtual
    bat.Animal::comer();  // ✅ Acceso explícito a método de Animal
    
    // 🔄 Demostrar que hay solo un subobjeto Animal
    cout << "\n🔄 VERIFICANDO HERENCIA VIRTUAL:" << endl;
    cout << "   Nombre: " << bat.getNombre() << endl;  // ✅ Sin ambigüedad
    
    return 0;
}

/*
🔧 HERENCIA VIRTUAL

La herencia virtual resuelve el problema del diamante haciendo que **solo exista una instancia** de la clase base compartida, incluso si se hereda múltiples veces.

🏗️ SINTAXIS:
```cpp
class Base { };

class Derivada1 : virtual public Base { };
class Derivada2 : virtual public Base { };
class Multiple : public Derivada1, public Derivada2 { };
```

✅ **Beneficios**:
- 🚫 Elimina ambigüedad en miembros heredados
- 📦 Solo una copia de la clase base
- 🎯 Acceso unificado a miembros de la base

❌ **Consideraciones**:
- 🔧 Mayor costo en memoria y rendimiento
- 📝 Constructor de clase virtual debe llamarse explícitamente
- 🧠 Mayor complejidad en diseño

🔌 EJEMPLO COMPLETO: SISTEMA DE PERSONAJES
*/

// 🎭 Clase base: Habilidad
class Habilidad {
protected:
    string nombreHabilidad;
    int nivel;
    
public:
    Habilidad(string nombre, int niv = 1) : nombreHabilidad(nombre), nivel(niv) {
        cout << "⚔️ Habilidad '" << nombreHabilidad << "' nivel " << nivel << " creada" << endl;
    }
    
    virtual ~Habilidad() = default;
    
    virtual void usar() const {
        cout << "⚔️ Usando " << nombreHabilidad << " (nivel " << nivel << ")" << endl;
    }
    
    string getNombre() const { return nombreHabilidad; }
    int getNivel() const { return nivel; }
};

// 🛡️ Clase base: Defensa
class Defensa {
protected:
    int puntosDefensa;
    
public:
    Defensa(int puntos = 10) : puntosDefensa(puntos) {
        cout << "🛡️ Defensa con " << puntosDefensa << " puntos creada" << endl;
    }
    
    virtual void defender() const {
        cout << "🛡️ Defendiendo con " << puntosDefensa << " puntos" << endl;
    }
    
    int getPuntosDefensa() const { return puntosDefensa; }
};

// ⚔️ Clase base: Ataque
class Ataque {
protected:
    int puntosAtaque;
    
public:
    Ataque(int puntos = 15) : puntosAtaque(puntos) {
        cout << "⚔️ Ataque con " << puntosAtaque << " puntos creado" << endl;
    }
    
    virtual void atacar() const {
        cout << "⚔️ Atacando con " << puntosAtaque << " puntos" << endl;
    }
    
    int getPuntosAtaque() const { return puntosAtaque; }
};

// ✅ Herencia virtual para evitar problemas
class Guerrero : virtual public Habilidad, public Defensa, public Ataque {
protected:
    string nombreGuerrero;
    
public:
    Guerrero(string nombre, string habilidad, int nivelHab = 1, int def = 20, int atk = 25) 
        : Habilidad(habilidad, nivelHab), 
          Defensa(def), 
          Ataque(atk),
          nombreGuerrero(nombre) {
        cout << "⚔️ Guerrero " << nombreGuerrero << " creado" << endl;
    }
    
    void mostrarInfo() const {
        cout << "⚔️ Guerrero: " << nombreGuerrero << endl;
        cout << "   Habilidad: " << getNombre() << " (nivel " << getNivel() << ")" << endl;
        cout << "   Ataque: " << getPuntosAtaque() << " | Defensa: " << getPuntosDefensa() << endl;
    }
    
    // 📋 Métodos combinados
    void combate() const {
        cout << "⚔️ " << nombreGuerrero << " entra en combate:" << endl;
        atacar();
        defender();
        usar();
    }
};

// 🎯 Clase con herencia múltiple compleja
class Paladin : public Guerrero {
public:
    Paladin(string nombre) 
        : Habilidad("Bendición Divina", 5),
          Defensa(30), 
          Ataque(20),
          Guerrero(nombre, "Bendición Divina", 5, 30, 20) {
        cout << "🕍 Paladin " << nombre << " consagrado" << endl;
    }
    
    // 📋 Métodos sobrescritos
    void usar() const override {
        cout << "🕍 " << nombreGuerrero << " canaliza " << getNombre() << endl;
    }
    
    void atacar() const override {
        cout << "⚔️ " << nombreGuerrero << " ataca santamente (" << getPuntosAtaque() << " pts)" << endl;
    }
    
    void defender() const override {
        cout << "🛡️ " << nombreGuerrero << " se protege con fe (" << getPuntosDefensa() << " pts)" << endl;
    }
};

void ejemplo_personajes() {
    cout << "\n🔌 EJEMPLO: SISTEMA DE PERSONAJES" << endl;
    cout << "===============================" << endl;
    
    // ⚔️ Crear guerrero
    Guerrero guerrero("Conan", "Furia Bárbara", 3, 25, 30);
    guerrero.mostrarInfo();
    guerrero.combate();
    
    cout << endl;
    
    // 🕍 Crear paladin
    Paladin paladin("Sir Lancelot");
    paladin.mostrarInfo();
    paladin.combate();
}

/*
⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:

1️⃣ **No usar herencia virtual cuando hay diamante**:
```cpp
class A { };
class B : public A { };      // ❌ Sin virtual
class C : public A { };      // ❌ Sin virtual
class D : public B, public C { };  // ❌ Problema del diamante
```

2️⃣ **No llamar constructor de clase virtual compartida**:
```cpp
class Base { public: Base(int x) { } };
class Der1 : virtual public Base { public: Der1() : Base(1) { } };
class Der2 : virtual public Base { public: Der2() : Base(2) { } };
class Multiple : public Der1, public Der2 {
public:
    Multiple() : /* Base() falta */ Der1(), Der2() { }  // ❌ Error
};
```

3️⃣ **Ambigüedad en nombres de miembros**:
```cpp
class A { public: void metodo() { } };
class B { public: void metodo() { } };
class C : public A, public B { };

C obj;
// obj.metodo();  // ❌ Ambigüedad - ¿cuál método?
```

✅ **Formas correctas**:
```cpp
// ✅ Herencia virtual correcta
class A { public: A(int x) { } };
class B : virtual public A { public: B() : A(1) { } };
class C : virtual public A { public: C() : A(2) { } };
class D : public B, public C {
public:
    D() : A(0), B(), C() { }  // ✅ Constructor de A llamado explícitamente
};

// ✅ Resolución de ambigüedad
D obj;
// obj.A::metodo();  // ✅ Acceso explícito
```

🔧 EJEMPLO AVANZADO: INTERFACES MÚLTIPLES
*/

// 🎯 Interfaces puras (clases abstractas)
class VoladorPuro {
public:
    virtual ~VoladorPuro() = default;
    virtual void despegar() = 0;
    virtual void aterrizar() = 0;
};

class NadadorPuro {
public:
    virtual ~NadadorPuro() = default;
    virtual void sumergir() = 0;
    virtual void emerger() = 0;
};

class CorredorPuro {
public:
    virtual ~CorredorPuro() = default;
    virtual void correr() = 0;
    virtual void detener() = 0;
};

// 🦆 Clase que implementa múltiples interfaces
class Pato : public Animal, 
             public VoladorPuro, 
             public NadadorPuro, 
             public CorredorPuro {
private:
    string tipoPato;
    
public:
    Pato(string tipo) : Animal("Pato " + tipo), tipoPato(tipo) {
        cout << "🦆 Pato " << tipoPato << " creado" << endl;
    }
    
    // 📋 Implementación de interfaces
    void despegar() override {
        cout << "🦆 " << getNombre() << " despega volando" << endl;
    }
    
    void aterrizar() override {
        cout << "🦆 " << getNombre() << " aterriza suavemente" << endl;
    }
    
    void sumergir() override {
        cout << "🦆 " << getNombre() << " se sumerge en el agua" << endl;
    }
    
    void emerger() override {
        cout << "🦆 " << getNombre() << " emerge de la superficie" << endl;
    }
    
    void correr() override {
        cout << "🦆 " << getNombre() << " corre torpemente" << endl;
    }
    
    void detener() override {
        cout << "🦆 " << getNombre() << " se detiene" << endl;
    }
    
    // 📋 Método de Animal
    void comer() const override {
        cout << "🦆 " << getNombre() << " come semillas y peces" << endl;
    }
};

void ejemplo_interfaces() {
    cout << "\n🔧 EJEMPLO: IMPLEMENTACIÓN DE MÚLTIPLES INTERFACES" << endl;
    cout << "================================================" << endl;
    
    Pato pato("Donald");
    
    // 🎯 Usar múltiples interfaces
    cout << "📋 HABILIDADES DEL PATO:" << endl;
    pato.despegar();
    pato.sumergir();
    pato.emerger();
    pato.correr();
    pato.detener();
    pato.aterrizar();
    pato.comer();
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🔺 **Resolver problema del diamante**:
   - Crea una jerarquía que genere el problema del diamante
   - Implementa solución con herencia virtual
   - Verifica que solo exista una instancia de la clase base

2. 🎭 **Sistema de personajes de juego**:
   - Diseña clases base para diferentes tipos de habilidades
   - Crea personajes que hereden múltiples habilidades
   - Usa herencia virtual donde sea necesario

3. 🤖 **Sistema de robots multifuncionales**:
   - Crea interfaces para diferentes capacidades (volar, caminar, etc.)
   - Diseña robots que implementen múltiples interfaces
   - Usa herencia múltiple de forma segura

4. 🏛️ **Sistema de vehículos híbridos**:
   - Crea clases base para diferentes tipos de propulsión
   - Diseña vehículos que combinen múltiples tipos
   - Implementa herencia virtual para componentes compartidos

5. 🎨 **Herramientas de dibujo múltiples**:
   - Crea interfaces para diferentes capacidades de dibujo
   - Diseña herramientas que combinen múltiples funcionalidades
   - Usa herencia múltiple con virtual donde corresponda

💡 CONSEJOS PARA HERENCIA MÚLTIPLE:

✅ **Buenas prácticas**:
- 🎯 Usar herencia virtual cuando haya posible diamante
- 🔧 Llamar explícitamente constructores de clases virtuales
- 📝 Resolver ambigüedades con calificadores de ámbito
- 🧪 Probar cuidadosamente jerarquías complejas
- 🏗️ Preferir composición cuando la herencia múltiple no sea necesaria

❌ **Errores a evitar**:
- 🚫 Usar herencia múltiple sin entender las implicaciones
- 🔥 No manejar ambigüedades en nombres de miembros
- 📉 Crear jerarquías innecesariamente complejas
- 🚫 Olvidar constructores de clases virtuales base
- 🔢 No considerar el costo en rendimiento de virtual

🚀 SIGUIENTE PASO:

La herencia múltiple y virtual es ideal para:
- 🎭 Implementar múltiples interfaces
- 🏗️ Combinar funcionalidades independientes
- 💪 Crear diseños flexibles y extensibles
- 🎯 Modelar relaciones complejas de "es-un"

¡Sigue practicando con herencia múltiple en C++!
*/