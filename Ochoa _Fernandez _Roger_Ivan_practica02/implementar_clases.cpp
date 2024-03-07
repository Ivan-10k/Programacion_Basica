#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Clase base Persona
class Persona 
{
private:
    string nombres;
    string apellidos;
    string direccion;
    string: tipoContacto;

public:
    // Constructor
    Persona(string nombres, string apellidos, string direccion, string tipoContacto)
        : nombres(nombres), apellidos(apellidos), direccion(direccion), tipoContacto(tipoContacto) {}

    // Getter y Setter para nombres
    string getNombres() const 
    {
        return nombres;
    }

    void setNombres(const string& nuevosNombres) 
    {
        nombres = nuevosNombres;
    }

    // Getter y Setter para apellidos
    string getApellidos() const 
    {
        return apellidos;
    }

    void setApellidos(const string& nuevosApellidos) 
    {
        apellidos = nuevosApellidos;
    }

    // Getter y Setter para dirección
    string getDireccion() const {
        return direccion;
    }

    void setDireccion(const string& nuevaDireccion) 
    {
        direccion = nuevaDireccion;
    }

    // Getter y Setter para tipoContacto
    string getTipoContacto() const 
    {
        return tipoContacto;
    }

    void setTipoContacto(const string& nuevoTipoContacto)
    {
        tipoContacto = nuevoTipoContacto;
    }

    // Método virtual puro para mostrar datos
    virtual void mostrarDatos() const = 0;
};

// Clase Empleado, derivada de Persona
class Empleado : public Persona 
{
private:
    int codigo;
    double costo;
    double salario;
    string departamentoCodigo;
    string nombreDepartamento;

public:
    // Constructor
    Empleado(string nombres, string apellidos, string direccion, string tipoContacto,
             int codigo, double costo, double salario, string departamentoCodigo, string nombreDepartamento)
        : Persona(nombres, apellidos, direccion, tipoContacto),
          codigo(codigo), costo(costo), salario(salario),
          departamentoCodigo(departamentoCodigo), nombreDepartamento(nombreDepartamento) {}

    // Getter y Setter para código
    int getCodigo() const
    {
        return codigo;
    }

    void setCodigo(int nuevoCodigo) 
    {
        codigo = nuevoCodigo;
    }

    // Getter y Setter para costo
    double getCosto() const 
    {
        return costo;
    }

    void setCosto(double nuevoCosto) 
    {
        costo = nuevoCosto;
    }

    // Getter y Setter para salario
    double getSalario() const 
    {
        return salario;
    }

    void setSalario(double nuevoSalario)
    {
        salario = nuevoSalario;
    }

    // Getter y Setter para departamentoCodigo
    string getDepartamentoCodigo() const 
    {
        return departamentoCodigo;
    }

    void setDepartamentoCodigo(const string& nuevoDepartamentoCodigo) 
    {
        departamentoCodigo = nuevoDepartamentoCodigo;
    }

    // Getter y Setter para nombreDepartamento
    string getNombreDepartamento() const 
    {
        return nombreDepartamento;
    }

    void setNombreDepartamento(const string& nuevoNombreDepartamento) 
    {
        nombreDepartamento = nuevoNombreDepartamento;
    }

    // Implementación de mostrarDatos para Empleado
    void mostrarDatos() const override 
    {
        cout << "Empleado:" << endl;
        cout << "Nombres: " << getNombres() << endl;
        cout << "Apellidos: " << getApellidos() << endl;
        cout << "Dirección: " << getDireccion() << endl;
        cout << "Tipo de Contacto: " << getTipoContacto() << endl;
        cout << "Código: " << getCodigo() << endl;
        cout << "Costo: " << getCosto() << endl;
        cout << "Salario: " << getSalario() << endl;
        cout << "Departamento: " << getNombreDepartamento() << " (Código: " << getDepartamentoCodigo() << ")" << endl;
    }
};

// Clase Ingeniero, derivada de Empleado
class Ingeniero : public Empleado 
{
public:
    // Constructor
    Ingeniero(string nombres, string apellidos, string direccion)
        : Empleado(nombres, apellidos, direccion, "Correo", 1010, 1000, 2280, "ING", "Ingeniería") {}

    // Implementación de mostrarDatos para Ingeniero
    void mostrarDatos() const override 
    {
        cout << "Ingeniero:" << endl;
        Empleado::mostrarDatos();
    }
};

// Clase Gerente, derivada de Empleado
class Gerente : public Empleado
{
public:
    // Constructor
    Gerente(string nombres, string apellidos, string direccion)
        : Empleado(nombres, apellidos, direccion, "Teléfono", 1, 1000, 3500, "GER", "Gerencia") {}

    // Implementación de mostrarDatos para Gerente
    void mostrarDatos() const override 
    {
        cout << "Gerente:" << endl;
        Empleado::mostrarDatos();
    }
};

int main() 
{
    vector<Persona*> personas;

    personas.push_back(new Ingeniero("Juan", "Perez", "123 Calle A"));
    personas.push_back(new Ingeniero("Maria", "Gomez", "456 Calle B"));
    personas.push_back(new Ingeniero("Carlos", "Lopez", "789 Calle C"));
    personas.push_back(new Ingeniero("Ana", "Rodriguez", "012 Calle D"));
    personas.push_back(new Gerente("Luis", "Martinez", "345 Calle E"));

    // Mostrar datos de las personas utilizando polimorfismo
    for (const auto& persona : personas) 
    {
        persona->mostrarDatos();
        std::cout << std::endl;
    }

    // Liberar memoria
    for (auto& persona : personas) 
    {
        delete persona;
    }

    return 0;
}
