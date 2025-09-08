/*
  Tema: Switches
  Marca de tiempo: 1:50:11
  Archivo generado: 2025-09-05
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "Tema: Switches" << endl;
  // Escribe tu código aquí...

  int mes;
  cout << "Ingresa un número de mes (1-12): ";
  cin >> mes;

  switch (mes)
  {
  case 1:
    cout << "Enero" << endl;
    break;
  case 2:
    cout << "Febrero" << endl;
    break;
  case 3:
    cout << "Marzo" << endl;
    break;
  case 4:
    cout << "Abril" << endl;
    break;
  case 5:
    cout << "Mayo" << endl;
    break;
  case 6:
    cout << "Junio" << endl;
    break;
  case 7:
    cout << "Julio" << endl;
    break;
  case 8:
    cout << "Agosto" << endl;
    break;
  case 9:
    cout << "Septiembre" << endl;
    break;
  case 10:
    cout << "Octubre" << endl;
    break;
  case 11:
    cout << "Noviembre" << endl;
    break;
  case 12:
    cout << "Diciembre" << endl;
    break;
  default:
    cout << "Número de mes inválido." << endl;
  }

  return 0;
}
