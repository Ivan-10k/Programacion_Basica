#include <iostream>
#include <vector>

using namespace std;

struct Estudiante 
{
    string nombre;
    int edad;
    int id;
    char sexo;
    int añoNacimiento;
};

int main()
{
    const int MAX_ESTUDIANTES = 5;
    Estudiante estudiantesArray[MAX_ESTUDIANTES];
    vector<Estudiante> estudiantesVector;

    cout << "Ingrese informacion de estudiantes usando array:\n";
    for (int i = 0; i < MAX_ESTUDIANTES; ++i) 
    {
        cout << "Estudiante " << i + 1 << ":\n";
        cout << "Nombre: ";
        cin >> estudiantesArray[i].nombre;

        cout << "Edad: ";
        cin >> estudiantesArray[i].edad;

        cout << "ID: ";
        cin >> estudiantesArray[i].id;

        cout << "Sexo (M/F): ";
        cin >> estudiantesArray[i].sexo;

        cout << "Año de nacimiento: ";
        cin >> estudiantesArray[i].añoNacimiento;

        if (estudiantesArray[i].edad >= 18) 
        {
            cout << "Este estudiante es mayor de edad.\n";
        } else {
            cout << "Este estudiante es menor de edad.\n";
        }
    }

    char opcion;
    do {
        Estudiante nuevoEstudiante;
        cout << "\nIngrese informacion de un estudiante usando vector:\n";
        cout << "Nombre: ";
        cin >> nuevoEstudiante.nombre;
        cout << "Edad: ";
        cin >> nuevoEstudiante.edad;
        cout << "ID: ";
        cin >> nuevoEstudiante.id;
        cout << "Sexo (M/F): ";
        cin >> nuevoEstudiante.sexo;
        cout << "Año de nacimiento: ";
        cin >> nuevoEstudiante.añoNacimiento;

        estudiantesVector.push_back(nuevoEstudiante);

        cout << "\n¿Desea ingresar otro estudiante? (S/N): ";
        cin >> opcion;

    } while (opcion == 'S' || opcion == 's');

    cout << "\nInformacion de estudiantes usando array:\n";
    for (int i = 0; i < MAX_ESTUDIANTES; ++i)
    {
        cout << "Estudiante " << i + 1 << ":\n";
        cout << "Nombre: " << estudiantesArray[i].nombre << "\tEdad: " << estudiantesArray[i].edad
                  << "\tID: " << estudiantesArray[i].id << "\tSexo: " << estudiantesArray[i].sexo
                  << "\tAño de Nacimiento: " << estudiantesArray[i].añoNacimiento << endl;
    }

    // Utilizando un bucle while para mostrar información del vector
    cout << "\nInformacion de estudiantes usando vector:\n";
    for (const auto& estudiante : estudiantesVector) 
    {
        cout << "Nombre: " << estudiante.nombre << "\tEdad: " << estudiante.edad
                  << "\tID: " << estudiante.id << "\tSexo: " << estudiante.sexo
                  << "\tAño de Nacimiento: " << estudiante.añoNacimiento << endl;
    }

    return 0;
}
