/*
🎯 ARCHIVO: 10_Encapsulacion_en_POO.cpp
📚 TEMA: Encapsulación en Programación Orientada a Objetos
🎓 NIVEL: Intermedio
📝 DESCRIPCIÓN: Aprende sobre la encapsulación, uno de los pilares fundamentales de la POO

💡 CONCEPTOS QUE APRENDERÁS:
   - Qué es la encapsulación en POO
   - Modificadores de acceso (private, public, protected)
   - Cómo proteger los datos de una clase
   - Métodos getter y setter
   - Beneficios de la encapsulación

🛡️ ENCAPSULACIÓN EN POO

La encapsulación es un **pilar fundamental** de la Programación Orientada a Objetos que se centra en **restringir el acceso** a ciertos componentes de un objeto y proteger su estructura interna. Se logra ocultando los datos y permitiendo solo el acceso a través de métodos establecidos.

🎯 **Objetivos de la encapsulación**:
- 🔒 **Protección de datos**: Evitar modificaciones indebidas
- 🎯 **Control de acceso**: Regular cómo se accede y modifica el estado
- 🧼 **Mantenimiento**: Facilitar cambios internos sin afectar el exterior
- 📦 **Modularidad**: Mejor organización del código

🏗️ MODIFICADORES DE ACCESO

C++ proporciona tres modificadores de acceso principales:

1️⃣ **private**: Solo accesible desde dentro de la clase
2️⃣ **public**: Accesible desde cualquier parte
3️⃣ **protected**: Accesible desde la clase y sus derivadas (herencia)

💻 PROGRAMA PRÁCTICO: ENCAPSULACIÓN
*/

#include <iostream>
#include <string>
using namespace std;

// 🏛️ Clase Persona con encapsulación
class Persona {
private:
    // 🔒 Atributos privados (solo accesibles dentro de la clase)
    string nombre;
    int edad;
    
public:
    // 🎯 Constructor
    Persona(string n, int e) : nombre(n), edad(e) {
        cout << "🏗️ Persona creada: " << nombre << endl;
    }
    
    // 💥 Destructor
    ~Persona() {
        cout << "💣 Persona destruida: " << nombre << endl;
    }
    
    // 📋 Métodos públicos para acceder a atributos privados (getters)
    string getNombre() const {
        return nombre;
    }
    
    int getEdad() const {
        return edad;
    }
    
    // 🎯 Métodos públicos para modificar atributos privados (setters)
    void setNombre(string n) {
        if (!n.empty()) {
            nombre = n;
        }
    }
    
    void setEdad(int e) {
        if (e >= 0 && e <= 150) {
            edad = e;
        }
    }
    
    // 🗣️ Método público para funcionalidad
    void saludar() const {
        cout << "👋 Hola, mi nombre es " << nombre << " y tengo " << edad << " años." << endl;
    }
    
    // 🔄 Método para mostrar información
    void mostrarInfo() const {
        cout << "👤 " << nombre << " (" << edad << " años)" << endl;
    }
};

int main() {
    cout << "🎯 ENCAPSULACIÓN EN C++" << endl;
    cout << "======================" << endl << endl;
    
    // 🎯 Crear objeto
    Persona p1("Diana", 26);
    p1.saludar();
    
    // 📋 Acceder a atributos a través de métodos públicos
    cout << "\n📋 ACCESO CONTROLADO:" << endl;
    cout << "   Nombre: " << p1.getNombre() << endl;
    cout << "   Edad: " << p1.getEdad() << endl;
    
    // 🔄 Modificar atributos a través de métodos públicos
    cout << "\n🔄 MODIFICACIÓN CONTROLADA:" << endl;
    p1.setNombre("Diana López");
    p1.setEdad(27);
    p1.mostrarInfo();
    
    // 🚫 Intento de acceso directo (no permitido)
    // p1.nombre = "Juan";  // ❌ Error de compilación
    // cout << p1.nombre;   // ❌ Error de compilación
    
    // 🎯 Ejemplo con validación
    cout << "\n🎯 VALIDACIÓN EN SETTERS:" << endl;
    p1.setEdad(-5);  // Valor inválido
    cout << "   Edad después de intentar -5: " << p1.getEdad() << endl;
    
    p1.setEdad(30);  // Valor válido
    cout << "   Edad después de asignar 30: " << p1.getEdad() << endl;
    
    return 0;
}

/*
🔧 BENEFICIOS DE LA ENCAPSULACIÓN

✅ **Seguridad de datos**:
- 🔒 Protege los atributos de modificaciones indebidas
- 🛡️ Evita estados inválidos de los objetos

✅ **Control de acceso**:
- 🎯 Permite validar datos antes de asignarlos
- 📋 Proporciona métodos controlados para acceso

✅ **Mantenimiento**:
- 🔧 Cambios internos no afectan código externo
- 📦 Mejor organización del código

✅ **Modularidad**:
- 🧱 Código más estructurado y organizado
- 🎯 Interfaces claras entre componentes

🔌 EJEMPLO COMPLETO: CUENTA BANCARIA
*/

class CuentaBancaria {
private:
    string numeroCuenta;
    double saldo;
    string titular;
    
public:
    // 🎯 Constructor
    CuentaBancaria(string num, string tit, double sal = 0.0) 
        : numeroCuenta(num), titular(tit), saldo(sal) {
        if (saldo < 0) saldo = 0;
        cout << "🏗️ Cuenta creada: " << numeroCuenta << " para " << titular << endl;
    }
    
    // 💥 Destructor
    ~CuentaBancaria() {
        cout << "💣 Cuenta cerrada: " << numeroCuenta << endl;
    }
    
    // 📋 Getters (solo lectura)
    string getNumeroCuenta() const { return numeroCuenta; }
    string getTitular() const { return titular; }
    double getSaldo() const { return saldo; }
    
    // 🔄 Operaciones controladas
    bool depositar(double monto) {
        if (monto > 0) {
            saldo += monto;
            cout << "💰 Depósito de $" << monto << " realizado. Nuevo saldo: $" << saldo << endl;
            return true;
        }
        cout << "❌ Monto inválido para depósito" << endl;
        return false;
    }
    
    bool retirar(double monto) {
        if (monto > 0 && monto <= saldo) {
            saldo -= monto;
            cout << "💸 Retiro de $" << monto << " realizado. Nuevo saldo: $" << saldo << endl;
            return true;
        }
        cout << "❌ Monto inválido o saldo insuficiente" << endl;
        return false;
    }
    
    // 📋 Mostrar información de la cuenta
    void mostrarInfo() const {
        cout << "🏦 Cuenta: " << numeroCuenta << " | Titular: " << titular << " | Saldo: $" << saldo << endl;
    }
};

void ejemplo_cuenta_bancaria() {
    cout << "\n🔌 EJEMPLO: CUENTA BANCARIA" << endl;
    cout << "=========================" << endl;
    
    CuentaBancaria cuenta("12345", "Juan Pérez", 1000.0);
    cuenta.mostrarInfo();
    
    // 🔄 Operaciones bancarias
    cuenta.depositar(500);
    cuenta.retirar(200);
    cuenta.retirar(2000);  // ❌ Saldo insuficiente
    
    // 📋 Acceso controlado a información
    cout << "Número de cuenta: " << cuenta.getNumeroCuenta() << endl;
    cout << "Titular: " << cuenta.getTitular() << endl;
    cout << "Saldo actual: $" << cuenta.getSaldo() << endl;
}

/*
⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:

1️⃣ **Hacer todo público**:
```cpp
class Persona {
public:
    string nombre;  // ❌ Acceso directo no controlado
    int edad;       // ❌ Sin validación
};
```

2️⃣ **No proporcionar acceso controlado**:
```cpp
class Persona {
private:
    string nombre;
    int edad;
    // ❌ Sin getters/setters - Inaccesible
};
```

3️⃣ **Validación insuficiente**:
```cpp
void setEdad(int e) {
    edad = e;  // ❌ Sin validar rango
}
```

✅ **Formas correctas**:
```cpp
class Persona {
private:
    string nombre;
    int edad;
    
public:
    // ✅ Getters para lectura controlada
    string getNombre() const { return nombre; }
    int getEdad() const { return edad; }
    
    // ✅ Setters con validación
    void setNombre(string n) {
        if (!n.empty()) nombre = n;
    }
    
    void setEdad(int e) {
        if (e >= 0 && e <= 150) edad = e;
    }
};
```

🔧 EJEMPLO AVANZADO: CLASE CON VALIDACIONES
*/

class Producto {
private:
    string codigo;
    string nombre;
    double precio;
    int stock;
    
public:
    // 🎯 Constructor
    Producto(string cod, string nom, double pre, int st) 
        : codigo(cod), nombre(nom), precio(pre), stock(st) {
        // ✅ Validaciones en constructor
        if (precio < 0) precio = 0;
        if (stock < 0) stock = 0;
    }
    
    // 📋 Getters
    string getCodigo() const { return codigo; }
    string getNombre() const { return nombre; }
    double getPrecio() const { return precio; }
    int getStock() const { return stock; }
    
    // 🎯 Setters con validación
    void setPrecio(double p) {
        if (p >= 0) {
            precio = p;
        } else {
            cout << "❌ Precio no puede ser negativo" << endl;
        }
    }
    
    void setStock(int s) {
        if (s >= 0) {
            stock = s;
        } else {
            cout << "❌ Stock no puede ser negativo" << endl;
        }
    }
    
    // 🔄 Métodos de negocio
    bool hayStock(int cantidad) const {
        return stock >= cantidad;
    }
    
    bool vender(int cantidad) {
        if (hayStock(cantidad)) {
            stock -= cantidad;
            cout << "🛒 Vendidos " << cantidad << " " << nombre << ". Stock restante: " << stock << endl;
            return true;
        }
        cout << "❌ No hay suficiente stock de " << nombre << endl;
        return false;
    }
    
    // 📋 Mostrar información
    void mostrarInfo() const {
        cout << "📦 " << codigo << " - " << nombre << " | $" << precio << " | Stock: " << stock << endl;
    }
};

void ejemplo_producto() {
    cout << "\n🔧 EJEMPLO: CLASE PRODUCTO" << endl;
    cout << "========================" << endl;
    
    Producto prod("P001", "Laptop", 1500.0, 10);
    prod.mostrarInfo();
    
    // 🔄 Operaciones de venta
    prod.vender(3);
    prod.vender(15);  // ❌ Stock insuficiente
    
    // 🎯 Modificaciones con validación
    prod.setPrecio(-100);  // ❌ Valor inválido
    prod.setPrecio(1200.0); // ✅ Valor válido
    prod.mostrarInfo();
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🛡️ **Clases con encapsulación básica**:
   - Crea clases con atributos privados
   - Implementa getters y setters adecuados
   - Añade validaciones en setters

2. 🏦 **Sistema bancario**:
   - Diseña clases para cuentas, clientes, transacciones
   - Usa encapsulación para proteger datos sensibles
   - Implementa validaciones apropiadas

3. 📦 **Inventario de productos**:
   - Crea clases para productos, categorías, proveedores
   - Usa encapsulación para controlar acceso a datos
   - Implementa métodos de negocio con validaciones

4. 🎯 **Validaciones avanzadas**:
   - Crea clases con múltiples validaciones
   - Implementa formatos específicos (emails, teléfonos, etc.)
   - Usa expresiones regulares si es necesario

5. 🔄 **Sistema de usuarios**:
   - Diseña clases para usuarios, perfiles, permisos
   - Protege información sensible con encapsulación
   - Implementa controles de acceso apropiados

💡 CONSEJOS PARA ENCAPSULACIÓN EFECTIVA:

✅ **Buenas prácticas**:
- 🎯 Hacer atributos private por defecto
- 🔧 Proporcionar getters para lectura controlada
- 🎯 Implementar setters con validación apropiada
- 📝 Usar const en métodos que no modifican el objeto
- 🧪 Validar todas las entradas de datos

❌ **Errores a evitar**:
- 🚫 Hacer todos los atributos públicos
- 🔥 No validar datos en setters
- 📉 Proporcionar setters para todos los atributos
- 🚫 Exponer directamente estructuras internas
- 🔢 No considerar consistencia de datos

🚀 SIGUIENTE PASO:

La encapsulación es fundamental para:
- 🛡️ Proteger la integridad de los datos
- 🎯 Implementar interfaces limpias y controladas
- 🔧 Facilitar el mantenimiento del código
- 💪 Desarrollar aplicaciones seguras y robustas

¡Sigue practicando con encapsulación en C++!
*/