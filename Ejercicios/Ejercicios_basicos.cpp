#include <iostream>

using namespace std;

void ejercicio01()
{

    cout << "1. **Escribe un programa que muestre en pantalla: **" << endl;

    cout << "Hola Mundo!" << endl;
    cout << endl;
}

void ejercicio02()
{
    cout << "2. **Suma de dos números** " << endl;
    cout << " Pide al usuario dos números enteros e imprime la suma." << endl;

    int A;
    cout << "Ingresa el valor A: " << endl;
    cin >> A;
    int B;
    cout << "Ingresa el valor B: " << endl;
    cin >> B;

    int suma = A + B;
    cout << "El valor de A es: " << A << " El valor de B es: " << B << " La suma es " << suma << endl;
}

void ejercicio03()
{
    cout << "3. **Área de un rectángulo**" << endl;
    cout << "Pide al usuario la base y la altura de un rectángulo, calcula el área y muéstrala." << endl;

    int base;
    cout << "Ingresa la Base del rectangulo: " << endl;
    cin >> base;
    int altura;
    cout << "Ingresa la Altura del rectangulo: " << endl;
    cin >> altura;

    int area = base * altura;
    cout << "La Altura del rectangulo es: " << altura << " La Base del rectangulo es: " << base << " El area del rectangulo es: " << area << endl;
}

void ejercicio04()
{
    cout << "4. **Número par o impar**" << endl;
    cout << "Pide un número al usuario y determina si es par o impar." << endl;

    int numero;
    cout << "Ingresa un numero: " << endl;
    cin >> numero;

    if (numero % 2 == 0)
        cout << "El numero es par" << endl;
    else
        cout << " El numero es impar" << endl;
}

void ejercicio05()
{
    cout << "5. **Mayor de dos números**" << endl;
    cout << "Pide dos números al usuario y muestra cuál es el mayor." << endl;

    int numero1;
    cout << "Ingresa el primer nuemro: " << endl;
    cin >> numero1;
    int numero2;
    cout << "Ingresa el segundo numero: " << endl;
    cin >> numero2;

    if (numero1 < numero2)
        cout << "El numero " << numero1 << " es menor que " << numero2 << endl;
    else if (numero1 == numero2)
    {
        cout << "Los numeros son Iguales " << endl;
    }

    else
        cout << "El numero " << numero1 << " es mayor que " << numero2 << endl;
}

void ejercicio06()
{
    cout << "6. **Conversión de grados Celsius a Fahrenheit**" << endl;
    cout << "Pide al usuario una temperatura en Celsius y conviértela a Fahrenheit usando la fórmula: " << endl;

    float c;
    cout << "Ingresa la temperatura en grados celcius:" << endl;
    cin >> c;

    float f = (c * (9 / 5) + 32);
    cout
        << " La temperatura en grados centigrados es: " << c << " La temepratura en grados fahrenheit es: " << f << endl;
}

void ejercicio07()
{
    cout << "7. **Promedio de tres números**" << endl;
    cout << "Pide tres números al usuario, calcula el promedio y muéstralo." << endl;

    float a;
    cout << "Ingresa el primer valor: " << endl;
    cin >> a;
    float b;
    cout << "Ingresa el segundo valor: " << endl;
    cin >> b;
    float c;
    cout << "Ingresa el tercero valor: " << endl;
    cin >> c;

    float promedio = ((a + b + c) / 3);
    cout << "El promedio de los numeros es: " << promedio << endl;
}

void ejercicio08()
{
    cout << "8. **Área de un círculo**" << endl;
    cout << "Pide el radio de un círculo y calcula el área usando la fórmula: " << endl;

    double radio;
    cout << " Ingrese el radio del circulo: " << endl;
    cin >> radio;
    const double PI = 3.1416;

    double area = PI * (radio * radio);
    cout << "El area del circulo es: " << area << endl;
}

void ejercicio09()
{
    cout << "9. **Edad del usuario**" << endl;
    cout << "Pide la edad del usuario y muestra un mensaje que diga si es mayor de edad (18 o más) o menor de edad." << endl;

    int edad;
    cout << "Ingresa tu edad: " << endl;
    cin >> edad;

    if (edad < 18)
        cout << "Es menor de edad." << endl;
    else
        cout << "Es mayor de edad." << endl;
}

void ejercicio10()
{
    cout << "10. **Número positivo, negativo o cero**" << endl;
    cout << "Pide un número al usuario y determina si es positivo, negativo o igual a cero." << endl;

    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0)
    {
        cout << "El numero es positivo." << endl;
    }
    else if (numero < 0)
    {
        cout << "El numero es negativo." << endl;
    }
    else
    {
        cout << "El numero es cero." << endl;
    }
}

int main()
{
    cout << " 10 Ejercicios Básicos de C++  " << endl;
    cout << "******************************" << endl;

    int opciones = 0;

    while (opciones != 11)
    {
        cout << "1. Ejercicio 01" << endl;
        cout << "2. Ejercicio 02" << endl;
        cout << "3. Ejercicio 03" << endl;
        cout << "4. Ejercicio 04" << endl;
        cout << "5. Ejercicio 05" << endl;
        cout << "6. Ejercicio 06" << endl;
        cout << "7. Ejercicio 07" << endl;
        cout << "8. Ejercicio 08" << endl;
        cout << "9. Ejercicio 09" << endl;
        cout << "10. Ejercicio 10" << endl;
        cout << "****************" << endl;
        cout << "11. Salir" << endl;
        cout << "Ingresa una opcion" << endl;

        cin >> opciones;

        switch (opciones)
        {
        case 1:
            ejercicio01();
            break;
        case 2:
            ejercicio02();
            break;
        case 3:
            ejercicio03();
            break;
        case 4:
            ejercicio04();
            break;
        case 5:
            ejercicio05();
            break;
        case 6:
            ejercicio06();
            break;
        case 7:
            ejercicio07();
            break;
        case 8:
            ejercicio08();
            break;
        case 9:
            ejercicio09();
            break;
        case 10:
            ejercicio10();
            break;
        case 11:
            cout << "Salir" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
        cout << "****************" << endl;
        cout << endl;
    }
}
