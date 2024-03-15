#include <iostream>

class CajeroAutomatico {
private:
    double saldo;

public:
    CajeroAutomatico() : saldo(0.0) {}

    void consultarSaldo() {
        std::cout << "Su saldo actual es: $" << saldo << std::endl;
    }

    void realizarRetiro() {
        double cantidad;
        std::cout << "Ingrese la cantidad a retirar: $";
        std::cin >> cantidad;

        if (cantidad > 0 && cantidad <= saldo) {
            saldo -= cantidad;
            std::cout << "Retiro exitoso. Su saldo actual es: $" << saldo << std::endl;
        } else {
            std::cout << "Error: Fondos insuficientes o cantidad inválida." << std::endl;
        }
    }

    void depositarDinero() {
        double cantidad;
        std::cout << "Ingrese la cantidad a depositar: $";
        std::cin >> cantidad;

        if (cantidad > 0) {
            saldo += cantidad;
            std::cout << "Depósito exitoso. Su saldo actual es: $" << saldo << std::endl;
        } else {
            std::cout << "Error: Cantidad de depósito inválida." << std::endl;
        }
    }
};

int main() {
    CajeroAutomatico cajero;

    int opcion;
    do {
        std::cout << "\nOpciones del Cajero Automático:" << std::endl;
        std::cout << "1. Consultar Saldo" << std::endl;
        std::cout << "2. Realizar Retiro" << std::endl;
        std::cout << "3. Depositar Dinero" << std::endl;
        std::cout << "4. Salir" << std::endl;

        std::cout << "Seleccione una opción (1-4): ";
        std::cin >> opcion;

        switch (opcion) {
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
                std::cout << "Saliendo del programa. ¡Hasta luego!" << std::endl;
                break;
            default:
                std::cout << "Opción inválida. Por favor, seleccione una opción válida." << std::endl;
                break;
        }
    } while (opcion != 4);

    return 0;
}
