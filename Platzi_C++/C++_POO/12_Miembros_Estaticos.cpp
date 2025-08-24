/*
🎯 ARCHIVO: 12_Miembros_Estaticos.cpp
📚 TEMA: Miembros Estáticos en C++ (Variables y Métodos)
🎓 NIVEL: Intermedio
📝 DESCRIPCIÓN: Aprende sobre miembros estáticos, variables y métodos compartidos por todas las instancias

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué son los miembros estáticos en C++
   - Variables estáticas y cómo se comparten
   - Métodos estáticos y su uso
   - Diferencias entre miembros estáticos e instanciados
   - Aplicaciones prácticas de miembros estáticos

📊 MIEMBROS ESTÁTICOS EN C++

Los miembros estáticos son **elementos de una clase** que pertenecen a la **clase en sí**, no a ninguna instancia específica. **Todas las instancias** de la clase **comparten** el mismo miembro estático.

🎯 **Características clave**:
- 📦 **Compartidos**: Una sola copia para todas las instancias
- 🏛️ **De clase**: No necesitan instancia para existir
- ⚡ **Acceso directo**: Se accede con nombre de clase + operador de resolución de alcance (::)
- 🧮 **Contadores**: Ideales para llevar cuenta de objetos

🏗️ TIPOS DE MIEMBROS ESTÁTICOS

1️⃣ **Variables estáticas**: Datos compartidos por todas las instancias
2️⃣ **Métodos estáticos**: Funciones que pertenecen a la clase, no a instancias

💻 PROGRAMA PRÁCTICO: MIEMBROS ESTÁTICOS
*/

#include <iostream>
#include <string>
using namespace std;

// 🏛️ Clase Persona con miembros estáticos
class Persona {
private:
    string nombre;
    int edad;
    
public:
    // 📊 Variable estática (compartida por todas las instancias)
    static int numero_personas;
    
    // 🎯 Constructor
    Persona(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
        numero_personas++;  // 🔢 Incrementar contador al crear persona
        cout << "🏗️ Persona #" << numero_personas << " creada: " << nombre << endl;
    }
    
    // 💥 Destructor
    ~Persona() {
        numero_personas--;  // 🔢 Decrementar contador al destruir persona
        cout << "💣 Persona destruida: " << nombre << " (quedan " << numero_personas << ")" << endl;
    }
    
    // 📋 Método de instancia (accede a datos específicos de cada objeto)
    void mostrarInfo() const {
        cout << "👤 " << nombre << " (" << edad << " años)" << endl;
    }
    
    // 📊 Método estático (pertenece a la clase, no a instancias)
    static int obtenerNumeroPersonas() {
        return numero_personas;
    }
    
    // 🔄 Método estático para mostrar estadísticas
    static void mostrarEstadisticas() {
        cout << "📈 Total de personas creadas: " << numero_personas << endl;
    }
};

// 🎯 Inicialización de variable estática (fuera de la clase)
int Persona::numero_personas = 0;

int main() {
    cout << "🎯 MIEMBROS ESTÁTICOS EN C++" << endl;
    cout << "===========================" << endl << endl;
    
    // 📊 Acceder a miembro estático sin instanciar
    cout << "📊 ACCESO SIN INSTANCIAR:" << endl;
    cout << "   Personas iniciales: " << Persona::obtenerNumeroPersonas() << endl;
    Persona::mostrarEstadisticas();
    
    // 🎯 Crear objetos y observar contador
    cout << "\n🏗️ CREANDO OBJETOS:" << endl;
    {
        Persona p1("Diana", 26);
        cout << "   Personas después de p1: " << Persona::obtenerNumeroPersonas() << endl;
        
        Persona p2("Carlos", 30);
        cout << "   Personas después de p2: " << Persona::obtenerNumeroPersonas() << endl;
        
        Persona p3("María", 28);
        cout << "   Personas después de p3: " << Persona::obtenerNumeroPersonas() << endl;
        
        // 📋 Métodos de instancia
        cout << "\n📋 INFORMACIÓN DE PERSONAS:" << endl;
        p1.mostrarInfo();
        p2.mostrarInfo();
        p3.mostrarInfo();
        
        // 📊 Acceder a miembros estáticos desde instancias (no recomendado)
        cout << "\n📊 ACCESO DESDE INSTANCIAS:" << endl;
        cout << "   Personas desde p1: " << p1.obtenerNumeroPersonas() << endl;
        cout << "   Personas desde p2: " << p2.obtenerNumeroPersonas() << endl;
    }  // 💥 Destructores llamados al salir del ámbito
    
    cout << "\n📊 ESTADO FINAL:" << endl;
    cout << "   Personas restantes: " << Persona::obtenerNumeroPersonas() << endl;
    
    return 0;
}

/*
🔧 VARIABLES ESTÁTICAS

🎯 **Características**:
- 📦 Una sola copia compartida por todas las instancias
- 🏛️ Pertenece a la clase, no a objetos individuales
- 🔢 Ideal para contadores, IDs, configuraciones globales

🏗️ SINTAXIS:
```cpp
class Clase {
public:
    static tipo variable;  // Declaración
};

tipo Clase::variable = valor;  // Definición e inicialización
```

🔌 EJEMPLO COMPLETO: SISTEMA DE ID ÚNICO
*/

class Producto {
private:
    static int proximo_id;  // 📊 Contador de IDs
    int id;
    string nombre;
    double precio;
    
public:
    // 🎯 Constructor
    Producto(string nom, double pre) : nombre(nom), precio(pre) {
        id = proximo_id++;  // 🆔 Asignar ID único y actualizar contador
        cout << "🏗️ Producto #" << id << " creado: " << nombre << endl;
    }
    
    // 💥 Destructor
    ~Producto() {
        cout << "💣 Producto #" << id << " destruido: " << nombre << endl;
    }
    
    // 📋 Mostrar información
    void mostrarInfo() const {
        cout << "📦 #" << id << " - " << nombre << " ($" << precio << ")" << endl;
    }
    
    // 📊 Obtener próximo ID (método estático)
    static int obtenerProximoID() {
        return proximo_id;
    }
    
    // 📋 Obtener ID de esta instancia
    int getID() const {
        return id;
    }
};

// 🎯 Inicialización de variable estática
int Producto::proximo_id = 1;

void ejemplo_sistema_ids() {
    cout << "\n🔌 EJEMPLO: SISTEMA DE ID ÚNICO" << endl;
    cout << "=============================" << endl;
    
    cout << "🆔 Próximo ID disponible: " << Producto::obtenerProximoID() << endl;
    
    // 🎯 Crear productos con IDs únicos
    Producto p1("Laptop", 1500.0);
    cout << "🆔 Próximo ID: " << Producto::obtenerProximoID() << endl;
    
    Producto p2("Mouse", 25.0);
    cout << "🆔 Próximo ID: " << Producto::obtenerProximoID() << endl;
    
    Producto p3("Teclado", 50.0);
    cout << "🆔 Próximo ID: " << Producto::obtenerProximoID() << endl;
    
    // 📋 Mostrar información
    cout << "\n📋 PRODUCTOS CREADOS:" << endl;
    p1.mostrarInfo();
    p2.mostrarInfo();
    p3.mostrarInfo();
    
    cout << "\n🆔 IDs asignados:" << endl;
    cout << "   " << p1.getID() << ", " << p2.getID() << ", " << p3.getID() << endl;
}

/*
🧮 MÉTODOS ESTÁTICOS

🎯 **Características**:
- 🏛️ Pertenece a la clase, no a instancias
- 🔧 No puede acceder a miembros no estáticos
- ⚡ Puede acceder solo a otros miembros estáticos
- 🚀 Se llama directamente con nombre de clase

🏗️ SINTAXIS:
```cpp
class Clase {
public:
    static tipo metodo() {
        // Solo puede acceder a miembros estáticos
        return valor;
    }
};
```

🔧 EJEMPLO AVANZADO: UTILITARIOS MATEMÁTICOS
*/

class Calculadora {
private:
    static const double PI;  // 📊 Constante estática
    double valor;            // 🔢 Valor de instancia
    
public:
    // 🎯 Constructor
    Calculadora(double v = 0.0) : valor(v) {}
    
    // 📋 Métodos de instancia
    void setValor(double v) { valor = v; }
    double getValor() const { return valor; }
    
    // 🔄 Operaciones de instancia
    double calcularCuadrado() const { return valor * valor; }
    double calcularCubo() const { return valor * valor * valor; }
    
    // 🧮 Métodos estáticos (utilitarios)
    static double sumar(double a, double b) {
        return a + b;
    }
    
    static double restar(double a, double b) {
        return a - b;
    }
    
    static double calcularAreaCirculo(double radio) {
        return PI * radio * radio;
    }
    
    static double calcularVolumenEsfera(double radio) {
        return (4.0/3.0) * PI * radio * radio * radio;
    }
    
    // 📊 Método estático que muestra constantes
    static void mostrarConstantes() {
        cout << "🧮 Constantes matemáticas:" << endl;
        cout << "   π = " << PI << endl;
    }
};

// 🎯 Inicialización de constante estática
const double Calculadora::PI = 3.14159265359;

void ejemplo_calculadora() {
    cout << "\n🔧 EJEMPLO: CALCULADORA CON MÉTODOS ESTÁTICOS" << endl;
    cout << "===========================================" << endl;
    
    // 🧮 Usar métodos estáticos sin instanciar
    cout << "🧮 OPERACIONES ESTÁTICAS:" << endl;
    cout << "   5 + 3 = " << Calculadora::sumar(5, 3) << endl;
    cout << "   10 - 4 = " << Calculadora::restar(10, 4) << endl;
    cout << "   Área círculo (radio=5): " << Calculadora::calcularAreaCirculo(5) << endl;
    cout << "   Volumen esfera (radio=3): " << Calculadora::calcularVolumenEsfera(3) << endl;
    
    Calculadora::mostrarConstantes();
    
    // 🔄 Usar métodos de instancia
    cout << "\n🔄 OPERACIONES DE INSTANCIA:" << endl;
    Calculadora calc(4.0);
    cout << "   Valor: " << calc.getValor() << endl;
    cout << "   Cuadrado: " << calc.calcularCuadrado() << endl;
    cout << "   Cubo: " << calc.calcularCubo() << endl;
}

/*
⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:

1️⃣ **No inicializar variables estáticas**:
```cpp
class Clase {
public:
    static int variable;  // ❌ Declarada pero no inicializada
};
// int Clase::variable = 0;  // Falta inicialización
```

2️⃣ **Acceder a miembros no estáticos desde métodos estáticos**:
```cpp
class Clase {
private:
    int dato;
public:
    static void metodo() {
        // ❌ No se puede acceder a 'dato' (no es estático)
        // cout << dato << endl;
    }
};
```

3️⃣ **Confundir acceso a miembros estáticos**:
```cpp
class Clase {
public:
    static int estatico;
    int instancia;
};

Clase obj;

// ✅ Correcto
cout << Clase::estatico << endl;  // Acceso directo a estático
cout << obj.instancia << endl;    // Acceso a instancia

// ❌ No recomendado (funciona pero no es claro)
cout << obj.estatico << endl;     // Acceso a estático desde instancia
```

✅ **Formas correctas**:
```cpp
class Persona {
private:
    string nombre;
    static int contador;
    
public:
    Persona(string n) : nombre(n) {
        contador++;  // ✅ Acceso a estático desde instancia
    }
    
    static int getContador() {
        return contador;  // ✅ Método estático accede a variable estática
    }
    
    string getNombre() const {
        return nombre;  // ✅ Método de instancia accede a variable de instancia
    }
};

// ✅ Inicialización de variable estática
int Persona::contador = 0;
```

🎯 EJERCICIOS PARA PRACTICAR:

1. 📊 **Contadores de objetos**:
   - Crea clases con contadores estáticos de instancias
   - Implementa métodos para obtener estadísticas
   - Observa cómo cambian los contadores con creación/destrucción

2. 🆔 **Sistemas de ID único**:
   - Diseña clases que asignen IDs únicos automáticamente
   - Usa variables estáticas para llevar cuenta
   - Implementa métodos para verificar IDs

3. 🧮 **Clases utilitarias**:
   - Crea clases con solo métodos estáticos (utilitarios)
   - Implementa funciones matemáticas, conversiones, etc.
   - Usa constantes estáticas para valores fijos

4. 🏛️ **Configuraciones globales**:
   - Diseña clases que manejen configuraciones compartidas
   - Usa variables estáticas para opciones globales
   - Implementa métodos para cambiar configuraciones

5. 📈 **Estadísticas de aplicación**:
   - Crea clases que recolecten estadísticas de uso
   - Usa miembros estáticos para datos agregados
   - Implementa métodos para mostrar y resetear estadísticas

💡 CONSEJOS PARA MIEMBROS ESTÁTICOS:

✅ **Buenas prácticas**:
- 🎯 Inicializar variables estáticas fuera de la clase
- 🔧 Usar métodos estáticos para funcionalidad independiente de instancias
- 📝 Acceder a miembros estáticos con nombre de clase + ::
- 🧪 Probar comportamiento con múltiples instancias
- 📊 Usar const para constantes estáticas cuando sea posible

❌ **Errores a evitar**:
- 🚫 No inicializar variables estáticas
- 🔥 Acceder a miembros no estáticos desde métodos estáticos
- 📉 Usar miembros estáticos cuando se necesita estado individual
- 🚫 Confundir acceso a miembros estáticos e instanciados
- 🔢 No considerar concurrencia en aplicaciones multihilo

🚀 SIGUIENTE PASO:

Los miembros estáticos son ideales para:
- 📊 Contadores y estadísticas globales
- 🆔 Generación de IDs únicos
- 🧮 Funciones utilitarias independientes
- ⚙️ Configuraciones compartidas
- 💪 Patrones de diseño como Singleton

¡Sigue practicando con miembros estáticos en C++!
*/