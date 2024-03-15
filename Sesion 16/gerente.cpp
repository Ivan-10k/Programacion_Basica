#include <iostream>
#include <string>
#include "empleado.cpp"
using namespace std;

class Gerente : public Empleado
{
private:
    /* data */
    double bono;

public:
    Gerente(/* args */);

    Gerente(double _bono, string _codigo, float _chh, string _codigo_persona, string _apellidos, string _nombre, string _direccion) : Empleado(_codigo, _chh, _codigo_persona, _apellidos, _nombre, _direccion)
    {
        bono = _bono;
    }

    double GetBono() const
    {
        return bono;
    }

    void SetBono(double _bono)
    {
        bono = _bono;
    }

    void calcular_Salario(float _total_horas_laboradas)
    {
        //total_horas = _total_horas_laboradas + _horas_extra;
        calcularSalario(_total_horas_laboradas);
        double salario_temp = GetSalario() + bono;
        SetSalario(salario_temp);
    }
};
