#include <iostream>

using namespace std;

class FiguraGeometrica 
{
public:
    virtual double obtenerArea() const = 0;
    virtual double obtenerPerimetro() const = 0;
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
};

int main() 
{
    
    Rombo miRombo(6.0, 4.0, 3.0);

    cout << "Area del rombo: " << miRombo.obtenerArea() << endl;
    cout << "Perimetro del rombo: " << miRombo.obtenerPerimetro() << endl;

    return 0;
}
