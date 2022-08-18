#include <iostream>
using namespace std;

double calculoIva(double precio){
    double iva = precio * 0.13;
    return iva;
}
void mostrarIva(double precio){
    double iva = precio * 0.13;
    cout << "El IVA es: " << iva << endl;
}

int main(void) {
    double precio = 0;
    cout << "Digite el precio: ";
    cin >> precio;
    mostrarIva(precio);//No devuelve el dato, solo lo muestra

    double resultado = calculoIva(precio);//Devuelve el dato
    cout << "El IVA es: " << resultado << endl;
    return 0;
}

