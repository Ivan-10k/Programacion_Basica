#include <iostream>
#include <string>
using namespace std;

int num1, num2;
void suma(int numero_1, int numero_2);
void ingreso_valores();

int main()
{
    cout << "Ingrese los numeros a sumar" << endl;
    ingreso_valores();
    suma(num1, num2);
    return 0;
}

void suma(int numero_1, int numero_2)
{
    // return numero_1 + numero_2;
    cout << "la suma es: " << suma_2(12,15,14)<< endl;
}

int suma_2(int numero_1,  int numero_2, int numero_3)
{
     return numero_1 + numero_2;
    //cout << "la suma es: " << numero_1 + numero_2 << endl;
}
void ingreso_valores()
{
    cout << "Ingrese primer numero" << endl;
    cin >> num1;
    cout << "Ingrese segundo numero" << endl;
    cin >> num2;
}
