/*
🎯 ARCHIVO: 13_Herencia_Basica.cpp
📚 TEMA: Herencia Básica en C++ (Fundamentos de POO)
🎓 NIVEL: Intermedio
📝 DESCRIPCIÓN: Aprende los fundamentos de la herencia en C++, creando jerarquías de clases

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué es la herencia en Programación Orientada a Objetos
   - Cómo implementar herencia en C++
   - Clases base y clases derivadas
   - Relación "es-un" en herencia
   - Modificadores de acceso en herencia

🌳 HERENCIA EN C++

La herencia es un **pilar fundamental** de la Programación Orientada a Objetos que permite **crear nuevas clases basadas en clases existentes**. La clase nueva (derivada) **hereda atributos y métodos** de la clase original (base), y puede **añadir o modificar** funcionalidades.

🎯 **Beneficios de la herencia**:
- 🔁 **Reutilización de código**: No repetir código común
- 🏗️ **Extensibilidad**: Añadir nuevas funcionalidades
- 🎯 **Jerarquía de clases**: Organización lógica de tipos relacionados
- 💪 **Polimorfismo**: Uso de objetos de diferentes tipos de manera uniforme

🏗️ CONCEPTOS CLAVE

1️⃣ **Clase base (padre)**: Clase original de la que se hereda
2️⃣ **Clase derivada (hija)**: Clase nueva que hereda de la base
3️⃣ **Relación "es-un"**: Un objeto derivado "es un" objeto de la clase base

💻 PROGRAMA PRÁCTICO: HERENCIA BÁSICA
*/

#include <iostream>
#include <string>
using namespace std;

// 🏛️ Clase base: Animal
class Animal {
protected:  // 🛡️ Accesible desde clase y derivadas
    static int numeroDeAnimales;
    string alimento;
    
public:
    // 🎯 Constructor
    Animal() {
        cout << "🐾 Creando un nuevo animal..." << endl;
        numeroDeAnimales++;
    }
    
    // 💥 Destructor
    ~Animal() {
        cout << "🐾 Borrando animal..." << endl;
        numeroDeAnimales--;
    }
    
    // 📊 Método estático
    static int obtenerNumeroDeAnimales() {
        return numeroDeAnimales;
    }
    
    // 📋 Métodos públicos
    string obtenerAlimento() const {
        return alimento;
    }
    
    void comer() const {
        cout << "🍽️ El animal está comiendo " << alimento << " ñom ñom" << endl;
    }
};

// 🎯 Inicialización de variable estática
int Animal::numeroDeAnimales = 0;

// 🐄 Clase derivada: Herbívoro
class Herbivoro : public Animal {
public:
    // 🎯 Constructor
    Herbivoro() : Animal() {
        this->alimento = "plantas";
        cout << "🌿 Herbívoro creado" << endl;
    }
    
    // 🌿 Método específico de herbívoros
    void pastar() const {
        cout << "🌿 El herbívoro está pastando tranquilamente" << endl;
    }
};

// 🐺 Clase derivada: Carnívoro
class carnivoro : public Animal {
public:
    // 🎯 Constructor
    carnivoro() : Animal() {
        this->alimento = "carne";
        cout << "🍖 Carnívoro creado" << endl;
    }
    
    // 🦴 Método específico de carnívoros
    void cazar() const {
        cout << "🐾 El carnívoro está acechando su presa" << endl;
    }
};

// 🐻 Clase derivada: Omnívoro
class Omnivoro : public Animal {
public:
    // 🎯 Constructor
    Omnivoro() : Animal() {
        this->alimento = "plantas y carne";
        cout << "さまざ Omnívoro creado" << endl;
    }
    
    // 🍎 Método específico de omnívoros
    void buscarComida() const {
        cout << "🔍 El omnívoro busca comida variada" << endl;
    }
};

int main() {
    cout << "🎯 HERENCIA BÁSICA EN C++" << endl;
    cout << "========================" << endl << endl;
    
    // 📊 Animales iniciales
    cout << "📊 Animales iniciales: " << Animal::obtenerNumeroDeAnimales() << endl;
    
    // 🐄 Crear herbívoro
    cout << "\n🌿 CREANDO HERBÍVORO:" << endl;
    Herbivoro vaca;
    cout << "   Alimento: " << vaca.obtenerAlimento() << endl;
    vaca.comer();
    vaca.pastar();
    cout << "   Total animales: " << Animal::obtenerNumeroDeAnimales() << endl;
    
    // 🐺 Crear carnívoro
    cout << "\n🍖 CREANDO CARNÍVORO:" << endl;
    carnivoro lobo;
    cout << "   Alimento: " << lobo.obtenerAlimento() << endl;
    lobo.comer();
    lobo.cazar();
    cout << "   Total animales: " << Animal::obtenerNumeroDeAnimales() << endl;
    
    // 🐻 Crear omnívoro
    cout << "\nさまざ CREANDO OMNÍVORO:" << endl;
    Omnivoro oso;
    cout << "   Alimento: " << oso.obtenerAlimento() << endl;
    oso.comer();
    oso.buscarComida();
    cout << "   Total animales: " << Animal::obtenerNumeroDeAnimales() << endl;
    
    // 🔄 Relación "es-un"
    cout << "\n🔄 RELACIÓN 'ES-UN':" << endl;
    cout << "   ¿Vaca es un Animal? ";
    if (dynamic_cast<Animal*>(&vaca)) {
        cout << "✅ Sí" << endl;
    }
    
    cout << "   ¿Lobo es un Animal? ";
    if (dynamic_cast<Animal*>(&lobo)) {
        cout << "✅ Sí" << endl;
    }
    
    cout << "   ¿Oso es un Animal? ";
    if (dynamic_cast<Animal*>(&oso)) {
        cout << "✅ Sí" << endl;
    }
    
    return 0;
}

/*
🔧 TIPOS DE HERENCIA

🎯 **Modificadores de herencia**:

1️⃣ **public**: Herencia pública (más común)
```cpp
class Derivada : public Base {
    // Miembros públicos de Base siguen siendo públicos
    // Miembros protegidos de Base siguen siendo protegidos
}
```

2️⃣ **protected**: Herencia protegida
```cpp
class Derivada : protected Base {
    // Miembros públicos de Base se vuelven protegidos
    // Miembros protegidos de Base siguen siendo protegidos
}
```

3️⃣ **private**: Herencia privada
```cpp
class Derivada : private Base {
    // Todos los miembros de Base se vuelven privados
}
```

🔌 EJEMPLO COMPLETO: VEHÍCULOS
*/

// 🏛️ Clase base: Vehiculo
class Vehiculo {
protected:
    string marca;
    string modelo;
    int año;
    
public:
    // 🎯 Constructor
    Vehiculo(string m = "Desconocida", string mod = "Desconocido", int a = 0) 
        : marca(m), modelo(mod), año(a) {
        cout << "🚗 Vehículo " << marca << " " << modelo << " creado" << endl;
    }
    
    // 💥 Destructor
    virtual ~Vehiculo() {
        cout << "🚗 Vehículo " << marca << " " << modelo << " destruido" << endl;
    }
    
    // 📋 Métodos virtuales
    virtual void mostrarInfo() const {
        cout << "🚗 " << marca << " " << modelo << " (" << año << ")" << endl;
    }
    
    virtual void arrancar() const {
        cout << "🔑 Arrancando vehículo " << marca << " " << modelo << endl;
    }
};

// 🚗 Clase derivada: Coche
class Coche : public Vehiculo {
private:
    int puertas;
    
public:
    // 🎯 Constructor
    Coche(string marca, string modelo, int año, int p) 
        : Vehiculo(marca, modelo, año), puertas(p) {
        cout << "🚘 Coche con " << puertas << " puertas" << endl;
    }
    
    // 📋 Métodos específicos
    void mostrarInfo() const override {
        Vehiculo::mostrarInfo();
        cout << "   Puertas: " << puertas << endl;
    }
    
    void arrancar() const override {
        cout << "🔑 Arrancando coche " << marca << " " << modelo << " con llave" << endl;
    }
    
    void tocarBocina() const {
        cout << "🎵 ¡Bip bip! (Coche " << marca << ")" << endl;
    }
};

// 🚲 Clase derivada: Bicicleta
class Bicicleta : public Vehiculo {
private:
    string tipo;
    
public:
    // 🎯 Constructor
    Bicicleta(string marca, string modelo, int año, string t) 
        : Vehiculo(marca, modelo, año), tipo(t) {
        cout << "🚲 Bicicleta tipo " << tipo << endl;
    }
    
    // 📋 Métodos específicos
    void mostrarInfo() const override {
        Vehiculo::mostrarInfo();
        cout << "   Tipo: " << tipo << endl;
    }
    
    void arrancar() const override {
        cout << "🚴 Pedaleando bicicleta " << marca << " " << modelo << endl;
    }
    
    void hacerCampana() const {
        cout << "🔔 ¡Ding ding! (Bicicleta " << marca << ")" << endl;
    }
};

void ejemplo_vehiculos() {
    cout << "\n🔌 EJEMPLO: JERARQUÍA DE VEHÍCULOS" << endl;
    cout << "================================" << endl;
    
    // 🚗 Crear diferentes vehículos
    Coche coche("Toyota", "Corolla", 2023, 4);
    Bicicleta bici("Trek", "Mountain", 2022, "Montaña");
    
    // 📋 Mostrar información
    cout << "\n📋 INFORMACIÓN DE VEHÍCULOS:" << endl;
    coche.mostrarInfo();
    bici.mostrarInfo();
    
    // 🚘 Arrancar vehículos
    cout << "\n🔑 ARRANCAR VEHÍCULOS:" << endl;
    coche.arrancar();
    bici.arrancar();
    
    // 🎵 Funcionalidades específicas
    cout << "\n🎵 FUNCIONALIDADES ESPECÍFICAS:" << endl;
    coche.tocarBocina();
    bici.hacerCampana();
}

/*
⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:

1️⃣ **No usar virtual en destructores de clases base**:
```cpp
class Base {
public:
    ~Base() { }  // ❌ No virtual - problemas con delete
};

class Derivada : public Base {
public:
    ~Derivada() { }  // Destructor de derivada no se llama
};
```

2️⃣ **Acceder a miembros privados de la clase base**:
```cpp
class Base {
private:
    int dato;
};

class Derivada : public Base {
public:
    void metodo() {
        // dato = 5;  // ❌ No accesible - es private
    }
};
```

3️⃣ **Herencia incorrecta de constructores**:
```cpp
class Base {
public:
    Base(int valor) { }
};

class Derivada : public Base {
public:
    Derivada() {
        // Base();  // ❌ Constructor por defecto no existe
    }
};
```

✅ **Formas correctas**:
```cpp
class Base {
public:
    virtual ~Base() = default;  // ✅ Destructor virtual
    
protected:
    int dato;  // ✅ Protected para acceso en derivadas
};

class Derivada : public Base {
public:
    Derivada() : Base() { }  // ✅ Llamar constructor de base
    
    void metodo() {
        dato = 5;  // ✅ Accesible por ser protected
    }
};
```

🔧 EJEMPLO AVANZADO: SISTEMA DE FIGURAS
*/

// 🏛️ Clase base abstracta: Figura
class Figura {
protected:
    string nombre;
    
public:
    // 🎯 Constructor
    Figura(string n) : nombre(n) {}
    
    // 💥 Destructor virtual
    virtual ~Figura() = default;
    
    // 📋 Métodos virtuales puros (clase abstracta)
    virtual double calcularArea() const = 0;
    virtual double calcularPerimetro() const = 0;
    virtual void mostrarInfo() const {
        cout << "🔷 " << nombre << endl;
    }
};

// 🔷 Clase derivada: Rectangulo
class Rectangulo : public Figura {
private:
    double base;
    double altura;
    
public:
    // 🎯 Constructor
    Rectangulo(double b, double a) : Figura("Rectángulo"), base(b), altura(a) {}
    
    // 📋 Implementación de métodos virtuales
    double calcularArea() const override {
        return base * altura;
    }
    
    double calcularPerimetro() const override {
        return 2 * (base + altura);
    }
    
    void mostrarInfo() const override {
        Figura::mostrarInfo();
        cout << "   Base: " << base << " | Altura: " << altura << endl;
        cout << "   Área: " << calcularArea() << " | Perímetro: " << calcularPerimetro() << endl;
    }
};

// 🔴 Clase derivada: Circulo
class Circulo : public Figura {
private:
    static const double PI;
    double radio;
    
public:
    // 🎯 Constructor
    Circulo(double r) : Figura("Círculo"), radio(r) {}
    
    // 📋 Implementación de métodos virtuales
    double calcularArea() const override {
        return PI * radio * radio;
    }
    
    double calcularPerimetro() const override {
        return 2 * PI * radio;
    }
    
    void mostrarInfo() const override {
        Figura::mostrarInfo();
        cout << "   Radio: " << radio << endl;
        cout << "   Área: " << calcularArea() << " | Perímetro: " << calcularPerimetro() << endl;
    }
};

// 🎯 Inicialización de constante estática
const double Circulo::PI = 3.14159265359;

void ejemplo_figuras() {
    cout << "\n🔧 EJEMPLO: SISTEMA DE FIGURAS" << endl;
    cout << "=============================" << endl;
    
    // 🔷 Crear figuras
    Rectangulo rect(5.0, 3.0);
    Circulo circ(4.0);
    
    // 📋 Mostrar información usando polimorfismo
    Figura* figuras[] = {&rect, &circ};
    
    cout << "🔷 INFORMACIÓN DE FIGURAS:" << endl;
    for (int i = 0; i < 2; i++) {
        figuras[i]->mostrarInfo();
        cout << endl;
    }
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🌳 **Jerarquías de animales**:
   - Crea clases base y derivadas para diferentes tipos de animales
   - Implementa características comunes y específicas
   - Usa herencia pública para compartir funcionalidades

2. 🏗️ **Sistema de empleados**:
   - Diseña una jerarquía de empleados (gerente, desarrollador, etc.)
   - Implementa atributos y métodos comunes y específicos
   - Usa constructores adecuados para inicialización

3. 🎮 **Juego de personajes**:
   - Crea clases base para personajes de un juego
   - Diseña diferentes tipos de personajes (guerrero, mago, arquero)
   - Implementa habilidades específicas para cada tipo

4. 🏛️ **Sistema de vehículos**:
   - Diseña una jerarquía de vehículos (coche, moto, camión)
   - Implementa características comunes y particulares
   - Usa métodos virtuales para comportamientos específicos

5. 📐 **Figuras geométricas**:
   - Crea una clase base abstracta para figuras
   - Diseña clases derivadas para diferentes figuras
   - Implementa cálculo de área y perímetro

💡 CONSEJOS PARA HERENCIA EFECTIVA:

✅ **Buenas prácticas**:
- 🎯 Usar herencia cuando hay una relación "es-un" clara
- 🔧 Hacer destructores virtuales en clases base
- 📝 Usar protected para miembros que necesiten acceso en derivadas
- 🧪 Probar la jerarquía con objetos polimórficos
- 🏗️ Diseñar jerarquías planas (evitar herencia profunda)

❌ **Errores a evitar**:
- 🚫 Usar herencia solo por reutilización de código (prefiere composición)
- 🔥 No hacer destructores virtuales en clases base
- 📉 Heredar de clases que no están diseñadas para ello
- 🚫 Crear jerarquías demasiado profundas o complejas
- 🔢 No considerar el principio de sustitución de Liskov

🚀 SIGUIENTE PASO:

La herencia es fundamental para:
- 🏗️ Crear jerarquías de clases lógicas
- 🔁 Reutilizar código de forma efectiva
- 🎯 Implementar polimorfismo
- 💪 Desarrollar sistemas extensibles

¡Sigue practicando con herencia en C++!
*/