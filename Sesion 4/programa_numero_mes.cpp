#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // Leer el número de mes
    int numeroMes;
    cout << "Ingrese el número de mes (1-12): ";
    cin >> numeroMes;

    // Verificar si el número de mes es válido
    if (numeroMes >= 1 && numeroMes <= 12) 
    {
        // Array con los nombres de los meses
        string nombreMeses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

        // Mostrar el nombre del mes
        cout << "El nombre del mes es: " << nombreMeses[numeroMes - 1] << endl;
    } else 
    {
        cout << "Número de mes inválido. Debe estar en el rango de 1 a 12." << endl;
    }

    return 0;
}
