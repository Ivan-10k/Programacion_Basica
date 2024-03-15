#include <iostream>
#include <string>
#include "ingeniero.cpp"
#include <vector>
// #include "gerente.cpp"

using namespace std;

int main()
{
    cout << "*********integracion de todas las clases***************"<<endl;

    TipoContacto tipo_01(1, "mi_correo@hotmai.com", "977888123");
    // creamos un gerente
    Gerente gerente_01(48.78, "01", 75.67, "001", "Rios", "Carlos", "mi casa");
    // creanis 5 ingenieros
    Ingeniero ing01(45.87, "02", 30.45, "02", "Rodriguez", "Jose", "casa");
    Ingeniero ing02(45.87, "03", 30.45, "03", "Javier", "Maria", "casa");
    Ingeniero ing03(45.87, "04", 26.45, "04", "Santillan", "Carlos", "casa");
    Ingeniero ing04(45.87, "05", 26.45, "05", "Valera", "Julio", "casa");
    Ingeniero ing05(45.87, "06", 35.45, "06", "Fernandez", "Ana", "casa");

    // agregamos el contacto
    gerente_01.SetTipo(tipo_01);
    ing01.SetTipo(tipo_01);
    ing02.SetTipo(tipo_01);
    ing03.SetTipo(tipo_01);
    ing04.SetTipo(tipo_01);
    ing05.SetTipo(tipo_01);

    // departamento de Sistemas realizamos la asignacion
    gerente_01.SetDepartamento("Oficina de Tecnologia de Informacion");
    // asignamos los departamentos de las personas
    ing01.SetDepartamento("Oficina de Tecnologia de Informacion - Infraestructura");
    ing02.SetDepartamento("Oficina de Tecnologia de Informacion - Infraestructura");
    ing03.SetDepartamento("Oficina de Tecnologia de Informacion - desarrollo");
    ing04.SetDepartamento("Oficina de Tecnologia de Informacion - desarrollo");
    ing05.SetDepartamento("Oficina de Tecnologia de Informacion - calidad");
    // Agreganos el arreglo

    vector<Ingeniero> ingenieros02 = {ing01, ing02, ing03, ing04, ing05};
    /*ingenieros02[0] = ing01;
    ingenieros02[1] = ing02;
    ingenieros02[2] = ing03;
    ingenieros02[3] = ing04;
    ingenieros02[4] = ing05;*/
    // calculamos los salarios
    for (int i = 0; i < 5; i++)
    {
        ingenieros02[i].calcular_Salario(14, 40);
    }

    // calculamos el salario del gerente
    gerente_01.calcular_Salario(48.67);

    // mostramos los datos de los ingenieros, para ello en la clase enpleado se
    // implementa el metodo mostrar
    cout << "Informacion del Gerente" << endl;
    gerente_01.MostrarDatos();
    cout << endl;

    // Informacion de los ingenieros
    cout << "*********************************" << endl;
    cout << "Informacion del Gerente" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ".- ";
        ingenieros02[i].MostrarDatos();
        cout << endl;
    }
    //cambiamos el bono del gerente
    gerente_01.SetBono(2500);
    //calculamos el nuevo salario
    gerente_01.calcular_Salario(48.67);
    //mostramos la informacion
    gerente_01.MostrarDatos();
    return 0;
}
