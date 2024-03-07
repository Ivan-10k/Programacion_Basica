#include <iostream>
#include <string>

using namespace std;

class Persona 
{
public:
    string nombres;
    string apellidos;
    string departamento;
    string direccion;
    double salario;

    Persona(string nombres, string apellidos, string departamento, string direccion, double salario)
        : nombres(nombres), apellidos(apellidos), departamento(departamento), direccion(direccion), salario(salario) {}

    virtual void calcularSalario() = 0;
    virtual void mostrarDatos() = 0;
};

class Ingeniero : public Persona 
{
public:
    Ingeniero(string nombres, string apellidos, string direccion)
        : Persona(nombres, apellidos, "Ingenieria", direccion, 0) {}

    void calcularSalario() override 
    {
        salario = 2000 + 14 * 20;  // Salario base + 14 horas extras
    }

    void mostrarDatos() override 
    {
        cout << "Ingeniero: " << apellidos << ", " << nombres << endl;
        cout << "Departamento: " << departamento << endl;
        cout << "Direccion: " << direccion << endl;
        cout << "Salario Final: " << salario << endl << endl;
    }
};

class Gerente : public Persona 
{
public:
    Gerente(string nombres, string apellidos, string direccion)
        : Persona(nombres, apellidos, "Gerencia", direccion, 0) {}

    void calcularSalario() override 
    {
        salario = 3500;  // Salario base + bono
    }

    void cambiarBono(double nuevoBono) 
    {
        salario = 2000 + nuevoBono;  // Salario base + nuevo bono
    }

    void mostrarDatos() override 
    {
        cout << "Gerente: " << apellidos << ", " << nombres << endl;
        cout << "Departamento: " << departamento << endl;
        cout << "Direccion: " << direccion << endl;
        cout << "Salario Final: " << salario << endl << endl;
    }
};

int main() 
{
    Ingeniero ingenieros[4] = 
    {
        Ingeniero("Juan", "Perez", "123 Calle A"),
        Ingeniero("Maria", "Gomez", "456 Calle B"),
        Ingeniero("Carlos", "Lopez", "789 Calle C"),
        Ingeniero("Ana", "Rodriguez", "012 Calle D")
    };

    Gerente gerente("Luis", "Martinez", "345 Calle E");

    // Calcular salario
    for (int i = 0; i < 4; ++i) 
    {
        ingenieros[i].calcularSalario();
    }
    gerente.calcularSalario();

    // Mostrar datos y salario de ingenieros
    for (int i = 0; i < 4; ++i) 
    {
        ingenieros[i].mostrarDatos();
    }

    // Mostrar datos y salario del gerente
    gerente.mostrarDatos();

    // Cambiar el bono del gerente
    gerente.cambiarBono(2500);

    // Mostrar datos y salario actualizado del gerente
    gerente.mostrarDatos();

    return 0;
}
