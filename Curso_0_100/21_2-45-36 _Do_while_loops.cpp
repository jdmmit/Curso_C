/*
  Tema: Do while loops
  Marca de tiempo: 2:45:36
  Archivo generado: 2025-09-05
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "Tema: Do while loops" << endl;
  // Escribe tu código aquí...
  int numero;

  do
  {
    cout << "Ingresa un numero (0 para salir): ";
    cin >> numero;
    cout << "El numero ingresado es: " << numero << endl;
  } while (numero != 0);

  cout << "Fin del programa." << endl;

  return 0;
}
