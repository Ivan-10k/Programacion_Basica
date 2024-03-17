#include <iostream>
using namespace std;

class CajeroAutomatico 
{
private:
    double saldo;

public:
    CajeroAutomatico() : saldo(0.0) {}

    void consultarSaldo() 
    {
        cout << "Su saldo actual es: $" << saldo << endl;
    }

    void realizarRetiro() 
    {
        double cantidad;
        cout << "Ingrese la cantidad a retirar: $";
        cin >> cantidad;

        if (cantidad > 0 && cantidad <= saldo) 
        {
            saldo -= cantidad;
            cout << "Retiro exitoso. Su saldo actual es: $" << saldo << endl;
        } else 
        {
            cout << "Error: Fondos insuficientes o cantidad inválida." << endl;
        }
    }

    void depositarDinero() 
   {
        double cantidad;
        cout << "Ingrese la cantidad a depositar: $";
        std::cin >> cantidad;

        if (cantidad > 0) 
        {
            saldo += cantidad;
            cout << "Depósito exitoso. Su saldo actual es: $" << saldo << endl;
        } else 
        {
            cout << "Error: Cantidad de depósito inválida." << endl;
        }
    }
};

int main() 
{
    CajeroAutomatico cajero;

    int opcion;
    do 
    {
        cout << "\nOpciones del Cajero Automático:" << endl;
        cout << "1. Consultar Saldo" << endl;
        cout << "2. Realizar Retiro" << endl;
        cout << "3. Depositar Dinero" << endl;
        cout << "4. Salir" << endl;

        cout << "Seleccione una opción (1-4): ";
        cin >> opcion;

        switch (opcion) 
        {
            case 1:
                cajero.consultarSaldo();
                break;
            case 2:
                cajero.realizarRetiro();
                break;
            case 3:
                cajero.depositarDinero();
                break;
            case 4:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                break;
        }
    } while (opcion != 4);

    return 0;
}
