#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arreglo[5] = {1, 2, 3, 4, 5};
    int *puntero;

    puntero = arreglo;

    cout << "impriendo los valores del arreglo" << endl;

    for (int i = 0; i < 5; i++)
    {
        // cout<<arreglo[i];
        cout << *(puntero + i) << endl;
        cout << puntero << endl;
    }
    cout << endl;
}
