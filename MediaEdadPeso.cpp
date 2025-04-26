#include <iostream> // Librería para entrada y salida
using namespace std;

int main()
{
    int cantidadEstudiantes; // Variable para la cantidad total de estudiantes
    int edad;                // Variable para cada edad ingresada
    float peso;              // Variable para cada peso ingresado
    int sumaEdad = 0;        // Acumulador de edades
    float sumaPeso = 0;      // Acumulador de pesos

    // Solicita al usuario la cantidad de estudiantes
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> cantidadEstudiantes;

    // Bucle para ingresar edad y peso de cada estudiante
    for (int i = 1; i <= cantidadEstudiantes; i++)
    {
        cout << "Ingrese la edad del estudiante " << i << ": ";
        cin >> edad;

        cout << "Ingrese el peso del estudiante " << i << " (en kg): ";
        cin >> peso;

        // Acumula edad y peso
        sumaEdad += edad; // sumaEdad = sumaEdad + edad
        sumaPeso += peso; // sumaPeso = sumaPeso + peso
    }

    // Calcula las medias (promedios)
    float mediaEdad = (float)sumaEdad / cantidadEstudiantes;
    float mediaPeso = sumaPeso / cantidadEstudiantes;

    // Muestra los resultados
    cout << "\nResultados:" << endl;
    cout << "Edad promedio: " << mediaEdad << " anios" << endl;
    cout << "Peso promedio: " << mediaPeso << " kg" << endl;

    return 0;
}