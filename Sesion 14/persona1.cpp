#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Persona 
{
private:
    int id;
    string apellidos;
    string nombre;
    string DNI;
    string direccion;

public:
    // Constructor
    Persona(int i, const string& ap, const string& n, const string& dni, const string& dir)
        : id(i), apellidos(ap), nombre(n), DNI(dni), direccion(dir) {}

    // Getter y Setter para id
    int getId() const 
    {
        return id;
    }

    void setId(int i) 
    {
        id = i;
    }

    // Getter y Setter para apellidos
    const string& getApellidos() const 
    {
        return apellidos;
    }

    void setApellidos(const string& ap) 
    {
        apellidos = ap;
    }

    // Getter y Setter para nombre
    const string& getNombre() const 
    {
        return nombre;
    }

    void setNombre(const string& n) 
    {
        nombre = n;
    }

    // Getter y Setter para DNI
    const string& getDNI() const 
    {
        return DNI;
    }

    void setDNI(const string& dni) 
    {
        DNI = dni;
    }

    // Getter y Setter para direccion
    const string& getDireccion() const 
    {
        return direccion;
    }

    void setDireccion(const string& dir) 
    {
        direccion = dir;
    }
};

int main() 
{
    // Crear un objeto de la clase Persona
    Persona miPersona(1, "Gómez", "Juan", "12345678A", "Calle Principal, 123");

    // Acceder a los atributos usando los getters
    cout << "ID: " << miPersona.getId() << endl;
    cout << "Apellidos: " << miPersona.getApellidos() << endl;
    cout << "Nombre: " << miPersona.getNombre() << endl;
    cout << "DNI: " << miPersona.getDNI() << endl;
    cout << "Direccion: " << miPersona.getDireccion() << endl;

    // Modificar atributos usando setters
    miPersona.setDireccion("Avenida Secundaria, 456");
    miPersona.setDNI("87654321B");

    // Mostrar los nuevos valores
    cout << "\nValores modificados:" << endl;
    cout << "DNI: " << miPersona.getDNI() << endl;
    cout << "Dirección: " << miPersona.getDireccion() << endl;

    return 0;
}
