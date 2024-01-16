#include <iostream>

bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Leer un valor entero positivo
    int numero;
    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> numero;

    // Verificar si el número es primo
    if (esPrimo(numero)) {
        std::cout << numero << " es un número primo." << std::endl;
    } else {
        std::cout << numero << " no es un número primo." << std::endl;
    }

    return 0;
}