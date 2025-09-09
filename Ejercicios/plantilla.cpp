#include <iostream>

using namespace std;

void ejercicio01()
{
    cout << "Hola Mundo!" << endl;
}

void ejercicio02()
{
}

void ejercicio03()
{
}

void ejercicio04()
{
}

void ejercicio05()
{
}

void ejercicio06()
{
}

void ejercicio07()
{
}

void ejercicio08()
{
}

void ejercicio09()
{
}

void ejercicio10()
{
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
                ;
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
}