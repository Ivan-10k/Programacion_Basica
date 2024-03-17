#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // Leer la nota alfanumérica
    char nota;
    cout << "Ingrese la nota alfanumerica (A, B, C, D, E): ";
    cin >> nota;

    // Determinar el rango de notas
    switch (nota) 
    {
        case 'A':
            cout << "Rango de notas: 19 - 18" << endl;
            break;
        case 'B':
            cout << "Rango de notas: 17 - 14" << endl;
            break;
        case 'C':
            cout << "Rango de notas: 14 - 11" << endl;
            break;
        case 'D':
            cout << "Rango de notas: 10 - 5" << endl;
            break;
        case 'E':
            cout << "Rango de notas: 5 - 0" << endl;
            break;
        default:
            cout << "Nota alfanumerica invalida. Debe ser A, B, C, D o E." << endl;
            break;
    }

    return 0;
}
