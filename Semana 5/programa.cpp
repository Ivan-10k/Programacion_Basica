#include <iostream>

int main() 
{
    // Solicitar al usuario ingresar el número de días
    std::cout << "Ingrese un numero de dias: ";
    int totalDias;
    std::cin >> totalDias;

    // Calcular años, meses y días
    int anos = totalDias / 365;
    int meses = (totalDias % 365) / 30;
    int diasRestantes = (totalDias % 365) % 30;

    // Determinar el mes en el que recae el día restante
    int mesActual = 1;
    while (diasRestantes > 0) {
        int diasEnMes = 0;

        // Consideramos meses con 31 días
        if (mesActual == 1 || mesActual == 3 || mesActual == 5 || mesActual == 7 || mesActual == 8 || mesActual == 10 || mesActual == 12) {
            diasEnMes = 31;
        }
        // Consideramos febrero (28 o 29 días)
        else if (mesActual == 2) {
            // Verificamos si es un año bisiesto (divisible por 4 y no por 100, o divisible por 400)
            if ((anos % 4 == 0 && anos % 100 != 0) || anos % 400 == 0) 
            {
                diasEnMes = 29; // Año bisiesto
            } else 
            {
                diasEnMes = 28; // Año no bisiesto
            }
        }
        // Resto de los meses con 30 días
        else 
        {
            diasEnMes = 30;
        }

        // Verificar si el día restante es menor o igual a los días en el mes actual
        if (diasRestantes <= diasEnMes) 
        {
            break;
        }

        // Reducir el día restante y pasar al siguiente mes
        diasRestantes -= diasEnMes;
        mesActual++;
    }

    // Mostrar resultados
    std::cout << "El total de dias es equivalente a: " << anos << " años, " << meses << " meses y " << diasRestantes << " dias." << std::endl;
    std::cout << "El dia restante recae en el mes " << mesActual << "." << std::endl;

    return 0;
}
