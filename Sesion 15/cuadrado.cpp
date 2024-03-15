#include <iostream>

using namespace std;

class FiguraGeometrica 
{
public:
    virtual double obtenerArea() const = 0;
    virtual double obtenerPerimetro() const = 0;
};

class Cuadrado : public FiguraGeometrica 
{
private:
    double lado;

public:
    Cuadrado(double l) : lado(l) {}

    double obtenerArea() const override 
    
    {
        return lado * lado;
    }

    double obtenerPerimetro() const override 
    {
        return 4 * lado;
    }

};

int main() 
{
    Cuadrado miCuadrado(5.0);

    cout << "Area del cuadrado: " << miCuadrado.obtenerArea() << endl;
    cout << "Perimetro del cuadrado: " << miCuadrado.obtenerPerimetro() << endl;

    return 0;
}
