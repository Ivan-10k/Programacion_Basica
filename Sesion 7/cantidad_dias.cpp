#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    int mes, anio, dias;

    // Solicitar al usuario el mes y el año
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;

    // Verificar que el mes ingresado sea válido
    if (mes < 1 || mes > 12) {
        cout << "Mes no valido. Por favor, ingrese un mes valido." << endl;
        return 1; // Salir del programa con código de error
    }

    cout << "Ingrese el año: ";
    cin >> anio;

    // Calcular el número de días en el mes
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias = 31;
            break;
        case 4: case 6: case 9: case 11:
            dias = 30;
            break;
        case 2:
            // No se tiene en cuenta el año bisiesto en este ejemplo
            dias = 28;
            break;
        default:
            cout << "Algo salio mal. Por favor, intentelo de nuevo." << endl;
            return 1; // Salir del programa con código de error
    }

    // Mostrar el resultado
    cout << "El mes " << mes << " del año " << anio << " tiene " << dias << " dias." << endl;

    return 0; // Salir del programa con éxito
}
