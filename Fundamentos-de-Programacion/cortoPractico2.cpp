#include <iostream>
using namespace std;

int main(void) {
    bool bandera = true;
    int valor1, valor2, valor3;
    while (bandera == true) {
        cout << "Bienvenido" << endl << "Digite el primer numero: ";
        cin >> valor1;
        cout << "Digite el segundo numero: ";
        cin >> valor2;
        cout << "Digite el tercer numero: ";
        cin >> valor3;
        if ((valor1 < valor2) && (valor2 < valor3)){
            cout << "Incrementando" << " " << valor1 << "-" << valor2 << "-" << valor3 << endl;
        }else if ((valor1 > valor2) && (valor2 > valor3)){
            cout << "Decrementando" << " " << valor1 << "-" << valor2 << "-" << valor3 << endl;
        }else{
            cout << "Ni uno ni lo otro" << endl;
        }
        cout << endl;
    }
    return 0;
}