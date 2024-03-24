#include <iostream>
#include <string>
using namespace std;

class Estudiante 
{
private:
    string nombre;
    string apellido;
    string dni;
    int edad;
    char sexo;
    int numeroId;

public:
    // Constructor
    Estudiante(const string& nombre, const string& apellido, const string& dni, int edad, char sexo, int numeroId) 
        : nombre(nombre), apellido(apellido), dni(dni), edad(edad), sexo(sexo), numeroId(numeroId) {}
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
    // Métodos getter y setter para el atributo dni
    string getDni() const 
    {
        return dni;
    }
    void setDni(const string& nuevoDni) 
    {
        dni = nuevoDni;
    }
    // Métodos getter y setter para el atributo edad
    int getEdad() const 
    {
        return edad;
    }
    void setEdad(int nuevaEdad) 
    {
        edad = nuevaEdad;
    }
    // Métodos getter y setter para el atributo sexo
    char getSexo() const 
    {
        return sexo;
    }
    void setSexo(char nuevoSexo) 
    {
        sexo = nuevoSexo;
    }
    // Métodos getter y setter para el atributo numeroId
    int getNumeroId() const 
    {
        return numeroId;
    }
    void setNumeroId(int nuevoNumeroId) 
    {
        numeroId = nuevoNumeroId;
    }
};
