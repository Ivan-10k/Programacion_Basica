#include <iostream>
#include <string>

int main() 
{
    // Leer el número de mes
    int numeroMes;
    std::cout << "Ingrese el número de mes (1-12): ";
    std::cin >> numeroMes;

    // Verificar si el número de mes es válido
    if (numeroMes >= 1 && numeroMes <= 12) 
    {
        // Array con los nombres de los meses
        std::string nombreMeses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

        // Mostrar el nombre del mes
        std::cout << "El nombre del mes es: " << nombreMeses[numeroMes - 1] << std::endl;
    } else {
        std::cout << "Número de mes inválido. Debe estar en el rango de 1 a 12." << std::endl;
    }

    return 0;
}