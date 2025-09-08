/*
  Tema: Métodos
  Marca de tiempo: 2:29:37
  Archivo generado: 2025-09-05
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "Tema: Métodos" << endl;
  // Escribe tu código aquí...

  string nombre;

  nombre = "Juan";
  cout << nombre.length() << endl;               // 4
  cout << nombre.size() << endl;                 // 4
  cout << nombre.empty() << endl;                // 0
  cout << nombre.append(" Perez") << endl;       // Juan Perez
  cout << nombre.at(0) << endl;                  // J
  cout << nombre.insert(5, " Gomez") << endl;    // Juan Gomez Perez
  cout << nombre.find("Gomez") << endl;          // 5
  cout << nombre.replace(5, 5, "Lopez") << endl; // Juan Lopez Perez
  cout << nombre.substr(5, 5) << endl;           // Lopez
  cout << nombre.erase(5, 6) << endl;            // Juan Perez

  return 0;
}
