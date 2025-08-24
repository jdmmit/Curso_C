/*
🎯 ARCHIVO: 09_Ciclo_de_Vida_de_Objetos.cpp
📚 TEMA: Ciclo de Vida de Objetos en C++
🎓 NIVEL: Intermedio
📝 DESCRIPCIÓN: Aprende sobre el ciclo de vida de los objetos, constructores y destructores

💡 CONCEPTOS QUE APRENDERÁS:
   - Ciclo de vida de un objeto en C++
   - Constructores y su importancia
   - Destructores y liberación de recursos
   - Asignación de memoria dinámica
   - Gestión manual de memoria en C++

⏳ CICLO DE VIDA DE UN OBJETO

En C++, un objeto pasa por un **ciclo de vida** que va desde su creación hasta su destrucción. A diferencia de lenguajes con recolector de basura (como Java), C++ requiere que el programador **gestione manualmente** la memoria, lo que hace fundamental entender este ciclo.

🎯 **Etapas del ciclo de vida**:
1️⃣ **Creación**: Reserva de memoria y llamada al constructor
2️⃣ **Uso**: Acceso a atributos y llamada a métodos
3️⃣ **Destrucción**: Llamada al destructor y liberación de memoria

🧠 GESTIÓN DE MEMORIA EN C++

C++ **no tiene recolector de basura**, por lo que:
- 🔧 El programador controla cuándo se crea y destruye cada objeto
- 💾 Debe liberar manualmente la memoria dinámica
- ⚠️ Una mala gestión puede causar fugas de memoria

🏗️ RESERVA DE ESPACIO EN MEMORIA

1️⃣ **Memoria automática (stack)**:
```cpp
Persona p("Juan", 25);  // Se destruye automáticamente al salir del ámbito
```

2️⃣ **Memoria dinámica (heap)**:
```cpp
Persona *p = new Persona("Juan", 25);  // Debe liberarse con delete
delete p;  // Liberar memoria manualmente
```

💻 PROGRAMA PRÁCTICO: CICLO DE VIDA
*/

#include <iostream>
#include <string>
using namespace std;

// 🏛️ Clase Persona con constructor y destructor
class Persona {
public:
    string nombre;
    int edad;
    
    // 🎯 Constructor con parámetro
    Persona(string n) {
        nombre = n;
        cout << "🏗️ Constructor llamado para " << nombre << endl;
    }
    
    // 💥 Destructor
    ~Persona() {
        cout << "💣 Destructor llamado para " << nombre << endl;
    }
    
    // 🗣️ Método para saludar
    void saludar() {
        cout << "👋 Hola, mi nombre es " << nombre << " y tengo " << edad << " años." << endl;
    }
};

int main() {
    cout << "🎯 CICLO DE VIDA DE OBJETOS EN C++" << endl;
    cout << "=================================" << endl << endl;
    
    // 🏗️ Creación de objeto en la pila
    cout << "1️⃣ OBJETO EN LA PILA:" << endl;
    {
        Persona p1("Diana");
        p1.edad = 26;
        p1.saludar();
        cout << "   Objeto p1 en uso..." << endl;
        // 💥 Destructor se llama automáticamente al salir del ámbito
    }
    cout << "   Objeto p1 destruido" << endl << endl;
    
    // 🔄 Creación de objeto en el heap
    cout << "2️⃣ OBJETO EN EL HEAP:" << endl;
    Persona *p2 = new Persona("Jimena");
    p2->edad = 30;
    p2->saludar();
    cout << "   Objeto p2 en uso..." << endl;
    delete p2;  // 💥 Destructor llamado manualmente
    cout << "   Objeto p2 destruido" << endl << endl;
    
    // 🎯 Ejemplo con múltiples objetos
    cout << "3️⃣ MÚLTIPLES OBJETOS:" << endl;
    Persona *personas[3];
    for (int i = 0; i < 3; i++) {
        string nombre = "Persona" + to_string(i + 1);
        personas[i] = new Persona(nombre);
        personas[i]->edad = 20 + i * 5;
    }
    
    // 🗣️ Usar los objetos
    for (int i = 0; i < 3; i++) {
        personas[i]->saludar();
    }
    
    // 💥 Destruir los objetos
    for (int i = 0; i < 3; i++) {
        delete personas[i];
    }
    
    return 0;
}

/*
🔧 CONSTRUCTORES Y DESTRUCTORES

🎯 **Constructor**:
- 🎯 Se llama automáticamente al crear un objeto
- 📝 Tiene el mismo nombre que la clase
- 🔧 Inicializa los atributos del objeto
- 🔄 Puede tener parámetros

🎯 **Destructor**:
- 💥 Se llama automáticamente al destruir un objeto
- 📝 Tiene el mismo nombre que la clase con ~ al inicio
- 🧹 Libera recursos utilizados por el objeto
- 🚫 No tiene parámetros ni valor de retorno

🔌 EJEMPLO COMPLETO: GESTOR DE RECURSOS
*/

class GestorRecursos {
private:
    string *datos;
    int tamano;
    
public:
    // 🎯 Constructor
    GestorRecursos(int t) : tamano(t) {
        cout << "🏗️ Creando GestorRecursos con " << tamano << " elementos" << endl;
        datos = new string[tamano];  // 📦 Asignar memoria
        for (int i = 0; i < tamano; i++) {
            datos[i] = "Elemento " + to_string(i);
        }
    }
    
    // 💥 Destructor
    ~GestorRecursos() {
        cout << "💣 Destruyendo GestorRecursos con " << tamano << " elementos" << endl;
        delete[] datos;  // 🧹 Liberar memoria
    }
    
    // 📋 Mostrar datos
    void mostrarDatos() {
        cout << "   Datos almacenados:" << endl;
        for (int i = 0; i < tamano; i++) {
            cout << "   - " << datos[i] << endl;
        }
    }
};

void ejemplo_gestor_recursos() {
    cout << "\n🔌 EJEMPLO: GESTOR DE RECURSOS" << endl;
    cout << "=============================" << endl;
    
    {
        GestorRecursos gr(5);
        gr.mostrarDatos();
        cout << "   Gestor en uso..." << endl;
        // 💥 Destructor se llama automáticamente
    }
    cout << "   Gestor destruido" << endl;
}

/*
⚠️ PRECAUCIONES IMPORTANTES

❌ **Errores comunes**:

1️⃣ **No liberar memoria dinámica**:
```cpp
Persona *p = new Persona("Juan");
// ❌ Falta delete p; - Fuga de memoria
```

2️⃣ **Liberar memoria dos veces**:
```cpp
Persona *p = new Persona("Juan");
delete p;
delete p;  // ❌ Error: doble liberación
```

3️⃣ **Usar puntero después de liberar**:
```cpp
Persona *p = new Persona("Juan");
delete p;
p->saludar();  // ❌ Error: puntero colgante
```

✅ **Formas correctas**:
```cpp
// ✅ Objeto en la pila (gestión automática)
{
    Persona p("Juan");
    p.saludar();
}  // Destructor llamado automáticamente

// ✅ Objeto en el heap (gestión manual)
Persona *p = new Persona("Juan");
p->saludar();
delete p;  // Liberar memoria
p = nullptr;  // Evitar puntero colgante
```

🔧 EJEMPLO AVANZADO: CONTADOR DE OBJETOS
*/

class ContadorObjetos {
private:
    static int contador;  // 📊 Contador compartido
    string nombre;
    
public:
    // 🎯 Constructor
    ContadorObjetos(string n) : nombre(n) {
        contador++;
        cout << "🏗️ Objeto #" << contador << " creado: " << nombre << endl;
    }
    
    // 💥 Destructor
    ~ContadorObjetos() {
        cout << "💣 Objeto destruido: " << nombre << " (quedan " << (contador-1) << ")" << endl;
        contador--;
    }
    
    // 📊 Método estático para obtener el contador
    static int obtenerContador() {
        return contador;
    }
};

// 🎯 Inicializar variable estática
int ContadorObjetos::contador = 0;

void ejemplo_contador() {
    cout << "\n🔧 EJEMPLO: CONTADOR DE OBJETOS" << endl;
    cout << "==============================" << endl;
    
    cout << "Contador inicial: " << ContadorObjetos::obtenerContador() << endl;
    
    {
        ContadorObjetos obj1("Primer objeto");
        cout << "Contador: " << ContadorObjetos::obtenerContador() << endl;
        
        ContadorObjetos obj2("Segundo objeto");
        cout << "Contador: " << ContadorObjetos::obtenerContador() << endl;
        
        ContadorObjetos *obj3 = new ContadorObjetos("Tercer objeto");
        cout << "Contador: " << ContadorObjetos::obtenerContador() << endl;
        
        delete obj3;
        cout << "Contador después de delete: " << ContadorObjetos::obtenerContador() << endl;
    }
    
    cout << "Contador final: " << ContadorObjetos::obtenerContador() << endl;
}

/*
🎯 EJERCICIOS PARA PRACTICAR:

1. 🏗️ **Constructores y destructores básicos**:
   - Crea clases con diferentes tipos de constructores
   - Implementa destructores que liberen recursos
   - Observa el orden de llamada

2. 📦 **Gestión de memoria**:
   - Crea clases que manejen memoria dinámica
   - Implementa constructores y destructores adecuados
   - Verifica que no haya fugas de memoria

3. 🔄 **Objetos en diferentes ámbitos**:
   - Crea objetos en diferentes bloques de código
   - Observa cuándo se llaman los destructores
   - Practica con objetos temporales

4. 📊 **Contadores y estadísticas**:
   - Implementa clases que lleven cuenta de objetos creados
   - Usa variables estáticas para estadísticas
   - Muestra información durante el ciclo de vida

5. 🧹 **Gestores de recursos**:
   - Crea clases que manejen archivos, conexiones, etc.
   - Implementa liberación adecuada de recursos
   - Usa destructores para limpieza automática

💡 CONSEJAS PARA GESTIÓN DE MEMORIA:

✅ **Buenas prácticas**:
- 🎯 Siempre emparejar new con delete
- 🔢 Usar arreglos dinámicos con new[] y delete[]
- 📝 Inicializar punteros a nullptr
- 🧪 Verificar asignaciones exitosas
- 🧹 Liberar memoria en el orden inverso a la asignación

❌ **Errores a evitar**:
- 🚫 No liberar memoria dinámica asignada
- 🔥 Liberar memoria que no se asignó con new
- 📉 Usar punteros después de liberarlos
- 🚫 Liberar la misma memoria dos veces

🚀 SIGUIENTE PASO:

El ciclo de vida de objetos es fundamental para:
- 🧠 Entender la gestión de memoria en C++
- 🔧 Crear clases robustas y seguras
- 🎯 Implementar el RAII (Resource Acquisition Is Initialization)
- 💪 Desarrollar aplicaciones sin fugas de memoria

¡Sigue practicando con el ciclo de vida de objetos!
*/