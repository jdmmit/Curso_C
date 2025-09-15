/*
  Tema: Break & continue
  Marca de tiempo: 2:59:32
  Archivo generado: 2025-09-05
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "Tema: Break & continue" << endl;
  // Escribe tu código aquí...

  for (int i = 0; i < 10; i++)
  {
    if (i == 5)
    {
      cout << "Break en i = " << i << endl;
      break; // Sale del bucle cuando i es 5
    }
    if (i % 2 == 0)
    {
      cout << "Continue en i = " << i << endl;
      continue; // Salta a la siguiente iteración cuando i es par
    }
    cout << "i = " << i << endl;
  }

  return 0;
}
