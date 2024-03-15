#include <iostream>
#include <string>

int main() 
{
    // Leer la nota alfanumérica
    char nota;
    std::cout << "Ingrese la nota alfanumerica (A, B, C, D, E): ";
    std::cin >> nota;

    // Determinar el rango de notas
    switch (nota) 
    {
        case 'A':
            std::cout << "Rango de notas: 19 - 18" << std::endl;
            break;
        case 'B':
            std::cout << "Rango de notas: 17 - 14" << std::endl;
            break;
        case 'C':
            std::cout << "Rango de notas: 14 - 11" << std::endl;
            break;
        case 'D':
            std::cout << "Rango de notas: 10 - 5" << std::endl;
            break;
        case 'E':
            std::cout << "Rango de notas: 5 - 0" << std::endl;
            break;
        default:
            std::cout << "Nota alfanumerica invalida. Debe ser A, B, C, D o E." << std::endl;
            break;
    }

    return 0;
}
