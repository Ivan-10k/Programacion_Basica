#include<iostream>

using namespace std;

int main() 
{
    const int totalPartidos = 20;
    int partidosGanados = 0, partidosEmpatados = 0, partidosPerdidos = 0;

    // Ingresar el número de partidos ganados
    cout << "Ingrese el número de partidos ganados: ";
    cin >> partidosGanados;

    // Ingresar el número de partidos empatados
    cout << "Ingrese el número de partidos empatados: ";
    cin >> partidosEmpatados;

    // Calcular el número de partidos perdidos
    partidosPerdidos = totalPartidos - partidosGanados - partidosEmpatados;

    // Calcular el puntaje total
    int puntajeTotal = (partidosGanados * 3) + partidosEmpatados;

    // Mostrar el puntaje total
    cout << "Puntaje total del equipo: " << puntajeTotal << " puntos" << endl;

    return 0;
}
