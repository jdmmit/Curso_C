/*
  Tema: Conversión de Temperatura
  Marca de tiempo: 2:21:14
  Archivo generado: 2025-09-05
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "Tema: Conversión de Temperatura" << endl;
  // Escribe tu código aquí...

  double temp;
  char op;

  cout << "***** Conversor de Temperatura \n*****" << endl;
  cout << "F = Fahrenheit" << endl;
  cout << "C = Celsius" << endl;
  cout << "Aquel tipo de temperatura deseas convertir (F/C): ";
  cin >> op;

  if (op == 'F' || op == 'f')
  {
    cout << "Ingresa la temperatura en Fahrenheit: ";
    cin >> temp;
    temp = (temp - 32) * 5 / 9;
    cout << "La temperatura en Celsius es: " << temp << " C" << endl;
  }
  else if (op == 'C' || op == 'c')
  {
    cout << "Ingresa la temperatura en Celsius: ";
    cin >> temp;
    temp = (temp * 9 / 5) + 32;
    cout << "La temperatura en Fahrenheit es: " << temp << " F" << endl;
  }
  else
  {
    cout << "Opción no válida. Por favor, elige F o C." << endl;
  }

  cout << "*************************************" << endl;

  return 0;
}
