#include <iostream>
#include <string>

using namespace std;

int main() 
{
    const int cantidadNotas = 10;
    double notas[cantidadNotas];
    double *punteroNota = notas;

    cout << "Ingrese las 10 notas:" << endl;

    for (int i = 0; i < cantidadNotas; ++i) 
    {
        cout << "Nota " << i + 1 << ": ";
        cin >> *(punteroNota + i);
    }

    double suma = 0;
    for (int i = 0; i < cantidadNotas; ++i) 
    {
        suma += *(punteroNota + i);
    }

    double promedio = suma / cantidadNotas;

    cout << "El promedio de las notas es: " << promedio << endl;

    return 0;
}
