#include <iostream>
using namespace std;

bool esPrimo(int n) 
{
    if (n <= 1) 
    {
        return false;
    }
    for (int i = 2; i <= n / 2; ++i) 
    {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Leer un valor entero positivo
    int numero;
    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    // Verificar si el número es primo
    if (esPrimo(numero)) {
        cout << numero << " es un número primo." << endl;
    } else {
        cout << numero << " no es un número primo." << endl;
    }

    return 0;
}
