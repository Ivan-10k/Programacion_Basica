#include <iostream>

using namespace std;


bool esPrimo(int numero) 
{
    if (numero <= 1) 
    {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) 
    {
        if (numero % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main() {
    int numerosPrimos[10];
    int contador = 0;

    while (contador < 10) {
        int numero;
        cout << "Ingrese un numero: ";
        cin >> numero;

        // Verificar si el número ingresado es primo
        if (esPrimo(numero)) 
        {
            // Guardar el número primo en el arreglo
            numerosPrimos[contador] = numero;
            contador++;
            cout << numero << " es primo y se ha guardado en el arreglo." << endl;
        } else {
            cout << numero << " no es primo. Intente con otro numero." << endl;
        }
    }

    // Mostrar los números primos guardados en el arreglo
    cout << "Numeros primos guardados en el arreglo: ";
    for (int i = 0; i < 10; i++) {
        cout << numerosPrimos[i] << " ";
    }

    return 0;
}
