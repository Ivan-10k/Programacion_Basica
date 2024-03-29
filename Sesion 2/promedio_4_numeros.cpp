#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Leer 4 números
    double numeros[4];
    for (int i = 0; i < 4; ++i) 
    {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Ordenar los números de menor a mayor
    sort(numeros, numeros + 4);

    // Mostrar los números ordenados
    cout << "Números ordenados de menor a mayor: ";
    for (int i = 0; i < 4; ++i) 
    {
        cout << numeros[i] << " ";
    }

    return 0;
}
