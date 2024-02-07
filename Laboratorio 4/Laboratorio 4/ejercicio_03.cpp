#include <iostream>
using namespace std;

int main() 
{
    const int cantidadNumeros = 20;
    int multiplosDe9[cantidadNumeros];

    // Calcular y almacenar los primeros 20 múltiplos de 9
    for (int i = 0; i < cantidadNumeros; ++i) 
    {
        multiplosDe9[i] = (i + 1) * 9;
    }

    // Mostrar los múltiplos de 9 almacenados
    cout << "Los primeros 20 multiplos de 9 son: ";
    for (int i = 0; i < cantidadNumeros; ++i) 
    {
        cout << multiplosDe9[i] << " ";
    }

    return 0;
}
