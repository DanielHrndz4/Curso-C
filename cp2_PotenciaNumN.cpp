#include <iostream>
#include <cmath>
using namespace std;

int elevarPotencia(int, int);

int main(void)
{

    int a, b, potencia;
    cout << "Digite el numero: ";
    cin >> a;
    cout << "Digite a la potencia que se desea elevar: ";
    cin >> b;
    potencia = elevarPotencia(a, b);
    cout << "Potencia: " << potencia << endl;
    return 0;
}

int elevarPotencia(int a, int b)
{
    int resultado = pow(a, b);
    return resultado;
}