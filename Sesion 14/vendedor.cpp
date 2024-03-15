#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

class Ventas {
private:
    int idVentas;
    int idProducto;
    string fecha;
    int cantidad;

public:
    // Constructor
    Ventas(int idV, int idP, const string& f, int cant)
        : idVentas(idV), idProducto(idP), fecha(f), cantidad(cant) {}

    // Getter y Setter para idVentas
    int getIdVentas() const 
    {
        return idVentas;
    }

    void setIdVentas(int idV) 
    {
        idVentas = idV;
    }

    // Getter y Setter para idProducto
    int getIdProducto() const 
    {
        return idProducto;
    }

    void setIdProducto(int idP)
     {
        idProducto = idP;
    }

    // Getter y Setter para fecha
    const string& getFecha() const 
    {
        return fecha;
    }

    void setFecha(const string& f) 
    {
        fecha = f;
    }

    // Getter y Setter para cantidad
    int getCantidad() const 
    {
        return cantidad;
    }

    void setCantidad(int cant) 
    {
        cantidad = cant;
    }
};

class Vendedor 
{
private:
    int idVendedor;
    vector<Ventas> ventas;

public:
    // Constructor
    Vendedor(int idV) : idVendedor(idV) {}

    // Getter y Setter para idVendedor
    int getIdVendedor() const 
    {
        return idVendedor;
    }

    void setIdVendedor(int idV) 
    {
        idVendedor = idV;
    }

    // Getter y Setter para ventas
    const vector<Ventas>& getVentas() const 
    {
        return ventas;
    }

    void setVentas(const vector<Ventas>& v) 
    {
        ventas = v;
    }
};

int main() 
{
    // Crear un objeto de la clase Vendedor
    Vendedor miVendedor(1);

    // Crear ventas para el vendedor
    Ventas venta1(1, 123, "2024-03-01", 5);
    Ventas venta2(2, 456, "2024-03-02", 8);

    // Agregar ventas al vendedor
    miVendedor.setVentas({venta1, venta2});

    // Acceder a los atributos usando los getters
    cout << "ID de Vendedor: " << miVendedor.getIdVendedor() << endl;

    const vector<Ventas>& ventasVendedor = miVendedor.getVentas();
    cout << "\nVentas del Vendedor:" << endl;
    for (const auto& venta : ventasVendedor) 
    {
        cout << "ID de Ventas: " << venta.getIdVentas() << ", ID de Producto: " << venta.getIdProducto()
                  << ", Fecha: " << venta.getFecha() << ", Cantidad: " << venta.getCantidad() << std::endl;
    }

    return 0;
}
