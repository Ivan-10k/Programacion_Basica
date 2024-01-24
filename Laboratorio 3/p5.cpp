#include<iostream>

using namespace std;

int main() 
{
    int numeroAlumnos;
    double costoPorAlumno, costoTotal;

    // Ingresar el número de alumnos
    cout << "Ingrese el número de alumnos: ";
    cin >> numeroAlumnos;

    // Calcular el costo por alumno y el costo total según las condiciones dadas
    if (numeroAlumnos >= 100) 
    {
        costoPorAlumno = 65.00;
    } else if (numeroAlumnos >= 50 && numeroAlumnos <= 99) 
    {
        costoPorAlumno = 70.00;
    } else if (numeroAlumnos >= 30 && numeroAlumnos <= 49) 
    {
        costoPorAlumno = 95.00;
    } else 
    {
        costoPorAlumno = 0; // No importa el número de alumnos, el costo del autobús es fijo
    }

    // Calcular el costo total del viaje
    costoTotal = numeroAlumnos * costoPorAlumno;

    // Mostrar los resultados
    cout << "El costo por alumno es: $" << costoPorAlumno << endl;
    cout << "El costo total del viaje es: $" << costoTotal << endl;

    return 0;
}
