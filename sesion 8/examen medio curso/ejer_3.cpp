#include <iostream>
using namespace std;

double calcularSueldoSemanal(int horasTrabajadas) 
{
    const int horasNormales = 40;
    const double tarifaNormal = 20.0;
    const double tarifaExtra = 25.0;

    if (horasTrabajadas <= horasNormales) 
    {
        return horasTrabajadas * tarifaNormal;
    } else 
    {
        int horasNormalesPagadas = horasNormales * tarifaNormal;
        int horasExtrasPagadas = (horasTrabajadas - horasNormales) * tarifaExtra;
        return horasNormalesPagadas + horasExtrasPagadas;
    }
}

int main() 
{
    int horasTrabajadas;

    cout << "Ingrese el numero de horas trabajadas en la semana: ";
    cin >> horasTrabajadas;

    if (horasTrabajadas < 0) 
    {
        cout << "Error: Las horas trabajadas no pueden ser un numero negativo." << endl;
    } else 
    {
        double sueldoSemanal = calcularSueldoSemanal(horasTrabajadas);
        cout << "El sueldo semanal es: $" << sueldoSemanal << endl;
    }

    return 0;
}
