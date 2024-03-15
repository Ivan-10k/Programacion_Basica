#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Producto 
{
private:
    int idProducto;
    string descripcion;
    string tipo;
    string fecha;
    double precio;

public:
    // Constructor
    Producto(int id, const string& desc, const string& t, const string& f, double p)
        : idProducto(id), descripcion(desc), tipo(t), fecha(f), precio(p) {}

    // Getter y Setter para idProducto
    int getIdProducto() const {
        return idProducto;
    }

    void setIdProducto(int id) {
        idProducto = id;
    }

    // Getter y Setter para descripcion
    const string& getDescripcion() const {
        return descripcion;
    }

    void setDescripcion(const std::string& desc) {
        descripcion = desc;
    }

    // Getter y Setter para tipo
    const string& getTipo() const {
        return tipo;
    }

    void setTipo(const std::string& t) {
        tipo = t;
    }

    // Getter y Setter para fecha
    const string& getFecha() const {
        return fecha;
    }

    void setFecha(const string& f) {
        fecha = f;
    }

    // Getter y Setter para precio
    double getPrecio() const {
        return precio;
    }

    void setPrecio(double p) {
        precio = p;
    }
};

int main() 
{
    // Crear un objeto de la clase Producto
    Producto miProducto(1, "Laptop", "Electronico", "2024-03-01", 1200.0);

    // Acceder a los atributos usando los getters
    cout << "ID del Producto: " << miProducto.getIdProducto() << endl;
    cout << "Descripcion: " << miProducto.getDescripcion() << endl;
    cout << "Tipo: " << miProducto.getTipo() << endl;
    cout << "Fecha: " << miProducto.getFecha() << endl;
    cout << "Precio: $" << miProducto.getPrecio() << endl;

    // Modificar atributos usando setters
    miProducto.setDescripcion("Tablet");
    miProducto.setPrecio(500.0);

    // Mostrar los nuevos valores
    cout << "\nValores modificados:" << endl;
    cout << "Descripcion: " << miProducto.getDescripcion() << endl;
    cout << "Precio: $" << miProducto.getPrecio() << endl;

    return 0;
}
