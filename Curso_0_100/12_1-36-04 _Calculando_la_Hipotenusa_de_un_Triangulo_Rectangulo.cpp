/*
  Tema: Calculando la Hipotenusa de un Triangulo Rectángulo
  Marca de tiempo: 1:36:04
  Archivo generado: 2025-09-05
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  cout << "Tema: Calculando la Hipotenusa de un Triangulo Rectángulo" << endl;
  double a, b, c;
  cout << "Ingrese el valor del cateto a: ";
  cin >> a;
  cout << "Ingrese el valor del cateto b: ";
  cin >> b;
  c = sqrt(pow(a, 2) + pow(b, 2));
  cout << "La hipotenusa c es: " << c << endl;
  return 0;
}
