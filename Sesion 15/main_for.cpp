#include <iostream>
#include <cmath>

using namespace std;

class FiguraGeometrica 
{
public:
    virtual double obtenerArea() const = 0;
    virtual double obtenerPerimetro() const = 0;
    virtual void mostrarInfo() const = 0;
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

    void mostrarInfo() const override 
    {
        cout << "Circulo - Area: " << obtenerArea() << ", Perimetro: " << obtenerPerimetro() << endl;
    }
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

    void mostrarInfo() const override 
    {
        cout << "Triangulo - Area: " << obtenerArea() << ", Perimetro: " << obtenerPerimetro() << endl;
    }
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

    void mostrarInfo() const override 
    {
        cout << "Cuadrado - Area: " << obtenerArea() << ", Perimetro: " << obtenerPerimetro() << endl;
    }
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

    void mostrarInfo() const override 
    {
        cout << "Rectangulo - Area: " << obtenerArea() << ", Perimetro: " << obtenerPerimetro() << endl;
    }
};

class Rombo : public FiguraGeometrica 
{
private:
    double diagonalMayor;
    double diagonalMenor;
    double lado;

public:
    Rombo(double dm, double dmenor, double l) : diagonalMayor(dm), diagonalMenor(dmenor), lado(l) {}

    double obtenerArea() const override 
    {
        return (diagonalMayor * diagonalMenor) / 2.0;
    }

    double obtenerPerimetro() const override 
    {
        return 4 * lado;
    }

    void mostrarInfo() const override 
    {
        cout << "Rombo - Area: " << obtenerArea() << ", Perimetro: " << obtenerPerimetro() << endl;
    }
};

int main() 
{
    const int tamanoArreglo = 5;
    FiguraGeometrica* formas[tamanoArreglo] =
    {
        new Circulo(5.0),
        new Triangulo(4.0, 3.0, 5.0, 4.0, 3.0),
        new Cuadrado(6.0),
        new Rectangulo(4.0, 8.0),
        new Rombo(6.0, 4.0, 3.0)
    };

    for (int i = 0; i < tamanoArreglo; ++i) 
    {
        formas[i]->mostrarInfo();
    }

    for (int i = 0; i < tamanoArreglo; ++i) 
    {
        delete formas[i];
    }

    return 0;
}
