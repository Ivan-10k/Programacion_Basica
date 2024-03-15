#include <iostream>
#include <string>
#include "persona.cpp"
using namespace std;

class Empleado : public Persona
{
private:
    /* data */
    string codigo;
    float costo_hh;
    string departamento;
    double salario;

public:
    Empleado();
    Empleado(string _codigo, float _chh, string _codigo_persona, string _apellidos, string _nombre, string _direccion) : Persona(_codigo_persona, _apellidos, _nombre, _direccion)
    {
        codigo = _codigo;
        costo_hh = _chh;
    }

    string GetCodigo() const
    {
        return codigo;
    }

    void SetCodigo(string codigo)
    {
        codigo = codigo;
    }

    float GetCosto_hh() const
    {
        return costo_hh;
    }

    void SetCosto_hh(float costo_hh)
    {
        costo_hh = costo_hh;
    }

    string GetDepartamento() const
    {
        return departamento;
    }

    void SetDepartamento(string departamento)
    {
        departamento = departamento;
    }

    double GetSalario() const
    {
        return salario;
    }

    void calcularSalario(float total_horas)
    {
        salario = costo_hh * total_horas;
    }

    void SetSalario(double _salario)
    {
        salario = _salario;
    }

    // ya que existe una herencia para gerente e ingeniero
    // creamos el metodo para mostrar la informacion
    void MostrarDatos()
    {
        cout << GetApellidos() << " , " << GetNombre() << departamento << " salario: " << salario;
    }
};
