#include <iostream>
#include <ctime>

using namespace std;

double division(int a, int b)
{
    /*if (b == 0)
    {
        throw "Error: division por cero";
    }*/
    return static_cast<double>(a) / b;
}

int main()
{
    time_t ahora = time(0);
    tm *ltm = localtime(&ahora);
    string fecha_actual = to_string(ltm->tm_mday) + "/" + to_string(1 + ltm->tm_mon) + "/" + to_string(1900 + ltm->tm_year);
    cout << fecha_actual;
    return 0;
}
