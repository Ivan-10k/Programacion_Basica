#include <iostream>

using namespace std;

int main() 
{
    cout << "Ingrese un numero de dias: ";
    int totalDias;
    cin >> totalDias;

    int anos = totalDias / 365;
    int meses = (totalDias % 365) / 30;
    int diasRestantes = (totalDias % 365) % 30;

    int mesActual = 1;
    while (diasRestantes > 0) 
    {
        int diasEnMes = 0;

        if (mesActual == 1 || mesActual == 3 || mesActual == 5 || mesActual == 7 || mesActual == 8 || mesActual == 10 || mesActual == 12) {
            diasEnMes = 31;
        }
 
        else if (mesActual == 2) 
        {
            if ((anos % 4 == 0 && anos % 100 != 0) || anos % 400 == 0) 
            {
                diasEnMes = 29;
            } else 
            {
                diasEnMes = 28;
            }
        }
        else 
        {
            diasEnMes = 30;
        }

        if (diasRestantes <= diasEnMes) 
        {
            break;
        }

        diasRestantes -= diasEnMes;
        mesActual++;
    }

    cout << "El total de dias es equivalente a: " << anos << " años, " << meses << " meses y " << diasRestantes << " dias." << endl;
    cout << "El dia restante recae en el mes " << mesActual << "." << endl;

    return 0;
}

