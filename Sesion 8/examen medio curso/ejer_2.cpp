#include <iostream>
#include <string>

using namespace std;

struct Cliente 
{
    int tipoTarjeta;
    bool tieneDeuda;
};

double calcularAumentoCredito(const Cliente& cliente) 
{
    double aumento = 0.0;

    switch (cliente.tipoTarjeta) 
    {
        case 1:
            aumento = cliente.tieneDeuda ? 0.25 / 2 : 0.25;
            break;
        case 2:
            aumento = cliente.tieneDeuda ? 0.35 / 2 : 0.35;
            break;
        case 3:
            aumento = 0.40;
            break;
        default:
            aumento = 0.50;
    }

    return aumento;
}

int main() 
{
    const int numClientes = 3; 
    Cliente clientes[numClientes];

    for (int i = 0; i < numClientes; ++i) 
    {
        cout << "Ingrese el tipo de tarjeta para el Cliente " << i + 1 << ": ";
        cin >> clientes[i].tipoTarjeta;

        cout << "¿El Cliente " << i + 1 << " tiene deuda? (1 para si, 0 para no): ";
        cin >> clientes[i].tieneDeuda;
    }

    for (int i = 0; i < numClientes; ++i) 
    {
        double aumento = calcularAumentoCredito(clientes[i]);
        cout << "Cliente " << i + 1 << ": Aumento del " << (aumento * 100) << "% en el limite de credito." << endl;
    }

    return 0;
}
