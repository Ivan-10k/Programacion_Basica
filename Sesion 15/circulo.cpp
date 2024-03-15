#include <iostream>

using namespace std;

class FiguraGeometrica 
{
public:
    virtual double obtenerArea() const = 0;
    virtual double obtenerPerimetro() const = 0;
};

class Circulo : public FiguraGeometrica 
{
private:
    double radio;

public:
    Circulo(double r) : radio(r) {}

    double obtenerArea() const override 
    {
        return 3.14159 * radio * radio;
    }

    double obtenerPerimetro() const override 
    {
        return 2 * 3.14159 * radio;
    }
};

int main() 
{
    
    FiguraGeometrica* miCirculo = new Circulo(8.0);

    cout << "Area del circulo: " << miCirculo->obtenerArea() << endl;
    cout << "Perimetro del circulo: " << miCirculo->obtenerPerimetro() << endl;

    delete miCirculo;

    return 0;
}
