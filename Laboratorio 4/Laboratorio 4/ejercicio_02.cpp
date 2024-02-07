#include <iostream>
using namespace std;

int main() 
{
    // Pedir al usuario que ingrese el número de mes
    int mes;
    cout << "Ingrese el numero de mes (1-12): ";
    cin >> mes;

    // Verificar si el número de mes es válido
    if (mes < 1 || mes > 12) 
    {
        cout << "Número de mes invalido. Por favor, ingrese un numero entre 1 y 12." << endl;
        return 1;
    }

    // Definir un array con la cantidad de días por cada mes
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Obtener la cantidad de días para el mes ingresado
    int cantidadDias = diasPorMes[mes];

    // Mostrar el resultado
    cout << "El mes " << mes << " tiene " << cantidadDias << " dias." << endl;

    return 0; 
}
