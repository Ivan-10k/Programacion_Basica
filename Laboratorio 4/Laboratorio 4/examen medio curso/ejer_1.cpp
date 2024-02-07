#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(0));

    int numeroAdivinar = rand() % 100 + 1;

    int intentos = 0;
    int intentoUsuario;

    cout << "Bienvenido al juego de adivinar el numero entre 1 y 100." << endl;

    while (intentos < 5) 
    {
        cout << "Ingrese su intento: ";
        cin >> intentoUsuario;

        intentos++;

        if (intentoUsuario == numeroAdivinar) 
        {
            cout << " ¡Felicidades! Has adivinado el numero en " << intentos << " intentos." << endl;
            break;
        } else 
        {
            if (intentoUsuario < numeroAdivinar)
            {
                cout << "El numero a adivinar es mayor." << endl;
            } else 
            {
                cout << "El numero a adivinar es menor." << endl;
            }

            cout << "Intentos restantes: " << 5 - intentos << endl;
        }
    }

    if (intentos == 5) 
    {
        cout << "Lo siento, has agotado tus 5 intentos. El numero correcto era: " << numeroAdivinar << endl;
    }

    return 0;
}
