#include <iostream>

using namespace std;

char obtenercalificaciones (int nota)
{
    if (nota >= 18) {
        return 'A';
    } else if (nota >= 15) 
    {
        return 'B';
    } else if (nota >= 10) 
    {
        return 'C';
    } else {
        return 'F';
    }
}
int main() 
{
    srand(time(0));

    int nota[6]

    cout <<"Ingrese 6 notas aleatorias en el rango de 0 a 20:" << endl;
    for (int i = 0; i < 6; ++i)
    {
        notas[i] = rand() % 21;

        cout << "Nota " << (i + 1) << ": " << notas[i] << endl;
    }

    cout <<"Notas y sus equivalentes en letras:" << endl;
    for (int i = 0; i < 6; ++i) 
    {
        char calificacion = obtenerCalificaciones(notas[i]);
        cout << "Nota " << (i + 1) << ": " << notas[i] << " - Calificación: " << calificacion << endl;
    }

    return 0;
}
