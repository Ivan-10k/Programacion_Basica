#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definición de la estructura Estudiante
struct Estudiante 
{
    int id;
    string nombres;
    string apellidos;
    int edad;
    char sexo;
    int anoNacimiento;
};

// Clase para el manejo de la lista de estudiantes
class RegistroEstudiantes 
{
private:
    Estudiante* estudiantes;  
    int capacidad;            
    int cantidad;             

public:
    // Constructor
    RegistroEstudiantes(int capacidadInicial) 
    {
        capacidad = capacidadInicial;
        estudiantes = new Estudiante[capacidad];
        cantidad = 0;
    }

    // Destructor
    ~RegistroEstudiantes() 
    {
        delete[] estudiantes;
    }

    // Método para agregar un estudiante al registro
    void agregarEstudiante(Estudiante nuevoEstudiante) 
    {
        if (cantidad < capacidad) 
        {
            estudiantes[cantidad++] = nuevoEstudiante;
            cout << "Estudiante agregado exitosamente." << endl;
        } else 
        {
            cout << "No se puede agregar más estudiantes. Capacidad máxima alcanzada." << endl;
        }
    }

    // Método para mostrar todos los estudiantes registrados
    void mostrarEstudiantes() 
    {
        cout << "Lista de estudiantes:" << endl;
        for (int i = 0; i < cantidad; ++i) 
        {
            cout << "Estudiante " << (i + 1) << ":" << endl;
            cout << "ID: " << estudiantes[i].id << endl;
            cout << "Nombres: " << estudiantes[i].nombres << endl;
            cout << "Apellidos: " << estudiantes[i].apellidos << endl;
            cout << "Edad: " << estudiantes[i].edad << endl;
            cout << "Sexo: " << estudiantes[i].sexo << endl;
            cout << "Año de nacimiento: " << estudiantes[i].anoNacimiento << endl;
            cout << "--------------------------" << endl;
        }
    }
};


int main() 
{
    RegistroEstudiantes registro(5);

    // Agregar algunos estudiantes
    Estudiante estudiante1 = { 01, "Juan", "Perez", 20, 'M', 2004};
    Estudiante estudiante2 = { 02, "Maria", "Gomez", 22, 'F', 2002};
    Estudiante estudiante3 = { 03, "Lucas", "Garcia", 19, 'M', 2005};
    Estudiante estudiante4 = { 04, "Alicia", "Mendez", 19, 'F', 2005};
    Estudiante estudiante5 = { 05, "Carlos", "Martinez", 21, 'M', 2003};

    registro.agregarEstudiante(estudiante1);
    registro.agregarEstudiante(estudiante2);
    registro.agregarEstudiante(estudiante3);
    registro.agregarEstudiante(estudiante4);
    registro.agregarEstudiante(estudiante5);

    // Mostrar la lista de estudiantes
    registro.mostrarEstudiantes();

    return 0;
}
