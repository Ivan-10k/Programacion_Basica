#include <iostream>
#include <string>
using namespace std;

class Persona 
{
private:
    string nombre;
    string apellido;
public:
    // Constructor
    Persona(const string& nombre, const string& apellido) : nombre(nombre), apellido(apellido) {}
    // Métodos getter y setter para el atributo nombre
    string getNombre() const 
    {
        return nombre;
    }
    void setNombre(const string& nuevoNombre) 
    {
        nombre = nuevoNombre;
    }
    // Métodos getter y setter para el atributo apellido
    string getApellido() const 
    {
        return apellido;
    }
    void setApellido(const string& nuevoApellido) 
    {
        apellido = nuevoApellido;
    }
};
