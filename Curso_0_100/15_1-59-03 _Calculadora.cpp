/*
  Tema: Calculadora
  Marca de tiempo: 1:59:03
  Archivo generado: 2025-09-05
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "Tema: Calculadora" << endl;

  char op;
  double num1;
  double num2;
  double result;

  cout << " ################ CALCULADORA ########### \n"
       << endl;

  cout << "Ingrese el primer numero: ";
  cin >> num1;
  cout << "Ingrese el segundo numero: ";
  cin >> num2;
  cout << "Ingrese la operacion (+, -, *, /): ";
  cin >> op;

  cout << " ######################################## \n"
       << endl;

  switch (op)
  {
  case '+':
    result = num1 + num2;
    cout << "Resultado: " << result << endl;
    break;
  case '-':
    result = num1 - num2;
    cout << "Resultado: " << result << endl;
    break;
  case '*':
    result = num1 * num2;
    cout << "Resultado: " << result << endl;
    break;
  case '/':
    if (num2 != 0)
    {
      result = num1 / num2;
      cout << "Resultado: " << result << endl;
    }
    else
    {
      cout << "Error: Division por cero no permitida." << endl;
    }
    break;
  default:
    cout << "Operacion no valida." << endl;
  }

  return 0;
}
