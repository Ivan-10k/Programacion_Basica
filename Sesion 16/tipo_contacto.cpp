#include <iostream>
#include <string>
using namespace std;

class TipoContacto
{
private:
    int id_tipo;
    string correo;
    string telefono;

public:
    TipoContacto(/* args */)
    {
        
    }
    TipoContacto(int _id, string _correo, string _telefono)
    {
        id_tipo = _id;
        correo = _correo;
        telefono = _telefono;
    }

    int GetId_tipo() const
    {
        return id_tipo;
    }

    void SetId_tipo(int id_tipo)
    {
        id_tipo = id_tipo;
    }

    string GetCorreo() const
    {
        return correo;
    }

    void SetCorreo(string correo)
    {
        correo = correo;
    }

    string GetTelefono() const
    {
        return telefono;
    }

    void SetTelefono(string telefono)
    {
        telefono = telefono;
    }
};
