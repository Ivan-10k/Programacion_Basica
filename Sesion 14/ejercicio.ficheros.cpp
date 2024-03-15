#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "producto"
#include "ventas"
#include "vendedor"
#include "persona1"

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
    Producto(int id, const string& desc, const string& t, const string& f, double p)
        : idProducto(id), descripcion(desc), tipo(t), fecha(f), precio(p) {}

    // Métodos para escribir y leer desde un archivo
    void escribirEnArchivo(ofstream& archivo) const 
    {
        archivo << idProducto << ' ' << descripcion << ' ' << tipo << ' ' << fecha << ' ' << precio << '\n';
    }

    void leerDesdeArchivo(ifstream& archivo) 
    {
        archivo >> idProducto >> descripcion >> tipo >> fecha >> precio;
    }
};

class Ventas 
{
private:
    int idVentas;
    int idProducto;
    string fecha;
    int cantidad;

public:
    Ventas(int idV, int idP, conststring& f, int cant)
        : idVentas(idV), idProducto(idP), fecha(f), cantidad(cant) {}

    // Métodos para escribir y leer desde un archivo
    void escribirEnArchivo(ofstream& archivo) const 
    {
        archivo << idVentas << ' ' << idProducto << ' ' << fecha << ' ' << cantidad << '\n';
    }

    void leerDesdeArchivo(ifstream& archivo) 
    {
        archivo >> idVentas >> idProducto >> fecha >> cantidad;
    }
};

class Vendedor 
{
private:
    int idVendedor;
    vector<Ventas> ventas;

public:
    Vendedor(int idV) : idVendedor(idV) {}

    // Métodos para escribir y leer desde un archivo
    void escribirEnArchivo(ofstream& archivo) const 
    {
        archivo << idVendedor << '\n';
        for (const auto& venta : ventas) {
            venta.escribirEnArchivo(archivo);
        }
        archivo << "FIN\n";  // Marcar el final de las ventas para el vendedor
    }

    void leerDesdeArchivo(ifstream& archivo) 
    {
        archivo >> idVendedor;
        ventas.clear();
        Ventas venta(0, 0, "", 0);
        while (venta.leerDesdeArchivo(archivo), !archivo.eof() && venta.getIdVentas() != -1) 
        {
            ventas.push_back(venta);
        }
    }
};

class Persona 
{
private:
    int id;
    string apellidos;
    string nombre;
    string DNI;
    string direccion;

public:
    Persona(int i, const string& ap, const string& n, const string& dni, const string& dir)
        : id(i), apellidos(ap), nombre(n), DNI(dni), direccion(dir) {}

    // Métodos para escribir y leer desde un archivo
    void escribirEnArchivo(ofstream& archivo) const 
    {
        archivo << id << ' ' << apellidos << ' ' << nombre << ' ' << DNI << ' ' << direccion << '\n';
    }

    void leerDesdeArchivo(ifstream& archivo) 
    {
        archivo >> id >> apellidos >> nombre >> DNI >> direccion;
    }
};

// Funciones para escribir y leer desde archivos
template <typename T>
void escribirEnArchivo(const vector<T>& datos, const string& nombreArchivo) 
{
    ofstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        for (const auto& dato : datos) 
        {
            dato.escribirEnArchivo(archivo);
        }
        archivo.close();
    } else
    {
        cerr << "Error al abrir el archivo: " << nombreArchivo << endl;
    }
}

template <typename T>
vector<T> leerDesdeArchivo(const string& nombreArchivo) 
{
    vector<T> datos;
    T dato;
    ifstream archivo(nombreArchivo);
    if (archivo.is_open()) 
    {
        while (dato.leerDesdeArchivo(archivo), !archivo.eof() && dato.getIdVentas() != -1)
        {
            datos.push_back(dato);
        }
        archivo.close();
    } else {
        cerr << "Error al abrir el archivo: " << nombreArchivo << endl;
    }
    return datos;
}

int main() 
{
    // Crear objetos
    vector<Producto> productos = 
    {
        Producto(1, "Laptop", "Electrónico", "2024-03-01", 1200.0),
        Producto(2, "Teléfono", "Electrónico", "2024-03-01", 600.0)
    };

    vector<Ventas> ventas = 
    {
        Ventas(1, 1, "2024-03-01", 3),
        Ventas(2, 2, "2024-03-01", 5)
    };

    vector<Vendedor> vendedores = 
    {
        Vendedor(1),
        Vendedor(2)
    };

    vector<Persona> personas = 
    {
        Persona(1, "Gómez", "Juan", "12345678A", "Calle Principal, 123"),
        Persona(2, "Martínez", "Laura", "87654321B", "Avenida Secundaria, 456")
    };

    // Escribir en archivos
    escribirEnArchivo(productos, "productos.txt");
    escribirEnArchivo(ventas, "ventas.txt");
    escribirEnArchivo(vendedores, "vendedores.txt");
    escribirEnArchivo(personas, "personas.txt");

    // Leer desde archivos
    vector<Producto> productosLeidos = leerDesdeArchivo<Producto>("productos.txt");
    vector<Ventas> ventasLeidas = leerDesdeArchivo<Ventas>("ventas.txt");
    vector<Vendedor> vendedoresLeidos = leerDesdeArchivo<Vendedor>("vendedores.txt");
    vector<Persona> personasLeidas = leerDesdeArchivo<Persona>("personas.txt");

    // Mostrar la información leída
    cout << "Productos Leídos:\n";
    for (const auto& producto : productosLeidos) {
        cout << "ID: " << producto.getIdProducto()
                  << ", Descripción: " << producto.getDescripcion()
                  << ", Tipo: " << producto.getTipo()
                  << ", Fecha: " << producto.getFecha()
                  << ", Precio: " << producto.getPrecio() << std::endl;
    }

    cout << "\nVentas Leídas:\n";
    for (const auto& venta : ventasLeidas) 
    {
        cout << "ID Ventas: " << venta.getIdVentas()
                  << ", ID Producto: " << venta.getIdProducto()
                  << ", Fecha: " << venta.getFecha()
                  << ", Cantidad: " << venta.getCantidad() << endl;
    }

    cout << "\nVendedores Leídos:\n";
    for (const auto& vendedor : vendedoresLeidos) 
    {
        cout << "ID Vendedor: " << vendedor.getIdVendedor() << "\nVentas:\n";
        for (const auto& venta : vendedor.getVentas()) 
        {
            cout << "ID Ventas: " << venta.getIdVentas()
                      << ", ID Producto: " << venta.getIdProducto()
                      << ", Fecha: " << venta.getFecha()
                      << ", Cantidad: " << venta.getCantidad() << "\n---\n";
        }
    }

    cout << "\nPersonas Leídas:\n";
    for (const auto& persona : personasLeidas) 
    {
        cout << "ID: " << persona.getId()
                  << ", Apellidos: " << persona.getApellidos()
                  << ", Nombre: " << persona.getNombre()
                  << ", DNI: " << persona.getDNI()
                  << ", Dirección: " << persona.getDireccion() << endl;
    }

    return 0;
}
