#include <iostream> // Librería para entrada/salida
using namespace std;
int main()
{
    int numero; // Variable para almacenar el número ingresado por el usuario
    // Para factorial uso 'unsigned long long' porque el factorial puede ser un número muy grande.
    // 'unsigned' = solo números positivos
    // 'long long' = permite valores mucho mayores que un int normal
    unsigned long long factorial = 1; // lo incializo en 1 porque el producto neutro de la multiplicacion es 1

    // le pido al usuario que ingrese un numero
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    // verifico que sea entero positivo
    if (numero < 0)
    {
        cout << "No se puede calcular el factorial de un numero negativo";
    }
    else
    { // calculo el factorial
        for (int i = 1; i <= numero; i++)
        {
            factorial = factorial * i;
        }

        // muestro el resultado
        cout << "El factorial de " << numero << "es " << factorial;
    }
    return 0;
}