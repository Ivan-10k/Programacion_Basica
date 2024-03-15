#include <iostream>

using namespace std;

int main() 
{
    int mes, anio, dias;

    cout << "Ingrese el mes (1-12): ";
    cin >> mes;

    if (mes < 1 || mes > 12) 
    {
        cout << "Mes no valido. Por favor, ingrese un mes valido." << endl;
        return 1; 
    }

    cout << "Ingrese el año: ";
    cin >> anio;

    switch (mes) 
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias = 31;
            break;
        case 4: case 6: case 9: case 11:
            dias = 30;
            break;
        case 2:
            dias = 28;
            break;
        default:
            cout << "Algo salio mal. Por favor, intentelo de nuevo." << endl;
            return 1;
    }

    cout << "El mes " << mes << " del año " << anio << " tiene " << dias << " dias." << endl;

    return 0;
}
