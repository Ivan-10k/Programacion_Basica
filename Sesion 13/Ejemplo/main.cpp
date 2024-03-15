#include <iostream>
#include <string>
#include <fstream> //libreira para archivos
// #include "facultad_01.cpp"
#include "estudiante.cpp"

using namespace std;

int main()
{
    // Estudiantes de la FIIS
    Estudiante est1("2023000001", "juanito.perez@unas.edu.pe", "perez", "juanito", "44444444");
    Estudiante est2("20220456", "jose.caldas@unas.edu.pe", " jose", "caldas", "234567");
    Estudiante est3("20223457", "carlos.solar@unas.edu.pe", " carlos", "solar", "345678");
    Estudiante est4("20223412", "marco.palacios@unas.edu.pe", "marco", "palacios", "3457177");

    // Estudiantes de ZOOTECNIA
    Estudiante est5("2020007", "manuel.lopez@unas.edu.pe", "lopez", "manuel", "20458771");
    Estudiante est6("2000485", "therry.exaltacion@unas.edu.pe", "exaltacion", "therry", "2024575");
    Estudiante est7("20220050", "krystal.exaltacion@unas.edu.pe", "exaltacion", "krystal", "87541558");
    Estudiante est8("2022002", "jose.martinez@unas.edu.pe", "mantinez", "jose", "73463283");

    Estudiante est9("0020150234", "pedro.acharte@unas.edu.pe", "acharte", "pedro", "78656664");
    Estudiante est10("002010231", "axel.lalangui@.edu.pe", "lalangui", "Axel", "74526323");

    Facultad facu1("001", "Falcultad de Ingenieria en Informatica y Sistermas", "FIIS");
    Facultad facu2("002", "Falcultad de Zootecnia", "ZOO");

    est1.setFacultad(facu1);

    est1.getFacultad().imprimir();

    // agregando cursos 5 es el maximo por cada estudiante
    Curso curs_1("0001", "Programacion Basica", 4);
    Curso curs_2("0002", "Diseño de BD", 3);
    Curso curs_3("0003", "Sotfware I", 3);
    Curso curs_4("0004", "Sotfware II", 4);
    Curso curs_5("0005", "Gestion de procesos", 4);

    // agregamos los cursos al estudiantes 1
    est1.agregarCurso(curs_1);
    est1.agregarCurso(curs_2);
    est1.agregarCurso(curs_3);
    est1.agregarCurso(curs_4);
    est1.agregarCurso(curs_5);

    // imprimimos los cursos del est 1
    est1.mostrarCursos();

    // metodo para implementar el registro de las notas
    // est1.ingresarNotas();
    // imprimimos los cursos con las notas del est 1
    est1.mostrarCursos();

    // arreglo de estudiantes
    // asignamos lo creado
    Estudiante listaEstudiantes[10] = {est1, est2, est3, est4, est5, est6, est7, est8, est9, est10};

    Estudiante est[2];

    // agregamos un bucle for para registrar estudiantes
    // declaramos variables para capturar los datos
    /**
    string _codigo, _correo, _apellido, _nombre, _dni;
    int opcion = 0;
    int valor = sizeof(est) / sizeof(est[0]);
    for (int i = 0; i < valor; i++)
    {
        // agregando nuevos estudiantes ingresados por el usuario
        // inicializamos los datos siempre con valor inicial
        _codigo = "";
        _correo = "";
        _apellido = "";
        _nombre = "";
        _dni = "";
        opcion = 0;
        // pedimos al usuario que ingrese los datos
        cout << "Ingrese los datos del estudiante a registrar \n";
        cout << "Ingrese el codigo :";
        cin >> _codigo;
        cout << "Ingrese el apellidos :";
        cin >> _apellido;
        cout << "Ingrese el nombre :";
        cin >> _nombre;
        cout << "Ingrese el correo :";
        cin >> _correo;
        cout << "Ingrese el DNI :";
        cin >> _dni;
        est[i] = Estudiante(_codigo, _correo, _apellido, _nombre, _dni);
        cout << "seleccione una facultad \n";
        cout << "opciones 1 :FIIS, 2:ZOO ";
        cin >> opcion;
        if (opcion == 1)
        {
            est[i].setFacultad(facu1);
        }
        if (opcion == 2)
        {
            est[i].setFacultad(facu2);
        }
        // est[i] = Estudiante("0020150234", "pedro.acharte@unas.edu.pe", "acharte", "pedro", "78656664");
        // solicitamos al usuario que ingrese los valores
    }

    for (int i = 0; i < valor; i++)
    {
        // agregando nuevos estudiantes
        est[i].getDatos();
    }

    // registramos los cursos al estudiante
    for (int i = 0; i < valor; i++)
    {
        // agregando cursos a los estudiantes
        est[i].agregarCurso(curs_1);
        est[i].agregarCurso(curs_2);
        est[i].agregarCurso(curs_3);
        est[i].agregarCurso(curs_4);
        est[i].agregarCurso(curs_5);
    }
    for (int i = 0; i < valor; i++)
    {
        // agregando notas de los cursos a los  estudiantes
        est[i].ingresarNotas();
    }

    // imprimimos los datos del curso
    for (int i = 0; i < valor; i++)
    {
        // agregando notas de los cursos a los  estudiantes
        est[i].mostrarCursos();
    }
   */
    // almacenamiento de los datos en archivo
    ofstream archivo("cursos.txt");

    // Verificamos si el archivo se abrió correctamente
    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    // Escribimos los datos en el archivo
    // for (int i = 0; i < 5; i++) {
    archivo << "***Datos del Curso***\n";
    archivo << curs_1.toString() << endl;
    archivo << curs_2.toString() << endl;
    archivo << curs_3.toString() << endl;
    archivo << curs_4.toString() << endl;
    archivo << curs_5.toString() << endl;
    archivo << "********************\n";

    //}

    // Cerramos el archivo
    archivo.close();

    // leemos los datos del archivo
    ifstream archivo2("cursos.txt");
    // Verificamos si el archivo se abrió correctamente
    if (!archivo2.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    // Leemos los datos de la clase del archivo
    string curso_txt;
    cout << "imprimiendo";

    while (archivo2 >> curso_txt)
    {
        cout << curso_txt << endl;
    }

    // Cerramos el archivo
    archivo2.close();

    return 0;
}
