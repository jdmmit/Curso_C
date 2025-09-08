/*
  Tema: Operador Ternario
  Marca de tiempo: 2:07:09
  Archivo generado: 2025-09-05
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "Tema: Operador Ternario" << endl;
  // Escribe tu código aquí...
  int calificacion = 75;

  calificacion >= 60 ? cout << "Aprobado" << endl : cout << "Reprobado" << endl;

  bool esMayor = (calificacion >= 60) ? true : false;
  cout << "Es mayor de edad: " << esMayor << endl;

  return 0;
}
