#include<iostream>

using namespace std;

int main() 
{
    const int diasLaborables = 6; // Lunes a sábado
    const int produccionMinima = 100;
    int produccionDiaria;
    int incentivoTotal = 0;

    for (int i = 1; i <= diasLaborables; ++i) 
    {
        // Ingresar la producción diaria
        cout << "Ingrese la producción del día " << i << ": ";
        cin >> produccionDiaria;

        // Calcular el incentivo diario (si la producción supera el mínimo)
        int incentivoDiario = (produccionDiaria >= produccionMinima) ? (produccionDiaria - produccionMinima) : 0;

        // Acumular el incentivo total
        incentivoTotal += incentivoDiario;
    }

    // Mostrar el incentivo total al final de la semana
    cout << "El incentivo total semanal es: " << incentivoTotal << " unidades" << endl;

    return 0;
}