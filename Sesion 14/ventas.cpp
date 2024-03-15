#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Ventas 
{
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
    const string& getFecha() const {
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

int main() 
{
    // Crear un objeto de la clase Ventas
    Ventas miVenta(1, 123, "2024-03-01", 5);

    // Acceder a los atributos usando los getters
    cout << "ID de Ventas: " << miVenta.getIdVentas() << endl;
    cout << "ID de Producto: " << miVenta.getIdProducto() << endl;
    cout << "Fecha: " << miVenta.getFecha() << endl;
    cout << "Cantidad: " << miVenta.getCantidad() << endl;

    // Modificar atributos usando setters
    miVenta.setFecha("2024-03-02");
    miVenta.setCantidad(8);

    // Mostrar los nuevos valores
    cout << "\nValores modificados:" << endl;
    cout << "Fecha: " << miVenta.getFecha() << endl;
    cout << "Cantidad: " << miVenta.getCantidad() << endl;

    return 0;
}
