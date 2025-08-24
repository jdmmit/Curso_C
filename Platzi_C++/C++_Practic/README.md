# C++ Practic

Esta carpeta contiene proyectos y ejercicios prácticos de C++ que aplican conceptos aprendidos en los cursos básicos y de programación orientada a objetos.

## Estructura

- **Laberinto/**: Proyecto completo de laberinto con algoritmos BFS y DFS
  - Implementa conceptos de:
    - Programación orientada a objetos
    - Estructuras de datos (vectores, colas, pilas)
    - Algoritmos de búsqueda
    - Manejo de memoria
    - Separación de archivos de cabecera e implementación

## Objetivo

Esta sección está diseñada para:
1. Practicar conceptos teóricos en proyectos reales
2. Aplicar buenas prácticas de programación
3. Familiarizarse con el desarrollo de proyectos C++ estructurados
4. Experimentar con algoritmos y estructuras de datos

## Compilación

Para compilar cualquier proyecto, asegúrate de tener un compilador C++ instalado (como g++).

### Con Makefile (recomendado)
```bash
cd nombre_del_proyecto
make
./nombre_ejecutable
```

### Compilación directa
```bash
g++ -o nombre_proyecto src/*.cpp -Iinclude
./nombre_proyecto
```

## Proyectos Disponibles

### Laberinto
Un proyecto completo que implementa un laberinto resoluble usando algoritmos BFS (Búsqueda en Anchura) y DFS (Búsqueda en Profundidad).

**Características:**
- Clase `Laberinto` con funcionalidades completas
- Generación de laberintos aleatorios
- Visualización en consola
- Dos algoritmos de resolución diferentes
- Documentación completa

**Conceptos aplicados:**
- Programación orientada a objetos
- Estructuras de datos (STL: vector, queue, stack)
- Algoritmos de búsqueda
- Manejo de memoria dinámica
- Separación de archivos de cabecera e implementación