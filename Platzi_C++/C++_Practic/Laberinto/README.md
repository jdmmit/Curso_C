# Laberinto en C++

Este proyecto implementa un juego básico de laberinto en C++ para practicar conceptos de programación orientada a objetos, estructuras de datos y algoritmos.

## Descripción

El proyecto consiste en crear y resolver un laberinto simple utilizando diferentes algoritmos y técnicas de programación en C++. Se aplican conceptos como:

- Programación orientada a objetos
- Estructuras de datos (vectores, matrices, colas, pilas)
- Algoritmos de búsqueda (BFS - Búsqueda en Anchura, DFS - Búsqueda en Profundidad)
- Manejo de memoria dinámica
- Entrada/salida de datos
- Generación de números aleatorios

## Estructura del Proyecto

```
Laberinto/
├── include/           # Archivos de cabecera (.h)
├── src/               # Archivos fuente (.cpp)
├── README.md          # Este archivo
└── Makefile           # Archivo de compilación
```

## Características

1. **Clase Laberinto**: Implementa la lógica principal del laberinto
2. **Algoritmos de resolución**: BFS y DFS para encontrar caminos
3. **Generación aleatoria**: Crear laberintos aleatorios con diferentes densidades
4. **Visualización**: Mostrar el laberinto en consola

## Compilación y Ejecución

### Usando Makefile

```bash
make
./laberinto
```

### Compilando directamente con g++

```bash
g++ -o laberinto src/*.cpp -Iinclude
./laberinto
```

## Clase Laberinto

### Constructor
```cpp
Laberinto lab(filas, columnas);
```

### Métodos principales

- `establecerCelda(int x, int y, char valor)`: Establece el valor de una celda
- `establecerInicio(int x, int y)`: Define la posición de inicio
- `establecerFin(int x, int y)`: Define la posición final
- `mostrar()`: Muestra el laberinto en consola
- `resolverBFS()`: Resuelve el laberinto usando búsqueda en anchura
- `resolverDFS()`: Resuelve el laberinto usando búsqueda en profundidad
- `generarAleatorio(double densidad)`: Genera un laberinto aleatorio

### Símbolos

- `#`: Pared (obstáculo)
- ` ` (espacio): Camino transitable
- `S`: Punto de inicio
- `E`: Punto final

## Ejemplos de Uso

```cpp
// Crear laberinto de 10x10
Laberinto lab(10, 10);

// Configurar paredes
lab.establecerCelda(2, 2, '#');
lab.establecerCelda(2, 3, '#');

// Resolver con BFS
lab.resolverBFS();

// Generar laberinto aleatorio
Laberinto aleatorio(15, 15);
aleatorio.generarAleatorio(0.3);
aleatorio.resolverDFS();
```

## Conceptos Practicados

1. **Programación Orientada a Objetos**:
   - Encapsulamiento (atributos privados, métodos públicos)
   - Constructor y destructor
   - Métodos miembro

2. **Estructuras de Datos**:
   - Vectores multidimensionales
   - Colas (para BFS)
   - Pilas (para DFS)
   - Pares (coordenadas)

3. **Algoritmos**:
   - Búsqueda en anchura (BFS)
   - Búsqueda en profundidad (DFS)
   - Generación de números aleatorios

4. **Otros conceptos**:
   - Manejo de memoria dinámica
   - Archivos de cabecera (.h) y separación de implementación
   - Compilación con Makefile