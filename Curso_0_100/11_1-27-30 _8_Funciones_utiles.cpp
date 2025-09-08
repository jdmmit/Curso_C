/*
  Tema: 8 Funciones útiles
  Marca de tiempo: 1:27:30
  Archivo generado: 2025-09-05
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double x = 3;
  double y = 4;
  double z;
  double w;
  double s;
  double t;
  double o;
  double p;
  double q;
  double r;

  z = max(x, y);
  w = min(x, y);
  s = pow(x, y);
  t = sqrt(x);
  o = abs(-5.5);
  p = round(3.6);
  q = ceil(3.4);
  r = floor(3.6);

  cout << "el valor minimo es: " << w << endl;
  cout << "el valor maximo es: " << z << endl;
  cout << "el valor de x elevado a y es: " << s << endl;
  cout << "la raiz cuadrada de x es: " << t << endl;
  cout << "el valor absoluto de -5.5 es: " << o << endl;
  cout << "el valor redondeado de 3.6 es: " << p << endl;
  cout << "el valor redondeado hacia arriba de 3.4 es: " << q << endl;
  cout << "el valor redondeado hacia abajo de 3.6 es: " << r << endl;
  return 0;
}
