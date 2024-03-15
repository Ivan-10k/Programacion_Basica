#include <iostream>
#include <string>

using namespace std;

struct Persona 
{
    string nombre;
    int anoNacimiento;
    int edad;
};

int calcularEdad(int anoActual, int anoNacimiento) 
{
    return anoActual - anoNacimiento;
}

// Esta Función es para comparar edades y determinar quién es mayor
string determinarMayor(Persona personas[]) 
{
    if (personas[0].edad > personas[1].edad && personas[0].edad > personas[2].edad) 
    {
        return personas[0].nombre;
    } else if (personas[1].edad > personas[2].edad) 
    {
        return personas[1].nombre;
    } else {
        return personas[2].nombre;
    }
}

int main()
{ 
    int anoActual;
    cout << "Ingrese el año actual: ";
    cin >> anoActual;

    Persona personas[3];

    // Para registrar información de las personas
    for (int i = 0; i < 3; ++i) 
    {
        cout << "Ingrese el nombre de la persona " << i+1 << ": ";
        cin >> personas[i].nombre;

        cout << "Ingrese el año de nacimiento de la persona " << i+1 << ": ";
        cin >> personas[i].anoNacimiento;

        personas[i].edad = calcularEdad(anoActual, personas[i].anoNacimiento);
    }

    // Para Mostrar la información de las personas
    for (int i = 0; i < 3; ++i) 
    {
        cout << personas[i].nombre << " tiene " << personas[i].edad << " años." << endl;
    }

    // Para determinar quién es mayor 
    string personaMayor = determinarMayor(personas);

    cout << "La persona mayor es: " << personaMayor << endl;

    return 0;
}
