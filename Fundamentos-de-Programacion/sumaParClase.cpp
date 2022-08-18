#include <iostream>
using namespace std;

int main(void) {
    int valor = 0;
    int acumulador;
    for (int i = 1; i<=5; i++) {
        cout << i << "-" << "Ingrese un valor: ";
        cin >> valor;
        if(valor % 2 == 0) {
            acumulador = acumulador + valor;
        }
    }
    cout << "La suma de los pares es: " << acumulador << endl;
    return 0;
}