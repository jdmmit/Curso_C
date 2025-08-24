#ifndef LABERINTO_MEJORADO_H
#define LABERINTO_MEJORADO_H

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <utility>

class Laberinto {
private:
    int filas;
    int columnas;
    std::vector<std::vector<char>> mapa;
    std::pair<int, int> inicio;
    std::pair<int, int> fin;

public:
    // Constructor
    Laberinto(int f, int c);
    
    // Métodos para configurar el laberinto
    void establecerCelda(int x, int y, char valor);
    void establecerInicio(int x, int y);
    void establecerFin(int x, int y);
    
    // Métodos para mostrar el laberinto
    void mostrar() const;
    
    // Algoritmos de resolución
    bool resolverBFS();
    bool resolverDFS();
    
    // Generador de laberintos aleatorios
    void generarAleatorio(double densidad = 0.2);
    
    // Métodos auxiliares
    bool esValido(int x, int y) const;
    bool esFinal(int x, int y) const;
    bool esLibre(int x, int y) const;
};

#endif // LABERINTO_MEJORADO_H