#include <iostream>
using namespace std;

int multiplicacionNumeroN(int);

int main(void)
{

    int num, multiplicacion;
    cout << "Digite un numero: ";
    cin >> num;
    multiplicacion = multiplicacionNumeroN(num);
    cout << "La multiplicacion es: " << multiplicacion << endl;
    return 0;
}

int multiplicacionNumeroN(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * multiplicacionNumeroN(num - 1);
    }
}