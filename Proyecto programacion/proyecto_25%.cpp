#include <iostream>
#include <vector>
#include <limits>
using namespace std;

class Estudiante 
{
    public:
    Estudiante() {}

    // Método para ingresar la información del estudiante
    void ingresarInformacion() 
    {
        cout << "Ingrese el nombre del estudiante: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, nombre);

        cout << "Ingrese la edad del estudiante: ";
        while (!(cin >> edad) || edad < 0) 
        {
            cout << "Entrada no valida. Ingrese un valor entero positivo para la edad: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Ingrese el ID del estudiante: ";
        while (!(cin >> id) || id < 0) 
        {
            cout << "Entrada no valida. Ingrese un valor entero positivo para el ID: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Ingrese el sexo del estudiante (M/F): ";
        while (!(cin >> sexo) || (sexo != 'M' && sexo != 'F')) 
        {
            cout << "Entrada no valida. Ingrese 'M' para masculino o 'F' para femenino: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Ingrese el año de nacimiento del estudiante: ";
        while (!(cin >> añoNacimiento) || añoNacimiento < 0) 
        {
            cout << "Entrada no valida. Ingrese un valor entero positivo para el año de nacimiento: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    // Método para mostrar la información del estudiante
    void mostrarInformacion() const {
        cout << "\nInformaciOn del estudiante:\n";
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "ID: " << id << endl;
        cout << "Sexo: " << sexo << endl;
        cout << "Año de nacimiento: " << añoNacimiento << endl;
    }

    string obtenerNombre() const 
    {
        return nombre;
    }

    int obtenerID() const 
    {
        return id;
    }

private:
    string nombre;
    int edad;
    int id;
    char sexo;
    int añoNacimiento;
};

// Función para mostrar el menú 
void mostrarMenu() 
{
    cout << "\nMenu de opciones:\n";
    cout << "1. Agregar estudiante\n";
    cout << "2. Mostrar lista de estudiantes\n";
    cout << "3. Salir\n";
    cout << "Seleccione una opcion: ";
}

int main() 
{
    vector<Estudiante> estudiantes;

    char opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) 
        {
            case '1':
                {
                    Estudiante nuevoEstudiante;
                    nuevoEstudiante.ingresarInformacion();
                    estudiantes.push_back(nuevoEstudiante);
                    cout << "\nEstudiante agregado exitosamente.\n";
                }
                break;
            case '2':
                if (estudiantes.empty()) 
                {
                    cout << "\nNo hay estudiantes registrados.\n";
                } else 
                {
                    cout << "\nLista de estudiantes:\n";
                    for (const auto& estudiante : estudiantes) 
                    {
                        estudiante.mostrarInformacion();
                    }
                }
                break;
            case '3':
                cout << "\nSaliendo del programa.\n";
                break;
            default:
                cout << "\nOpción no valida. Por favor, seleccione una opcion valida.\n";
        }

    } while (opcion != '3');

    return 0;
}
