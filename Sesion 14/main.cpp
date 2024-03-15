#include <iostream>
#include <string>

using namespace std;

// Definición de la clase Producto
class Producto 
{
public:
    string nombre;
    double precio;
};

// Definición de la clase Vendedor
class Vendedor 
{
public:
    string nombre;
    int id;
    Producto productos[4];

    void mostrarProductos() 
    {
        cout << "Productos de " << nombre << ":" << endl;
        for (int i = 0; i < 4; ++i) 
        {
            cout << i+1 << ". " << productos[i].nombre << " - $" << productos[i].precio << endl;
        }
        cout << endl;
    }
};

// Definición de la clase Persona
class Persona 
{
public:
    string nombre;
    int edad;
};

// Definición de la clase Cliente que hereda de Persona
class Cliente : public Persona 
{
public:
    int id;
};

int main() 
{
    // Creación de los productos
    Producto productos[4];
    productos[0] = {"producto1", 10};
    productos[1] = {"Producto2", 20};
    productos[2] = {"Producto3", 15};
    productos[3] = {"Producto4", 12};

    // Creación de los vendedores
    Vendedor vendedor1 = {"Vendedor1", 1, {productos[0], productos[1], productos[2], productos[3]}};
    Vendedor vendedor2 = {"Vendedor2", 2, {productos[1], productos[2], productos[3], productos[0]}};

    // Creación de los clientes
    Cliente cliente1 = {"Cliente1", 25, 1};
    Cliente cliente2 = {"Cliente2", 30, 2};

    // Mostrar productos de los vendedores
    vendedor1.mostrarProductos();
    vendedor2.mostrarProductos();

    // Realizar ventas
    cout << "Venta realizada por " << vendedor2.nombre << " al cliente " << cliente1.nombre << ":" << endl;
    cout << "Productos vendidos:" << endl;
    cout << "1. " << vendedor2.productos[0].nombre << " - $" << vendedor2.productos[0].precio << endl;
    cout << "2. " << vendedor2.productos[1].nombre << " - $" << vendedor2.productos[1].precio << endl;
    cout << endl;

    cout << "Venta realizada por " << vendedor1.nombre << " al cliente " << cliente2.nombre << ":" << endl;
    cout << "Producto vendido:" << endl;
    cout << "1. " << vendedor1.productos[0].nombre << " - $" << vendedor1.productos[0].precio << endl;

    return 0;
}
