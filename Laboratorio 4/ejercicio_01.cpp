#include <iostream>
using namespace std;

int main() 
{
    const int cantidadEstudiantes = 10;
    std::vector<double> notas;

    // Solicitar las notas de los 10 estudiantes
    for (int i = 0; i < cantidadEstudiantes; ++i) 
    {
        double nota;

        // Validar que la nota esté en el rango [0, 20]
        do 
        {
            std::cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
            std::cin >> nota;

            if (nota < 0 || nota > 20) {
                std::cout << "Error: La nota debe estar en el rango [0, 20]. Intenta de nuevo.\n";
            }
        } while (nota < 0 || nota > 20);

        notas.push_back(nota);
    }

    // Devolver la nota mínima
    double notaMinima = *std::min_element(notas.begin(), notas.end());

    // Calcular el promedio de las notas
    double sumaNotas = 0;
    for (double nota : notas) 
    {
        sumaNotas += nota;
    }
    double promedio = sumaNotas / cantidadEstudiantes;

    // Realizar la sumatoria de todas las notas
    double sumatoriaTotal = std::accumulate(notas.begin(), notas.end(), 0.0);

    // Ordenar las notas de mayor a menor
    std::sort(notas.rbegin(), notas.rend());

    // Mostrar resultados
    std::cout << "\nResultados:\n";
    std::cout << "Nota mínima: " << notaMinima << std::endl;
    std::cout << "Promedio de notas: " << promedio << std::endl;
    std::cout << "Sumatoria de todas las notas: " << sumatoriaTotal << std::endl;

    std::cout << "\nNotas ordenadas de mayor a menor:\n";
    for (double nota : notas) {
        std::cout << nota << " ";
    }
    std::cout << std::endl;

    return 0;
}
