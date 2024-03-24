#include <iostream>
#include <string>
using namespace std;

class Asistencias 
{
private:
    bool asistio;
    bool falto;
    string justificacion;
    
public:
    // Constructor
    Asistencias(bool asistio, bool falto, const string& justificacion)
        : asistio(asistio), falto(falto), justificacion(justificacion) {}
    // Métodos getter y setter para el atributo asistio
    bool getAsistio() const 
    {
        return asistio;
    }
    void setAsistio(bool nuevoAsistio) 
    {
        asistio = nuevoAsistio;
    }
    // Métodos getter y setter para el atributo falto
    bool getFalto() const 
    {
        return falto;
    }
    void setFalto(bool nuevoFalto) 
    {
        falto = nuevoFalto;
    }
    // Métodos getter y setter para el atributo justificacion
    string getJustificacion() const 
    {
        return justificacion;
    }
    void setJustificacion(const string& nuevaJustificacion) 
    {
        justificacion = nuevaJustificacion;
    }
};