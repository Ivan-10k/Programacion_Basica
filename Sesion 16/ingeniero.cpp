include <iostream>
#include <string>
#include "empleado.cpp"
using namespace std;

class Ingeniero : public Empleado
{
private:
    /* data */
    float total_horas;
    float horas_estras;

public:
    Ingeniero(/* args */);

    Ingeniero(float _total_horas, string _codigo, float _chh, string _codigo_persona, string _apellidos, string _nombre, string _direccion) : Empleado(_codigo, _chh, _codigo_persona, _apellidos, _nombre, _direccion)
    {
        total_horas = _total_horas;
    }

    float GetTotal_horas() const
    {
        return total_horas;
    }

    void SetTotal_horas(float total_horas)
    {
        total_horas = total_horas;
    }

    float GetHoras_estras() const
    {
        return horas_estras;
    }

    void SetHoras_estras(float horas_estras)
    {
        horas_estras = horas_estras;
    }

    void calcular_Salario(float _horas_extra, float _total_horas_laboradas)
    {
        total_horas = _total_horas_laboradas + _horas_extra;
        calcularSalario(total_horas);
    }
};

class Gerente : public Empleado
{
private:
    /* data */
    float bono;

public:
    Gerente(/* args */);

    Gerente(float _bono, string _codigo, float _chh, string _codigo_persona, string _apellidos, string _nombre, string _direccion) : Empleado(_codigo, _chh, _codigo_persona, _apellidos, _nombre, _direccion)
    {
        bono = _bono;
    }

    float GetBono() const
    {
        return bono;
    }

    void SetBono(float _bono)
    {
        bono = _bono;
    }

    void calcular_Salario(float _total_horas_laboradas)
    {
        // total_horas = _total_horas_laboradas + _horas_extra;
        calcularSalario(_total_horas_laboradas);
        float salario_temp = GetSalario() + bono;
        SetSalario(salario_temp);
    }
};
