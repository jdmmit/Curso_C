/*
  Tema: Operadores Lógicos
  Marca de tiempo: 2:13:39
  Archivo generado: 2025-09-05
*/

#include <iostream>
using namespace std;

int main()
{

  // && (AND lógico) cuando ambas condiciones son verdaderas
  // || (OR lógico) cuando al menos una de las condiciones es verdadera
  // ! (NOT lógico) invierte el valor de verdad de la condición
  cout << "Tema: Operadores Lógicos" << endl;
  // Escribe tu código aquí...

  int temp;
  cout << "Ingrese la temperatura: ";
  cin >> temp;

  if (temp > 0 && temp < 30)
  {
    cout << "El clima es agradable" << endl;
  }
  else if (temp <= 0 || temp >= 30)
  {
    cout << "El clima no es agradable" << endl;
  }
  else
  {
    cout << "El clima es extremo" << endl;
  }

  return 0;
}
