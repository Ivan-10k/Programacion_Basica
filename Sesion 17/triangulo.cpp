#include <iostream>
#include <stdexcept>

using namespace std;

class Triangulo 
{
private:
    double lado1, lado2, lado3;

public:
    Triangulo(double a, double b, double c) : lado1(a), lado2(b), lado3(c) 
    {
        // Validamos si los lados ingresados forman un triángulo válido
        if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) 
        {
            throw invalid_argument("Los lados ingresados no forman un triangulo valido.");
        }

        // Validamos si los lados son iguales
        if (a != b || b != c || a != c) 
        {
            throw invalid_argument("Los lados no son iguales.");
        }
    }

    double calcularPerimetro() 
    {
        return lado1 + lado2 + lado3;
    }
};

int main() 
{
    try 
    {
        // Pedir al usuario que ingrese los lados del triángulo
        double a, b, c;
        cout << "Ingrese la longitud del lado 1: ";
        cin >> a;
        cout << "Ingrese la longitud del lado 2: ";
        cin >> b;
        cout << "Ingrese la longitud del lado 3: ";
        cin >> c;

        // Crear un objeto Triangulo y calcular el perímetro
        Triangulo triangulo(a, b, c);
        double perimetro = triangulo.calcularPerimetro();

        cout << "El perimetro del triangulo es: " << perimetro << endl;
    } 
    catch (const invalid_argument& e) 
    {
        cout<< "Error: " << e.what() << endl;
    }

    return 0;
}
