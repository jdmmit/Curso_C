/*
🎯 ARCHIVO: 11_Encadenamiento_de_Metodos.cpp
📚 TEMA: Encadenamiento de Métodos (Method Chaining) en C++
🎓 NIVEL: Intermedio
📝 DESCRIPCIÓN: Aprende a encadenar métodos en C++ para crear código más fluido y legible

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué es el encadenamiento de métodos
   - Cómo implementar method chaining en C++
   - Uso del puntero this
   - Beneficios de métodos encadenados
   - Aplicaciones prácticas

🔗 ENCADENAMIENTO DE MÉTODOS

El encadenamiento de métodos (method chaining) es una técnica que permite **llamar múltiples métodos en una sola instrucción** sobre el mismo objeto. Se logra haciendo que cada método retorne una referencia al objeto mismo (`*this`).

🎯 **Ventajas del encadenamiento**:
- 📝 **Código más legible**: Operaciones fluidas y naturales
- ⚡ **Menos repetición**: No hay que escribir el nombre del objeto varias veces
- 🎯 **Interfaz fluida**: Estilo de programación más natural
- 🔧 **Configuración fácil**: Configurar múltiples propiedades de forma concisa

🏗️ CÓMO FUNCIONA

Para implementar method chaining, cada método debe **retornar una referencia al objeto** (`return *this`):

```cpp
class Clase {
public:
    Clase& metodo1() {
        // Hacer algo
        return *this;  // Retornar referencia al objeto
    }
    
    Clase& metodo2() {
        // Hacer algo más
        return *this;  // Retornar referencia al objeto
    }
};

// Uso con encadenamiento:
objeto.metodo1().metodo2();
```

💻 PROGRAMA PRÁCTICO: ENCADENAMIENTO DE MÉTODOS
*/

#include <iostream>
#include <string>
using namespace std;

// 🏛️ Clase Persona con method chaining
class Persona {
private:
    string nombre;
    int edad;
    string ciudad;
    string profesion;
    
public:
    // 🎯 Constructor
    Persona(string n = "Desconocido") : nombre(n), edad(0), ciudad("Desconocida"), profesion("Desconocida") {
        cout << "🏗️ Persona creada: " << nombre << endl;
    }
    
    // 💥 Destructor
    ~Persona() {
        cout << "💣 Persona destruida: " << nombre << endl;
    }
    
    // 🔄 Métodos que retornan referencia al objeto (method chaining)
    Persona& cambiarNombre(string nuevoNombre) {
        this->nombre = nuevoNombre;
        return *this;  // 🔗 Retornar referencia para encadenamiento
    }
    
    Persona& cambiarEdad(int nuevaEdad) {
        this->edad = nuevaEdad;
        return *this;  // 🔗 Retornar referencia para encadenamiento
    }
    
    Persona& cambiarCiudad(string nuevaCiudad) {
        this->ciudad = nuevaCiudad;
        return *this;  // 🔗 Retornar referencia para encadenamiento
    }
    
    Persona& cambiarProfesion(string nuevaProfesion) {
        this->profesion = nuevaProfesion;
        return *this;  // 🔗 Retornar referencia para encadenamiento
    }
    
    // 🗣️ Método para mostrar información
    void mostrarInfo() const {
        cout << "👤 " << nombre << " (" << edad << " años)" << endl;
        cout << "   Ciudad: " << ciudad << " | Profesión: " << profesion << endl;
    }
    
    // 🎯 Método que no retorna referencia (operación terminal)
    void saludar() const {
        cout << "👋 Hola, soy " << nombre << " y vivo en " << ciudad << endl;
    }
};

int main() {
    cout << "🎯 ENCADENAMIENTO DE MÉTODOS EN C++" << endl;
    cout << "=================================" << endl << endl;
    
    // 🎯 Crear objeto
    Persona p1("Diana");
    
    // 🔗 Encadenamiento de métodos
    cout << "🔗 ENCADENAMIENTO DE MÉTODOS:" << endl;
    p1.cambiarEdad(26)
      .cambiarCiudad("Madrid")
      .cambiarProfesion("Ingeniera")
      .mostrarInfo();
    
    // 🔄 Comparación: Sin encadenamiento vs Con encadenamiento
    cout << "\n🔄 COMPARACIÓN DE ESTILOS:" << endl;
    
    // ❌ Sin encadenamiento (estilo tradicional)
    cout << "❌ Sin encadenamiento:" << endl;
    Persona p2("Carlos");
    p2.cambiarEdad(30);
    p2.cambiarCiudad("Barcelona");
    p2.cambiarProfesion("Diseñador");
    p2.mostrarInfo();
    
    // ✅ Con encadenamiento (estilo fluido)
    cout << "\n✅ Con encadenamiento:" << endl;
    Persona p3("María");
    p3.cambiarEdad(28).cambiarCiudad("Valencia").cambiarProfesion("Médica").mostrarInfo();
    
    // 🎯 Ejemplo con método terminal
    cout << "\n🎯 MÉTODO TERMINAL:" << endl;
    p1.saludar();  // Método que no retorna referencia, termina la cadena
    
    return 0;
}

/*
🔧 CÓMO IMPLEMENTAR METHOD CHAINING

🎯 **Pasos para implementar**:

1️⃣ **Retornar referencia al objeto**:
```cpp
Clase& metodo() {
    // Hacer algo
    return *this;  // Retornar referencia al objeto actual
}
```

2️⃣ **Usar const para métodos de solo lectura**:
```cpp
const Clase& metodo() const {
    // Hacer algo sin modificar
    return *this;
}
```

3️⃣ **Combinar métodos modificadores y no modificadores**:
```cpp
// Métodos modificadores retornan Clase&
Clase& setValor(int v) {
    valor = v;
    return *this;
}

// Métodos de solo lectura retornan const Clase&
const Clase& mostrar() const {
    cout << valor << endl;
    return *this;
}
```

🔌 EJEMPLO COMPLETO: CONSTRUCTOR FLUENTE
*/

class Vehiculo {
private:
    string marca;
    string modelo;
    int año;
    string color;
    double precio;
    
public:
    // 🎯 Constructor
    Vehiculo(string m = "Desconocida") : marca(m), modelo("Desconocido"), año(0), color("Blanco"), precio(0.0) {}
    
    // 🔄 Métodos con method chaining
    Vehiculo& setModelo(string m) {
        modelo = m;
        return *this;
    }
    
    Vehiculo& setAño(int a) {
        año = a;
        return *this;
    }
    
    Vehiculo& setColor(string c) {
        color = c;
        return *this;
    }
    
    Vehiculo& setPrecio(double p) {
        precio = p;
        return *this;
    }
    
    // 📋 Método de solo lectura (const)
    const Vehiculo& mostrarInfo() const {
        cout << "🚗 " << marca << " " << modelo << " (" << año << ")" << endl;
        cout << "   Color: " << color << " | Precio: $" << precio << endl;
        return *this;  // ✅ También puede encadenarse
    }
    
    // 🎯 Método terminal (no retorna referencia)
    void comprar() const {
        cout << "🛒 ¡Vehículo comprado por $" << precio << "!" << endl;
    }
};

void ejemplo_constructor_fluente() {
    cout << "\n🔌 EJEMPLO: CONSTRUCTOR FLUENTE" << endl;
    cout << "==============================" << endl;
    
    // 🔗 Configuración fluida de un vehículo
    Vehiculo coche("Toyota");
    coche.setModelo("Corolla")
         .setAño(2023)
         .setColor("Rojo")
         .setPrecio(25000.0)
         .mostrarInfo();
    
    coche.comprar();  // Método terminal
}

/*
⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:

1️⃣ **No retornar referencia**:
```cpp
void metodo() {
    // Hacer algo
    // ❌ No se puede encadenar
}
```

2️⃣ **Retornar por valor en lugar de referencia**:
```cpp
Persona metodo() {  // ❌ Retorna copia
    // Hacer algo
    return *this;   // Crea copia innecesaria
}
```

3️⃣ **No considerar métodos const**:
```cpp
const Clase& metodo() const {
    // Hacer algo
    return *this;
}
```

✅ **Formas correctas**:
```cpp
// ✅ Métodos modificadores
Clase& metodo() {
    // Hacer algo
    return *this;
}

// ✅ Métodos de solo lectura
const Clase& metodo() const {
    // Hacer algo sin modificar
    return *this;
}

// ✅ Métodos terminales (no encadenables)
void metodo() {
    // Operación final
}
```

🔧 EJEMPLO AVANZADO: BUILDER PATTERN
*/

class Computadora {
private:
    string procesador;
    int ram;
    int almacenamiento;
    string gpu;
    string sistemaOperativo;
    
public:
    // 🎯 Constructor
    Computadora() : procesador("Intel i5"), ram(8), almacenamiento(512), gpu("Integrada"), sistemaOperativo("Windows") {}
    
    // 🔄 Métodos con method chaining
    Computadora& setProcesador(string p) {
        procesador = p;
        return *this;
    }
    
    Computadora& setRAM(int r) {
        ram = r;
        return *this;
    }
    
    Computadora& setAlmacenamiento(int a) {
        almacenamiento = a;
        return *this;
    }
    
    Computadora& setGPU(string g) {
        gpu = g;
        return *this;
    }
    
    Computadora& setSistemaOperativo(string so) {
        sistemaOperativo = so;
        return *this;
    }
    
    // 📋 Mostrar configuración
    const Computadora& mostrarConfiguracion() const {
        cout << "\n💻 CONFIGURACIÓN DE COMPUTADORA:" << endl;
        cout << "   Procesador: " << procesador << endl;
        cout << "   RAM: " << ram << " GB" << endl;
        cout << "   Almacenamiento: " << almacenamiento << " GB" << endl;
        cout << "   GPU: " << gpu << endl;
        cout << "   Sistema Operativo: " << sistemaOperativo << endl;
        return *this;
    }
    
    // 🎯 Método terminal
    void encender() const {
        cout << "⚡ ¡Computadora encendida con " << sistemaOperativo << "!" << endl;
    }
};

void ejemplo_builder_pattern() {
    cout << "\n🔧 EJEMPLO: BUILDER PATTERN" << endl;
    cout << "==========================" << endl;
    
    // 🔗 Configuración fluida de una computadora
    Computadora pc;
    pc.setProcesador("AMD Ryzen 7")
      .setRAM(32)
      .setAlmacenamiento(1000)
      .setGPU("RTX 4080")
      .setSistemaOperativo("Ubuntu")
      .mostrarConfiguracion();
    
    pc.encender();  // Método terminal
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🔗 **Clases básicas con method chaining**:
   - Crea clases con múltiples atributos configurables
   - Implementa métodos que retornen referencias
   - Practica con diferentes combinaciones de métodos

2. 🏗️ **Constructor fluido**:
   - Diseña clases que se configuren de forma fluida
   - Implementa patrón builder con method chaining
   - Crea objetos complejos con configuraciones múltiples

3. 📦 **Sistema de configuración**:
   - Crea clases para configurar aplicaciones
   - Usa method chaining para establecer múltiples opciones
   - Implementa validaciones en los setters

4. 🎨 **API de dibujo**:
   - Diseña clases para crear formas gráficas
   - Usa method chaining para configurar propiedades
   - Combina métodos modificadores y de solo lectura

5. 🔄 **Cadenas largas de métodos**:
   - Crea clases con muchos métodos encadenables
   - Practica con cadenas de 5 o más métodos
   - Combina métodos terminales y encadenables

💡 CONSEJOS PARA METHOD CHAINING EFECTIVO:

✅ **Buenas prácticas**:
- 🎯 Retornar Clase& para métodos modificadores
- 🔧 Retornar const Clase& para métodos de solo lectura
- 📝 Usar const en métodos que no modifican el objeto
- 🧪 Probar todas las combinaciones de encadenamiento
- 🎯 Marcar métodos terminales que no retornan referencia

❌ **Errores a evitar**:
- 🚫 No retornar referencia cuando se espera encadenamiento
- 🔥 Retornar copias innecesarias
- 📉 No considerar métodos const para operaciones de solo lectura
- 🚫 Encadenar métodos que no están diseñados para ello
- 🔢 No validar parámetros en métodos encadenables

🚀 SIGUIENTE PASO:

El encadenamiento de métodos es ideal para:
- 🎯 Crear APIs fluidas y legibles
- 🔧 Configurar objetos complejos
- 🏗️ Implementar patrones de diseño como Builder
- 💪 Desarrollar interfaces intuitivas

¡Sigue practicando con method chaining en C++!
*/