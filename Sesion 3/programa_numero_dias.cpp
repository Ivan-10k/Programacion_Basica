#include <iostream>

using namespace std;

int main() 
{
    // Leer el número de días
    int totalDias;
    cout << "Ingrese el número total de días: ";
    cin >> totalDias;

    // Calcular años, meses y días
    int anos = totalDias / 365;
    int meses = (totalDias % 365) / 30;
    int dias = (totalDias % 365) % 30;

    // Mostrar resultados
    cout << "El número de días ingresado equivale a:" << endl;
    cout << "Años: " << anos << endl;
    cout << "Meses: " << meses << endl;
    cout << "Días: " << dias << endl;

    // Determinar el mes en el que recae
    int diasEnMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mesActual = 0;

    while (dias >= diasEnMes[mesActual]) 
    {
        dias -= diasEnMes[mesActual];
        mesActual++;
    }

    // Mostrar el mes
    string nombreMeses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    cout << "El día recae en el mes de " << nombreMeses[mesActual] << endl;

    return 0;
}
