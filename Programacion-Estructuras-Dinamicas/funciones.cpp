#include <iostream>

using namespace std;

int sumar(int n1, int n2);

int main(void){
    int n1, n2;
    int suma;
    cout<<"Ingresa un valor: ";
    cin>>n1;
    cout<<"Ingresa un valor: ";
    cin>>n2;

    //LLAMAR A LA FUNCION
    suma = sumar(n1,n2);
    cout<<"El resultado de la suma es : "<<suma<<endl;
    return 0;
}

int sumar(int n1, int n2){
    int resultado = n1 + n2;
    return resultado;
}