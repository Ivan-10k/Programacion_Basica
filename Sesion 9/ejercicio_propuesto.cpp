/**
 * Crear un aplicativo que calcule si un alumno
 * es mayor de edad
 * calcule el promedio de sus tres notas
 * y determine si aprobo
 */

#include <iostream>
#include <string>
using namespace std;

// definimos nuestra estructura
struct Alumno
{
    string nombre;
    string apellido;
    int edad;
    float nota[3];
    float promedio;
    /* data */
};

float cal_promedio(float nota_1, float nota_2, float nota_3)
{
    return (nota_1 + nota_2 + nota_3) / 3;
}

float cal_promedio(float notas[3])
{
    float result = 0;
    for (int i = 0; i < 3; i++)
    {
        result += notas[i];
    }
    return result / 3;
}

void calc_mayoria(int edad)
{
    if (edad > 18)
    {
        cout << "Mayor de edad";
    }
    else
    {
        cout << "Menor de edad";
    }
}

void deter_aprobado(float promedio)
{
    if (promedio < 11)
    {
        cout << "desaprobo";
    }
    else
    {
        cout << "aprobo";
    }
}

float* ingresar_notas()
{
    float notas[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "ingresar la nota " << i + 1 << endl;
        cin >> notas[i];
    }
    return notas;
}

Alumno* registrar_Alumno(){
    Alumno alumnos[3]; //= new Alumno[3];
    //bucle para ingresar los valores del alumno
    for(int i=0; i<3; i++){
        cout<<"Ingrese el nombre del alumno";
        cin>> alumnos[i].nombre;
        cout<<"Ingrese la edad del alumno";
        cin>>alumnos[i].edad;
        alumnos[i].nota = ingresar_notas();
    }
}
