#include <iostream>

using namespace std;

double calcularArea(double base, double altura) 
{
    return 0.5 * base * altura;
}

string identificarTipoTriangulo(double lado1, double lado2, double lado3) 
{
    if (lado1 == lado2 && lado2 == lado3) 
    {
        return "Equilátero";
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) 
    {
        return "Isósceles";
    } else 
    {
        return "Escaleno";
    }
}

int main() 
{
    double base, altura, lado1, lado2, lado3;

    cout << "Ingrese la longitud de la base del triángulo: ";
    cin >> base;

    cout << "Ingrese la altura del triángulo: ";
    cin >> altura;

    cout << "Ingrese la longitud del primer lado del triángulo: ";
    cin >> lado1;

    cout << "Ingrese la longitud del segundo lado del triángulo: ";
    cin >> lado2;

    cout << "Ingrese la longitud del tercer lado del triángulo: ";
    cin >> lado3;

    // Calcular el área
    double area = calcularArea(base, altura);

    // Identificar el tipo de triángulo
    string tipoTriangulo = identificarTipoTriangulo(lado1, lado2, lado3);

    // Mostrar resultados
    cout << "\nEl área del triángulo es: " << area << endl;
    cout << "El triángulo es de tipo: " << tipoTriangulo << endl;

    return 0;
}
