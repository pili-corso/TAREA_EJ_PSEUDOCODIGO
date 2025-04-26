#include <iostream> // Librería para entrada y salida
using namespace std;

int main()
{
    int numero;
    bool esPrimo = true; // Asumo que el numero es primo

    // solicito al usuario un numero
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    // validar que el numero sea mayor a 1
    if (numero <= 1)
    {
        esPrimo = false;
    }
    else
    {
        // pruebo divisores desde 2 hasta la mitad del numero
        for (int i = 2; i <= numero / 2; i++)
        {
            if (numero % i == 0)
            {
                esPrimo = false; // si encuentra un divisor, no es primo
                break;           // ya no es necesario seguir buscando
            }
        }
    }
    // muestro el resultado
    if (esPrimo)
    {
        cout << numero << " es un numero primo" << endl;
    }
    else
    {
        cout << numero << " no es un numero primo" << endl;
    }
    return 0;
}