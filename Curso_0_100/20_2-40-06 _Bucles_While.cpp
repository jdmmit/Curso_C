/*
  Tema: Bucles While
  Marca de tiempo: 2:40:06
  Archivo generado: 2025-09-05
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "Tema: Bucles While" << endl;
  // Escribe tu código aquí...
  string nombre;

  while (nombre != "salir")
  {
    cout << "Escribe tu nombre (o 'salir' para terminar): ";
    cin >> nombre;
    if (nombre != "salir")
    {
      cout << "Hola, " << nombre << "!" << endl;
    }
  }

  return 0;
}
