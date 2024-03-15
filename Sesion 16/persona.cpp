#include <iostream>
#include <string>
#include "tipo_contacto.cpp"
using namespace std;

class Persona
{
private:
    string codigo;
    string apellidos;
    string nombre;
    string direccion;
    TipoContacto tipo;

public:
    Persona()
    {
    }
    Persona(string _codigo, string _apellidos, string _nombre, string _direccion)
    {
        codigo = _codigo;
        apellidos = _apellidos;
        nombre = _nombre;
        direccion = _direccion;
        // tipo = _tipo;
    }
    string GetCodigo() const
    {
        return codigo;
    }

    void SetCodigo(string codigo)
    {
        codigo = codigo;
    }

    string GetApellidos() const
    {
        return apellidos;
    }

    void SetApellidos(string apellidos)
    {
        apellidos = apellidos;
    }

    string GetNombre() const
    {
        return nombre;
    }

    void SetNombre(string nombre)
    {
        nombre = nombre;
    }

    string GetDireccion() const
    {
        return direccion;
    }

    void SetDireccion(string direccion)
    {
        direccion = direccion;
    }

    TipoContacto GetTipo() const
    {
        return tipo;
    }

    void SetTipo(TipoContacto tipo)
    {
        tipo = tipo;
    }
};
