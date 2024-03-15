#include <iostream>

using namespace std;

class FiguraGeometrica 
{
public:
    virtual double obtenerArea() const = 0;
    virtual double obtenerPerimetro() const = 0;
};

class Rectangulo : public FiguraGeometrica 
{
private:
    double base;
    double altura;

public:
    Rectangulo(double b, double h) : base(b), altura(h) {}

    double obtenerArea() const override 
    {
        return base * altura;
    }

    double obtenerPerimetro() const override 
    {
        return 2 * (base + altura);
    }
};

int main() 
{
    Rectangulo miRectangulo(4.0, 3.0);

    cout << "Area del rectangulo: " << miRectangulo.obtenerArea() << endl;
    cout << "Perimetro del rectangulo: " << miRectangulo.obtenerPerimetro() << endl;

    return 0;
}
