#include <iostream>
using namespace std;

int numPotencia(int x, int y);

int main()
{
    int x = 0;
    int y = 0;
    cout << "Digite el numero: ";
    cin >> x;
    cout << "Digite la potencia: ";
    cin >> y;
    int potencia = numPotencia(x, y);
    cout << "La potencia es: " << potencia << endl;
    return 0;
}
int numPotencia(int x, int y)
{
    if (y == 1)
    {
        return x;
    }
    else
    {
        x = x * numPotencia(x, y - 1);
        return x;
    }
}