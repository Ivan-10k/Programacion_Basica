#include <iostream>
#include <string>
using namespace std;

int main()
{
    int notas[5];
    int *puntero_notas;
    int suma = 0;

    puntero_notas = notas;

    cout << "Ingrese las notas" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "ingrese la nota: " << i + 1 << endl;
        cin >> *(puntero_notas + i);
        suma += *(puntero_notas + i);
    }
    cout << endl;

    cout << "El promedio  de las notas es: " << suma / 5 << endl;
}
