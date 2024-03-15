#include <iostream>
#include <string>
using namespace std;

struct Vehiculo 
{
    string color;
    int velocidadMaxima;
    int cantidadPasajeros;
};

int main() 
{
    const int numVehiculos = 5;
    Vehiculo vehiculos[numVehiculos];

    // Registro de vehículos
    for (int i = 0; i < numVehiculos; ++i)
    {
        cout << "Ingrese informacion para el vehiculo " << i + 1 << ":\n";

        cout << "Color: ";
        cin >> vehiculos[i].color;

        cout << "Velocidad Maxima: ";
        cin >> vehiculos[i].velocidadMaxima;

        cout << "Cantidad de Pasajeros: ";
        cin >> vehiculos[i].cantidadPasajeros;

        cout << "\n";
    }

    
    int indiceModificar;
    cout << "Ingrese el indice del vehiculo a modificar (1-" << numVehiculos << "): ";
    cin >> indiceModificar;

    if (indiceModificar >= 1 && indiceModificar <= numVehiculos) 
    {
        --indiceModificar;

        cout << "Ingrese nuevas caracteristicas para el vehiculo " << indiceModificar + 1 << ":\n";

        cout << "Nuevo Color: ";
        cin >> vehiculos[indiceModificar].color;

        cout << "Nueva Velocidad Maxima: ";
        cin >> vehiculos[indiceModificar].velocidadMaxima;

        cout << "Nueva Cantidad de Pasajeros: ";
        cin >> vehiculos[indiceModificar].cantidadPasajeros;

        cout << "\n";

        cout << "Informacion actualizada del vehiculo " << indiceModificar + 1 << ":\n";
        cout << "Color: " << vehiculos[indiceModificar].color << "\n";
        cout << "Velocidad Maxima: " << vehiculos[indiceModificar].velocidadMaxima << "\n";
        cout << "Cantidad de Pasajeros: " << vehiculos[indiceModificar].cantidadPasajeros << "\n";
    } else
    {
        cout << "Índice inválido.\n";
    }

    return 0;
}
