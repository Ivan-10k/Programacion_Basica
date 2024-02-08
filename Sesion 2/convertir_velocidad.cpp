#include <iostream>
using namespace std;

int main() {
    // Leer la velocidad en km/h
    double velocidad_kmph;
    std::cout << "Ingrese la velocidad del automóvil en km/h: ";
    std::cin >> velocidad_kmph;

    // Convertir la velocidad a m/s
    double velocidad_mps = velocidad_kmph * (1000 / 3600.0);

    // Mostrar la velocidad en m/s
    std::cout << "La velocidad del automovil es " << velocidad_mps << " metros por segundo." << std::endl;

    return 0;
}
