#include <iostream>
#include <string>
using namespace std;

class Cliente 
{
private:
    string nombre;
    string apellidos;
    string direccion;
    int anoNacimiento;
    string tipoCliente;

public:
    Cliente() {}

    Cliente(string _nombre, string _apellidos, string _direccion, int _anoNacimiento)
       : nombre(_nombre), apellidos(_apellidos), direccion(_direccion), anoNacimiento(_anoNacimiento) 
    {
        calcularTipoCliente();
    }

    string getNombre() const { return nombre; }
    void setNombre(const string& _nombre) { nombre = _nombre; }

    string getApellidos() const { return apellidos; }
    void setApellidos(const string& _apellidos) { apellidos = _apellidos; }

    string getDireccion() const { return direccion; }
    void setDireccion(const string& _direccion) { direccion = _direccion; }

    int getAnoNacimiento() const { return anoNacimiento; }
    void setAnoNacimiento(int _anoNacimiento) 
    {
        anoNacimiento = _anoNacimiento;
        calcularTipoCliente();
    }

    string getTipoCliente() const { return tipoCliente; }

private:
    void calcularTipoCliente() 
    {
        int edad = 2024 - anoNacimiento; 

        if (edad >= 0 && edad <= 10)
            tipoCliente = "Tipo A";
        else if (edad > 10 && edad <= 20)
            tipoCliente = "Tipo B";
        else if (edad > 20 && edad <= 30)
            tipoCliente = "Tipo C";
        else if (edad > 30 && edad <= 40)
            tipoCliente = "Tipo D";
        else if (edad > 40 && edad <= 50)
            tipoCliente = "Tipo E";
        else
            tipoCliente = "No califica";
    }
};

int main()
{
    
    Cliente cliente1("juan luis", "Perez", "Calle 123", 2000);
    
    cout << "Nombre: " << cliente1.getNombre() << endl;
    cout << "Apellidos: " << cliente1.getApellidos() << endl;
    cout << "Direccion: " << cliente1.getDireccion() << endl;
    cout << "Año de Nacimiento: " << cliente1.getAnoNacimiento() << endl;
    cout << "Tipo de Cliente: " << cliente1.getTipoCliente() << endl;

    return 0;
}
