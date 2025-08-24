#include <iostream>
#include "Laberinto.h"
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

using namespace std;

// Función para obtener la entrada del usuario sin necesidad de presionar Enter
char obtenerEntrada() {
    struct termios oldSettings, newSettings;
    tcgetattr(STDIN_FILENO, &oldSettings);
    newSettings = oldSettings;
    newSettings.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newSettings);
    
    char ch = getchar();
    
    tcsetattr(STDIN_FILENO, TCSANOW, &oldSettings);
    return ch;
}

// Función para verificar si hay entrada disponible
bool hayEntrada() {
    struct termios oldSettings, newSettings;
    tcgetattr(STDIN_FILENO, &oldSettings);
    newSettings = oldSettings;
    newSettings.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newSettings);
    
    int oldFlags = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldFlags | O_NONBLOCK);
    
    int ch = getchar();
    
    tcsetattr(STDIN_FILENO, TCSANOW, &oldSettings);
    fcntl(STDIN_FILENO, F_SETFL, oldFlags);
    
    if (ch != EOF) {
        ungetc(ch, stdin);
        return true;
    }
    return false;
}

int main() {
    cout << "=== Juego del Laberinto ===" << endl;
    
    // Crear un laberinto de 10x10
    Laberinto lab(10, 10);
    
    // Configurar el laberinto con paredes
    // Borde superior e inferior
    for (int j = 0; j < 10; j++) {
        lab.establecerCelda(0, j, '#');
        lab.establecerCelda(9, j, '#');
    }
    
    // Bordes laterales
    for (int i = 0; i < 10; i++) {
        lab.establecerCelda(i, 0, '#');
        lab.establecerCelda(i, 9, '#');
    }
    
    // Paredes internas
    lab.establecerCelda(2, 2, '#');
    lab.establecerCelda(2, 3, '#');
    lab.establecerCelda(2, 4, '#');
    lab.establecerCelda(2, 5, '#');
    lab.establecerCelda(2, 6, '#');
    lab.establecerCelda(2, 7, '#');
    
    lab.establecerCelda(4, 2, '#');
    lab.establecerCelda(4, 3, '#');
    lab.establecerCelda(4, 4, '#');
    lab.establecerCelda(4, 5, '#');
    
    lab.establecerCelda(6, 4, '#');
    lab.establecerCelda(6, 5, '#');
    lab.establecerCelda(6, 6, '#');
    lab.establecerCelda(6, 7, '#');
    lab.establecerCelda(6, 8, '#');
    
    // Configurar inicio y fin
    lab.establecerInicio(1, 1);
    lab.establecerFin(8, 8);
    
    // Posición actual del jugador
    int posX = 1, posY = 1;
    
    cout << "Controles: W (arriba), A (izquierda), S (abajo), D (derecha), Q (salir)" << endl;
    cout << "Objetivo: Llegar a 'E' desde 'S'" << endl << endl;
    
    // Bucle del juego
    bool juegoTerminado = false;
    while (!juegoTerminado) {
        // Mostrar el laberinto con la posición actual del jugador
        cout << "Laberinto:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "#";
            for (int j = 0; j < 10; j++) {
                if (i == posX && j == posY) {
                    cout << "P";  // Jugador
                } else if (i == 1 && j == 1) {
                    cout << "S";  // Inicio
                } else if (i == 8 && j == 8) {
                    cout << "E";  // Fin
                } else {
                    cout << lab.esValido(i, j) ? (lab.esLibre(i, j) ? " " : "#") : "#";
                }
            }
            cout << "#" << endl;
        }
        // Mostrar borde inferior
        for (int j = 0; j < 12; j++) {
            cout << "#";
        }
        cout << endl;
        
        // Verificar si el jugador llegó al final
        if (posX == 8 && posY == 8) {
            cout << "¡Felicidades! Has llegado al final del laberinto." << endl;
            juegoTerminado = true;
            break;
        }
        
        cout << "Movimiento (W/A/S/D) o Q para salir: ";
        char movimiento = obtenerEntrada();
        cout << movimiento << endl;
        
        // Procesar movimiento
        int nuevaX = posX;
        int nuevaY = posY;
        
        switch (movimiento) {
            case 'W':
            case 'w':
                nuevaX--;
                break;
            case 'S':
            case 's':
                nuevaX++;
                break;
            case 'A':
            case 'a':
                nuevaY--;
                break;
            case 'D':
            case 'd':
                nuevaY++;
                break;
            case 'Q':
            case 'q':
                cout << "¡Gracias por jugar!" << endl;
                juegoTerminado = true;
                continue;
            default:
                cout << "Movimiento no válido. Usa W, A, S, D o Q." << endl;
                continue;
        }
        
        // Verificar si el movimiento es válido
        if (lab.esValido(nuevaX, nuevaY) && (lab.esLibre(nuevaX, nuevaY) || (nuevaX == 8 && nuevaY == 8))) {
            posX = nuevaX;
            posY = nuevaY;
        } else {
            cout << "¡Movimiento no válido! Hay una pared." << endl;
        }
        
        cout << endl;
    }
    
    return 0;
}