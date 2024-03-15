#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

double division(int a, int b)
{
    if (b == 0)
    {
        throw "Error: division por cero";
    }
    return static_cast<double>(a) / b;
}

int main()
{

    int numerador, denominador;
    cout << "Ingrese el numerador" << endl;
    cin >> numerador;
    cout << "Ingrese el denominador" << endl;
    cin >> denominador;

    try
    {
        double resultado = division(numerador, denominador);
        cout << "El resultado de la division es: " << resultado << endl;
    }
    catch (const char *mensaje)
    {
        time_t ahora = time(0);
        tm *ltm = localtime(&ahora);
        string fecha_actual =to_string(ltm->tm_mday) + "/" + to_string(1 + ltm->tm_mon) + "/" + to_string(1900 + ltm->tm_year);
        //cout<<fecha_actual;
        // creamos el fichero para cursos
        ofstream log_errores("C:\\FIIS 2023-2\\Lenguaje de programacion\\proyectos c++\\lenguaje_programacion_2023_2\\session_17\\log_error\\log_error.txt");

        // verificamos si el archivo se abrio correctamente
        if (!log_errores.is_open())
        {
            cout << "Error al abrir el archivo" << endl;
            return 1;
        }
        // realizamos el registro en el fichero
        log_errores << "**Errores al compilar** \n";
        log_errores << "Mensaje: " << mensaje << "--" << fecha_actual << endl;
        log_errores.close();
    }

    return 0;
}

