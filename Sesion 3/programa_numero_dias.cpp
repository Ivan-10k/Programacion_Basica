#include <iostream>

int main() {
    // Leer el número de días
    int totalDias;
    std::cout << "Ingrese el número total de días: ";
    std::cin >> totalDias;

    // Calcular años, meses y días
    int anos = totalDias / 365;
    int meses = (totalDias % 365) / 30;
    int dias = (totalDias % 365) % 30;

    // Mostrar resultados
    std::cout << "El número de días ingresado equivale a:" << std::endl;
    std::cout << "Años: " << anos << std::endl;
    std::cout << "Meses: " << meses << std::endl;
    std::cout << "Días: " << dias << std::endl;

    // Determinar el mes en el que recae
    int diasEnMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mesActual = 0;

    while (dias >= diasEnMes[mesActual]) {
        dias -= diasEnMes[mesActual];
        mesActual++;
    }

    // Mostrar el mes
    std::string nombreMeses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    std::cout << "El día recae en el mes de " << nombreMeses[mesActual] << std::endl;

    return 0;
}