#include <iostream>  // Incluye la librería para entrada/salida
using namespace std; // Para evitar escribir std:: antes de cin y cout

int main()
{
    // Declaración de variables
    float base, altura, area, perimetro;

    // Solicita la base al usuario
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;

    // Solicita la altura al usuario
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    // Cálculo del área
    area = base * altura;

    // Cálculo del perímetro
    perimetro = 2 * (base + altura);

    // Mostrar resultados
    cout << "El área del rectangulo es: " << area << endl;
    cout << "El perímetro del rectangulo es: " << perimetro << endl;

    return 0;
}
