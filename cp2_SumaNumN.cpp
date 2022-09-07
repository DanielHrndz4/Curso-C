#include <iostream>
using namespace std;

int sumaNumeroN(int);

int main(void)
{

    int num, suma;
    cout << "Digite un numero: ";
    cin >> num;
    suma = sumaNumeroN(num);
    cout << "La sumatoria es: " << suma << endl;
    return 0;
}

int sumaNumeroN(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num + sumaNumeroN(num - 1);
    }
}