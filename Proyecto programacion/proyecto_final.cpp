/*Este programa implementa un sistema de gestión escolar que permite
registrar información detallada sobre estudiantes, asistencias,
y el horario de clases de un colegio. Utilizando programación orientada a 
objetos en C++, se han definido clases para representar personas (estudiantes),
asistencias a clases, horarios y la institución escolar en sí misma.
El programa permite al usuario agregar múltiples estudiantes junto con
su información personal y asistencia a clases. Además, se pueden 
especificar los cursos y horarios de clase. Posteriormente, los detalles
de los estudiantes, sus asistencias y la información del colegio se guardan en 
un archivo de texto,facilitando la consulta y gestión de la información.*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Definición de la clase Persona
class Persona 
{
protected:
    string nombre;
    string apellido;

public:
    Persona(const string& nombre, const string& apellido) : nombre(nombre), apellido(apellido) {}

    string getNombre() const { return nombre; }
    void setNombre(const string& nombre) { this->nombre = nombre; }

    string getApellido() const { return apellido; }
    void setApellido(const string& apellido) { this->apellido = apellido; }
};

// Definición de la clase Estudiante, que hereda de Persona
class Estudiante : public Persona 
{
private:
    string dni;
    int edad;
    char sexo;
    int numeroId;

public:
    Estudiante(const string& nombre, const string& apellido, const string& dni, int edad, char sexo, int numeroId)
        : Persona(nombre, apellido), dni(dni), edad(edad), sexo(sexo), numeroId(numeroId) {}

    string getDni() const { return dni; }
    void setDni(const string& dni) { this->dni = dni; }

    int getEdad() const { return edad; }
    void setEdad(int edad) { this->edad = edad; }

    char getSexo() const { return sexo; }
    void setSexo(char sexo) { this->sexo = sexo; }

    int getNumeroId() const { return numeroId; }
    void setNumeroId(int numeroId) { this->numeroId = numeroId; }
};

// Definición de la clase Asistencias
class Asistencias 
{
private:
    bool asistio;
    bool falto;
    string justificacion;

public:
    Asistencias(bool asistio, bool falto, const string& justificacion)
        : asistio(asistio), falto(falto), justificacion(justificacion) {}

    bool getAsistio() const { return asistio; }
    void setAsistio(bool nuevoAsistio) { asistio = nuevoAsistio; }

    bool getFalto() const { return falto; }
    void setFalto(bool nuevoFalto) { falto = nuevoFalto; }

    string getJustificacion() const { return justificacion; }
    void setJustificacion(const string& nuevaJustificacion) { justificacion = nuevaJustificacion; }
};

// Definición de la clase Horario
class Horario 
{
private:
    string hora;
    vector<string> cursos;

public:
    Horario(const string& hora) : hora(hora) {}

    string getHora() const { return hora; }
    void setHora(const string& nuevaHora) { hora = nuevaHora; }

    void agregarCurso(const string& curso) { cursos.push_back(curso); }

    vector<string> getCursos() const { return cursos; }
};

// Definición de la clase Colegio
class Colegio 
{
private:
    string nombreColegio;
    string direccion;
    vector<Estudiante> estudiantes;
    Horario horario;
    vector<Asistencias> asistencias;

public:
    Colegio(const string& nombreColegio, const string& direccion, const Horario& horario)
        : nombreColegio(nombreColegio), direccion(direccion), horario(horario) {}

    // Métodos getter y setter para los atributos
    string getNombreColegio() const { return nombreColegio; }
    void setNombreColegio(const string& nombreColegio) { this->nombreColegio = nombreColegio; }

    string getDireccion() const { return direccion; }
    void setDireccion(const string& direccion) { this->direccion = direccion; }

    Horario getHorario() const { return horario; }
    void setHorario(const Horario& horario) { this->horario = horario; }

    vector<Estudiante> getEstudiantes() const { return estudiantes; }
    void agregarEstudiante(const Estudiante& estudiante) { estudiantes.push_back(estudiante); }

    vector<Asistencias> getAsistencias() const { return asistencias; }
    void agregarAsistencias(const Asistencias& asistencias) { this->asistencias.push_back(asistencias); }

    // Método para guardar los detalles en un archivo de texto
    void guardarDetallesEnArchivo() 
    {
        ofstream archivo("datos_colegio.txt");
        if (archivo.is_open()) 
        {
            archivo << "***************************\n";
            archivo << "*    Datos del Colegio    *\n";
            archivo << "***************************\n";
            archivo << "Nombre del colegio: " << nombreColegio << endl;
            archivo << "Dirección: " << direccion << endl;
            archivo << "---------------------------\n";
            archivo << "***************************\n";
            archivo << "*    Horario de Clases  *\n";
            archivo << "***************************\n";
            archivo << "Horario de clases: " << horario.getHora() << endl;
            archivo << "Cursos: ";
            vector<string> cursos = horario.getCursos();
            for (size_t i = 0; i < cursos.size(); ++i) 
            {
                archivo << cursos[i];
                if (i != cursos.size() - 1) 
                    {
                    archivo << " - ";
                    }
            }

            // Detalles de los estudiantes
            archivo << "\n***************************\n";
            archivo << "*     Lista de Estudiantes     *\n";
            archivo << "***************************\n";
            for (size_t i = 0; i < estudiantes.size(); ++i) {
                archivo << "Estudiante " << i + 1 << ":\n";
                archivo << "Nombre: " << estudiantes[i].getNombre() << endl;
                archivo << "Apellido: " << estudiantes[i].getApellido() << endl;
                archivo << "DNI: " << estudiantes[i].getDni() << endl;
                archivo << "Edad: " << estudiantes[i].getEdad() << endl;
                archivo << "Sexo: " << estudiantes[i].getSexo() << endl;
                archivo << "Número de ID: " << estudiantes[i].getNumeroId() << endl;
                archivo << "Asistencia:\n";
                archivo << "Asistio: " << (asistencias[i].getAsistio() ? "Sí" : "No") << endl;
                archivo << "Falto: " << (asistencias[i].getFalto() ? "Sí" : "No") << endl;
                archivo << "Justificación: " << asistencias[i].getJustificacion() << endl;
                archivo << "*---------------------------*\n";
            }

            archivo.close();
            cout << "Los datos se han guardado en el archivo 'datos_colegio.txt'." << endl;
        } else 
        {
            cout << "Error al abrir el archivo." << endl;
        }
    }
};

int main() 
{
    // Crear horario
    Horario horario("08:00 - 10:00");
    horario.agregarCurso("Matemática");
    horario.agregarCurso("Química");
    
    // Crear colegio
    Colegio colegio("Colegio 0729", "Calle Principal 123", horario);

    // Agregar estudiantes y asistencias
    colegio.agregarEstudiante(Estudiante("Juan", "Perez", "12345678", 18, 'M', 1001));
    colegio.agregarAsistencias(Asistencias(true, false," "));

    colegio.agregarEstudiante(Estudiante("María", "Gomez", "98765432", 17, 'F', 1002));
    colegio.agregarAsistencias(Asistencias(false, true,"El estudiante se enfermó."));

    colegio.agregarEstudiante(Estudiante("Ivan", "Ochoa", "15427891", 19, 'M', 1003));
    colegio.agregarAsistencias(Asistencias(true, false," "));

    colegio.agregarEstudiante(Estudiante("Anayely", "Masgo", "56127349", 19, 'F', 1004));
    colegio.agregarAsistencias(Asistencias(true, false," "));

    colegio.agregarEstudiante(Estudiante("Lucas", "Hernandez", "15427891", 18, 'M', 1005));
    colegio.agregarAsistencias(Asistencias(false, true,"El estudiante no pudo asistir por las fuertes lluvias "));

   // Guardar los detalles del colegio en un archivo
    colegio.guardarDetallesEnArchivo();

    return 0;
}
