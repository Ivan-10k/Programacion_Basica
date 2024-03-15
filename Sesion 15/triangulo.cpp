#include <iostream>
#include <cmath>

using namespace std;

class FiguraGeometrica 
{
public:
    virtual double obtenerArea() const = 0;
    virtual double obtenerPerimetro() const = 0;
};

class Triangulo : public FiguraGeometrica 
{
private:
    double base;
    double altura;
    double lado1;
    double lado2;
    double lado3;

public:
    Triangulo(double b, double h, double l1, double l2, double l3)
        : base(b), altura(h), lado1(l1), lado2(l2), lado3(l3) {}

    double obtenerArea() const override 
    {
        double s = (lado1 + lado2 + lado3) / 2.0;
        return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
    }

    double obtenerPerimetro() const override 
    {
        return lado1 + lado2 + lado3;
    }
};

int main() 
{
    
    Triangulo miTriangulo(4.0, 3.0, 5.0, 4.0, 3.0);

    cout << "Area del triangulo: " << miTriangulo.obtenerArea() << endl;
    cout << "Perimetro del triangulo: " << miTriangulo.obtenerPerimetro() << endl;

    return 0;
}

