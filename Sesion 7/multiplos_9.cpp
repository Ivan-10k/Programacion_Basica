#include <iostream>

using namespace std;

int main() 
{
    const int cantidad_multiplos = 20;
    int multiplos[cantidad_multiplos];

    int numero = 9;
    for (int i = 0; i < cantidad_multiplos; ++i) {
        multiplos[i] = numero * (i + 1);
    }

    // Mostrar los multiplos
    cout << "Los primeros 20 numeros multiplos de 9 son:" << endl;
    for (int i = 0; i < cantidad_multiplos; ++i) {
        cout << multiplos[i] << " ";
    }
    cout << endl;

    return 0;
}
