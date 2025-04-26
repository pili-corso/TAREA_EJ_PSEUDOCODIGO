#include <iostream> // Librería para entrada/salida
using namespace std;

int main()
{
    int cantidadPacientes;           // Cantidad total de personas
    char sexo;                       // Variable para guardar el sexo ingresado
    int masculino = 0, femenino = 0; // Contadores inicializados

    // Solicita la cantidad total de pacientes
    cout << "Ingrese la cantidad total de pacientes: ";
    cin >> cantidadPacientes;

    // Bucle para leer el sexo de cada paciente
    for (int i = 1; i <= cantidadPacientes; i++)
    {
        cout << "Ingrese el sexo del paciente " << i << " (F/M): ";
        cin >> sexo;

        // Validación del sexo (en mayúsculas y/o minúsculas)
        if (sexo == 'f' || sexo == 'F')
        {
            femenino++;
        }
        else if (sexo == 'm' || sexo == 'M')
        {
            masculino++;
        }
        else
        {
            cout << "Sexo invalido. Reingreselo por favor." << endl;
        }
    }

    // Cálculo de porcentajes
    float porcentajeHombres = (masculino * 100.0) / cantidadPacientes;
    float porcentajeMujeres = (femenino * 100.0) / cantidadPacientes;

    // Mostrar resultados
    cout << "\nResultados:" << endl;
    cout << "Porcentaje de hombres: " << porcentajeHombres << "%" << endl;
    cout << "Porcentaje de mujeres: " << porcentajeMujeres << "%" << endl;

    return 0;
}
