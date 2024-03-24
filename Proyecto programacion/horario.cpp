#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Horario 
{
private:
    string hora;
    vector<string> cursos;

public:
    // Constructor
    Horario(const string& hora) : hora(hora) {}
    // Método getter para obtener la hora
    string getHora() const 
    {
        return hora;
    }
    // Método setter para establecer la hora
    void setHora(const string& nuevaHora)
    {
        hora = nuevaHora;
    }
    // Método para agregar un curso al horario
    void agregarCurso(const string& curso) 
    {
        cursos.push_back(curso);
    }
    // Método para obtener la lista de cursos
    vector<string> getCursos() const 
    {
        return cursos;
    }
};
