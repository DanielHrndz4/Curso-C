#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string nombre;
    double nota, promedio;
    double acumulador;
    cout << "Digite su nombre: ";
    getline(cin, nombre);
    for(int j = 1; j<= 3; j++){
        cout << j << "-" << "Digite la nota: ";
        cin >> nota; cin.ignore();
        acumulador = acumulador + nota;
        promedio = acumulador / 3;
    }
    cout << "Nombre: " << nombre << " | Promedio: " << promedio << endl;
    return 0;
}