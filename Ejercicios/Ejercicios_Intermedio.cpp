#include <iostream>

using namespace std;

void ejercicio01()
{
    cout << "1. **Números del 1 al 10**" << endl;
    cout << "Escribe un programa que muestre en pantalla los números del 1 al 10 usando un ciclo `for`." << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
}

void ejercicio02()
{
    cout << "2. **Suma de los primeros N números**" << endl;
    cout << "Pide al usuario un número `N` y calcula la suma de todos los números desde 1 hasta `N`." << endl;

    int N;
    int suma = 0;
    cout << "Ingresa un numero: " << endl;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        suma += i;
    }
    cout << " la suma de los numero de : " << N << " numeros es " << suma << endl;
}

void ejercicio03()
{
    cout << "3. **Tabla de multiplicar**" << endl;
    cout << "Pide un número al usuario y muestra su tabla de multiplicar del 1 al 10." << endl;

    int N;
    cout << "Ingresa un numero: " << endl;
    cin >> N;

    for (int i = 1; i <= 10; i++)
    {
        cout << N << " x " << i << " = " << N * i << endl;
    }
}

void ejercicio04()
{
    cout << "4. **Factorial de un número**" << endl;
    cout << "Pide un número entero positivo al usuario y calcula su factorial usando un ciclo." << endl;

    int N;
    long long factorial = 1;
    cout << "Ingresa un numero: " << endl;
    cin >> N;
    if (N < 0)
    {
        cout << "El factorial no está definido para números negativos." << endl;
    }
    else
    {
        for (int i = 1; i <= N; i++)
        {
            factorial *= i;
        }
        cout << "El factorial de " << N << " es " << factorial << endl;
    }
}

void ejercicio05()
{
    cout << "5. **Contador de pares e impares**" << endl;
    cout << "Pide al usuario ingresar 10 números y muestra cuántos son pares y cuántos son impares." << endl;

    int numero;
    int pares = 0;
    int impares = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Ingresa el numero " << i << ": " << endl;
        cin >> numero;

        if (numero % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }
    cout << "Cantidad de pares: " << pares << endl;
    cout << "Cantidad de impares: " << impares << endl;
}

void ejercicio06()
{
    cout << "6. **Número primo**" << endl;
    cout << "Pide un número al usuario y determina si es primo o no." << endl;
    int N;
    bool esPrimo = true;
    cout << "Ingresa un numero: " << endl;
    cin >> N;
    if (N <= 1)
    {
        esPrimo = false;
    }
    else
    {
        for (int i = 2; i <= N / 2; i++)
        {
            if (N % i == 0)
            {
                esPrimo = false;
                break;
            }
        }
    }
    if (esPrimo)
    {
        cout << N << " es un número primo." << endl;
    }
    else
    {
        cout << N << " no es un número primo." << endl;
    }
}

void ejercicio07()
{
    cout << "7. **Fibonacci**" << endl;
    cout << "Pide al usuario un número `n` y muestra los primeros `n` términos de la serie de Fibonacci." << endl;

    int n;
    cout << "Ingresa un numero n: ";
    cin >> n;

    unsigned long long a = 0, b = 1;

    cout << "Serie de Fibonacci con " << n << " terminos:" << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";                     // mostramos el término actual
        unsigned long long siguiente = a + b; // calculamos el siguiente
        a = b;                                // movemos b a a
        b = siguiente;                        // actualizamos b
    }

    cout << endl;
}

void ejercicio08()
{
    cout << "8. **Inversión de un número**" << endl;
    cout << "Pide un número entero y muestra su inverso." << endl;
    cout << "Ejemplo: si el usuario ingresa `1234`, el programa debe mostrar `4321`." << endl;

    int N, inverso = 0;
    cout << "Ingresa un numero: " << endl;
    cin >> N;
    while (N != 0)
    {
        int digito = N % 10;             // Obtener el último dígito
        inverso = inverso * 10 + digito; // Construir el número inverso
        N /= 10;                         // Eliminar el último dígito
    }
    cout << "El número inverso es: " << inverso << endl;
}

void ejercicio09()
{
    cout << "9. **Adivina el número** 🎲" << endl;
    cout << "Genera un número aleatorio entre 1 y 100. El usuario debe adivinarlo; el programa le dirá si el número ingresado es mayor o menor que el número secreto, hasta que acierte." << endl;

    int numeroSecreto = rand() % 100 + 1;
    int intento;
    int contador = 0;

    cout << "He pensado en un numero entre 1 y 100. ¡Adivina cual es!" << endl;

    do
    {
        cout << "Ingresa tu intento: ";
        cin >> intento;
        contador++;

        if (intento > numeroSecreto)
        {
            cout << "El numero secreto es menor " << endl;
        }
        else if (intento < numeroSecreto)
        {
            cout << "El numero secreto es mayor " << endl;
        }
        else
        {
            cout << " ¡Correcto! El numero era " << numeroSecreto
                 << ". Lo adivinaste en " << contador << " intentos." << endl;
        }
    } while (intento != numeroSecreto);
}

void ejercicio10()
{
    cout << "10. **Menú de operaciones matemáticas**" << endl;
    cout << "Crea un menú con opciones:" << endl;
    cout << "11. Suma" << endl;
    cout << "12. Resta" << endl;
    cout << "13. Multiplicación" << endl;
    cout << "14. División" << endl;
    cout << "El programa debe pedir dos números y ejecutar la operación elegida." << endl;

    int opcion;
    double a, b, resultado;

    cout << "\nElige una opcion (11-14): ";
    cin >> opcion;

    cout << "Ingresa el primer numero: ";
    cin >> a;
    cout << "Ingresa el segundo numero: ";
    cin >> b;

    switch (opcion)
    {
    case 11:
        resultado = a + b;
        cout << "La suma es: " << resultado << endl;
        break;
    case 12:
        resultado = a - b;
        cout << "La resta es: " << resultado << endl;
        break;
    case 13:
        resultado = a * b;
        cout << "La multiplicacion es: " << resultado << endl;
        break;
    case 14:
        if (b != 0)
        {
            resultado = a / b;
            cout << "La division es: " << resultado << endl;
        }
        else
        {
            cout << "Error: No se puede dividir entre cero." << endl;
        }
        break;
    default:
        cout << "Opcion no valida." << endl;
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
