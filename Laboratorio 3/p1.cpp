#include<iostream>

using namespace std;

int main() 
{
    int totalPreguntas = 20;
    int respuestasCorrectas, respuestasIncorrectas, respuestasEnBlanco;

    cout << "Ingrese el número de respuestas correctas: ";
    cin >> respuestasCorrectas;

    cout << "Ingrese el número de respuestas incorrectas: ";
    cin >> respuestasIncorrectas;

    // Calcular el número de respuestas en blanco
    respuestasEnBlanco = totalPreguntas - respuestasCorrectas - respuestasIncorrectas;

    // Calcular el puntaje total
    int puntajeTotal = (respuestasCorrectas * 4) + (respuestasIncorrectas * -2);

    // Mostrar el puntaje total
    cout << "Puntaje total del postulante: " << puntajeTotal << " puntos" << endl;

    return 0;
}
