#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Colegio 
{
private:
    string nombreColegio;
    string direccion;
    Estudiante estudiante;
    Horario horario;
    Asistencias asistencia;

public:
    Colegio(const string& nombreColegio, const string& direccion, const Estudiante& estudiante, const Horario& horario, const Asistencias& asistencia)
        : nombreColegio(nombreColegio), direccion(direccion), estudiante(estudiante), horario(horario), asistencia(asistencia) {}

    // Métodos getter y setter para el atributo nombreColegio
    string getNombreColegio() const 
    {
        return nombreColegio;
    }
    void setNombreColegio(const string& nuevoNombreColegio) 
    {
        nombreColegio = nuevoNombreColegio;
    }
    // Métodos getter y setter para el atributo direccion
    string getDireccion() const 
    {
        return direccion;
    }
    void setDireccion(const string& nuevaDireccion) 
    {
        direccion = nuevaDireccion;
    }
    // Métodos getter y setter para el atributo estudiante
    Estudiante getEstudiante() const 
    {
        return estudiante;
    }
    void setEstudiante(const Estudiante& nuevoEstudiante) 
    {
        estudiante = nuevoEstudiante;
    }
    // Métodos getter y setter para el atributo horario
    Horario getHorario() const 
    {
        return horario;
    }
    void setHorario(const Horario& nuevoHorario) 
    {
        horario = nuevoHorario;
    }
    // Métodos getter y setter para el atributo asistencia
    Asistencias getAsistencia() const 
    {
        return asistencia;
    }
    void setAsistencia(const Asistencias& nuevaAsistencia) 
    {
        asistencia = nuevaAsistencia;
    }
};
