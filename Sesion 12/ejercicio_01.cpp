#include <iostream>
#include <cmath>

using namespace std;

class Triangulo 
{
private:
    double lado1, lado2, lado3;
    string tipo;

public:
   
    Triangulo() 
    {
        lado1 = lado2 = lado3 = 0.0;
        tipo = "Indefinido";
    }

    Triangulo(double a, double b, double c) : lado1(a), lado2(b), lado3(c) {
        determinarTipo();
    }

    double obtenerArea() const 
    {
        double s = obtenerPerimetro() / 2.0;
        return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
    }

    double obtenerPerimetro() const 
    {
        return lado1 + lado2 + lado3;
    }

    void determinarTipo() 
    {
        if (lado1 == lado2 && lado2 == lado3) 
        {
            tipo = "Equilatero";
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) 
        {
            tipo = "Isosceles";
        } else {
            tipo = "Escaleno";
        }
    }

    void mostrarInfo() const 
    {
        cout << "Triangulo " << tipo << endl;
        cout << "Lado 1: " << lado1 << endl;
        cout << "Lado 2: " << lado2 << endl;
        cout << "Lado 3: " << lado3 << endl;
        cout << "Area: " << obtenerArea() << endl;
        cout << "Perimetro: " << obtenerPerimetro() << endl;
    }
};

int main() 
{
    Triangulo triangulo1(4.0, 6.0, 8.0);
    triangulo1.mostrarInfo();

    return 0;
}
