#include <iostream>
using namespace std;

double encontrar_maximo(double d[], int tamanio);

int main(void){
    int cantidad = 0;
    cout << "Cantidad de datos a ingresar" << endl;
    cin >> cantidad;

    double datos[cantidad];

    for (int i = 1; i < cantidad; i++){
        cout << "Digite dato # " << i << endl;
        cin >> datos[i];
    }
    cout << "El maximo es: " << encontrar_maximo(datos, cantidad) << endl;

    return 0;
}

double encontrar_maximo(double d[], int tamanio){
    double maximo = d[0];
    for(int i=1; i<tamanio; i++){
        if (d[i] > maximo){
            maximo = d[i];
        }
    }
    return maximo;
}