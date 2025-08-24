#include "Laberinto.h"
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <cstdlib>
#include <ctime>

// Constructor
Laberinto::Laberinto(int f, int c) : filas(f), columnas(c) {
    // Inicializar el mapa con espacios vacíos
    mapa.resize(filas, std::vector<char>(columnas, ' '));
    inicio = std::make_pair(0, 0);
    fin = std::make_pair(filas-1, columnas-1);
}

// Métodos para configurar el laberinto
void Laberinto::establecerCelda(int x, int y, char valor) {
    if (esValido(x, y)) {
        mapa[x][y] = valor;
    }
}

void Laberinto::establecerInicio(int x, int y) {
    if (esValido(x, y)) {
        inicio = std::make_pair(x, y);
        // Asegurarse de que el inicio esté libre
        mapa[x][y] = ' ';
    }
}

void Laberinto::establecerFin(int x, int y) {
    if (esValido(x, y)) {
        fin = std::make_pair(x, y);
        // Asegurarse de que el final esté libre
        mapa[x][y] = ' ';
    }
}

// Métodos para mostrar el laberinto
void Laberinto::mostrar() const {
    // Mostrar borde superior
    for (int j = 0; j < columnas + 2; j++) {
        std::cout << "#";
    }
    std::cout << std::endl;
    
    // Mostrar contenido del laberinto
    for (int i = 0; i < filas; i++) {
        std::cout << "#";  // Borde izquierdo
        for (int j = 0; j < columnas; j++) {
            if (i == inicio.first && j == inicio.second) {
                std::cout << "S";  // Inicio
            } else if (i == fin.first && j == fin.second) {
                std::cout << "E";  // Fin
            } else {
                std::cout << mapa[i][j];
            }
        }
        std::cout << "#" << std::endl;  // Borde derecho
    }
    
    // Mostrar borde inferior
    for (int j = 0; j < columnas + 2; j++) {
        std::cout << "#";
    }
    std::cout << std::endl;
}

// Algoritmo BFS (Búsqueda en Anchura)
bool Laberinto::resolverBFS() {
    // Implementación básica del algoritmo BFS
    std::queue<std::pair<int, int>> cola;
    std::vector<std::vector<bool>> visitado(filas, std::vector<bool>(columnas, false));
    std::vector<std::vector<std::pair<int, int>>> padre(filas, std::vector<std::pair<int, int>>(columnas, {-1, -1}));
    
    cola.push(inicio);
    visitado[inicio.first][inicio.second] = true;
    
    // Direcciones: arriba, abajo, izquierda, derecha
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    
    while (!cola.empty()) {
        std::pair<int, int> actual = cola.front();
        cola.pop();
        
        // Verificar si llegamos al final
        if (actual == fin) {
            std::cout << "¡Camino encontrado con BFS!" << std::endl;
            
            // Opcional: mostrar el camino encontrado
            std::stack<std::pair<int, int>> camino;
            std::pair<int, int> temp = fin;
            while (temp != inicio) {
                camino.push(temp);
                temp = padre[temp.first][temp.second];
            }
            
            std::cout << "Camino encontrado:" << std::endl;
            mostrar();
            return true;
        }
        
        // Explorar vecinos
        for (int i = 0; i < 4; i++) {
            int nx = actual.first + dx[i];
            int ny = actual.second + dy[i];
            
            if (esValido(nx, ny) && !visitado[nx][ny] && esLibre(nx, ny)) {
                visitado[nx][ny] = true;
                padre[nx][ny] = actual;
                cola.push(std::make_pair(nx, ny));
            }
        }
    }
    
    std::cout << "No se encontró camino con BFS." << std::endl;
    return false;
}

// Algoritmo DFS (Búsqueda en Profundidad)
bool Laberinto::resolverDFS() {
    // Implementación básica del algoritmo DFS
    std::stack<std::pair<int, int>> pila;
    std::vector<std::vector<bool>> visitado(filas, std::vector<bool>(columnas, false));
    std::vector<std::vector<std::pair<int, int>>> padre(filas, std::vector<std::pair<int, int>>(columnas, {-1, -1}));
    
    pila.push(inicio);
    
    // Direcciones: arriba, abajo, izquierda, derecha
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    
    while (!pila.empty()) {
        std::pair<int, int> actual = pila.top();
        pila.pop();
        
        if (visitado[actual.first][actual.second]) continue;
        visitado[actual.first][actual.second] = true;
        
        // Verificar si llegamos al final
        if (actual == fin) {
            std::cout << "¡Camino encontrado con DFS!" << std::endl;
            
            // Opcional: mostrar el camino encontrado
            std::stack<std::pair<int, int>> camino;
            std::pair<int, int> temp = fin;
            while (temp != inicio) {
                camino.push(temp);
                temp = padre[temp.first][temp.second];
            }
            
            std::cout << "Camino encontrado:" << std::endl;
            mostrar();
            return true;
        }
        
        // Explorar vecinos
        for (int i = 0; i < 4; i++) {
            int nx = actual.first + dx[i];
            int ny = actual.second + dy[i];
            
            if (esValido(nx, ny) && !visitado[nx][ny] && esLibre(nx, ny)) {
                padre[nx][ny] = actual;
                pila.push(std::make_pair(nx, ny));
            }
        }
    }
    
    std::cout << "No se encontró camino con DFS." << std::endl;
    return false;
}

// Generador de laberintos aleatorios
void Laberinto::generarAleatorio(double densidad) {
    // Inicializar semilla aleatoria
    std::srand(std::time(0));
    
    // Limpiar el mapa
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            // Generar paredes aleatoriamente según la densidad
            if ((double)std::rand() / RAND_MAX < densidad) {
                mapa[i][j] = '#';
            } else {
                mapa[i][j] = ' ';
            }
        }
    }
    
    // Asegurarse de que inicio y fin estén libres
    mapa[inicio.first][inicio.second] = ' ';
    mapa[fin.first][fin.second] = ' ';
}

// Métodos auxiliares
bool Laberinto::esValido(int x, int y) const {
    return (x >= 0 && x < filas && y >= 0 && y < columnas);
}

bool Laberinto::esFinal(int x, int y) const {
    return (x == fin.first && y == fin.second);
}

bool Laberinto::esLibre(int x, int y) const {
    return esValido(x, y) && (mapa[x][y] == ' ' || esFinal(x, y));
}