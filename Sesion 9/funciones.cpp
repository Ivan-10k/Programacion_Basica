#include <iostream>
#include <string>
using namespace std;

/*funciones calculadora
-Suma
-Resta
-Division
-Mulpliplicacion
*/
// variables globales
int val_01 = 0;
int val_02 = 0;

int suma(int valor_01, int valor_02)
{
    int result = valor_01 + valor_02;
    return result;
    // return valor_01 + valor_02;
}

int resta(int valor_01, int valor_02)
{
    int result = valor_01 - valor_02;
    return result;
    // return valor_01 - valor_02;
}

int multiplicacion(int valor_01, int valor_02)
{
    int result = valor_01 * valor_02;
    return result;
    // return valor_01 - valor_02;
}

float division(int valor_01, int valor_02)
{
    float result = 0;
    if (valor_02 != 0)
    {
        float result = valor_01 / valor_02;
    }
    return result;
}

void mensaje()
{
    cout << "******calculadora********";
}

void ingreso_parametros()
{
    cout << "Ingrese el valor para el primer parametro";
    cin >> val_01;
    cout << "Ingrese el valor para el segundo parametro";
    cin >> val_02;
}

int main()
{
    int opcion;
    mensaje();
    cout << "ingrese las opciones de la calculadora" << endl;
    cout << "1: sumar; 2: restar; 3: multiplicar; 4: dividir; 5: salir";
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        ingreso_parametros();
        cout << suma(val_01, val_02);
        break;
    case 2:
        ingreso_parametros();
        cout << resta(val_01, val_02);
        break;
    case 3:
        ingreso_parametros();
        cout << multiplicacion(val_01, val_02);
        break;
    case 4:
        ingreso_parametros();
        cout << division(val_01, val_02);
        break;
    case 5:
        cout << "salir";
        break;

    default:
        cout << "opcion fuera de rango" << endl;
        break;
    }
    /*do
    {
     cout<<"funciones";
    } while (opcion != 5);*/
    return 0;
}
