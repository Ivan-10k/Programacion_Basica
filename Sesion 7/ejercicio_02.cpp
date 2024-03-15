#include <iostream>
#include <iomanip> 

using namespace std;

const int NUM_ALUMNOS = 4;
const int NUM_NOTAS = 3;

int main()
{
    double notas[NUM_ALUMNOS][NUM_NOTAS];
    double promedios[NUM_ALUMNOS];

    for (int i = 0; i < NUM_ALUMNOS; ++i) 
    {
        cout << "Ingrese las notas del Alumno " << (i + 1) << ":" << endl;
        for (int j = 0; j < NUM_NOTAS; ++j) {
            cout << "Nota " << (j + 1) << ": ";
            cin >> notas[i][j];
        }
    }

    for (int i = 0; i < NUM_ALUMNOS; ++i) 
    {
        double suma = 0;
        for (int j = 0; j < NUM_NOTAS; ++j) 
        {
            suma += notas[i][j];
        }
        promedios[i] = suma / NUM_NOTAS;
    }

    cout << "\nResultados:" << endl;
    cout << setw(15) << "Alumno" << setw(15) << "Promedio" << endl;
    for (int i = 0; i < NUM_ALUMNOS; ++i) {
        cout << setw(15) << "Alumno " << (i + 1) << setw(15) << setprecision(2) << fixed << promedios[i] << endl;
    }

    return 0;
}
