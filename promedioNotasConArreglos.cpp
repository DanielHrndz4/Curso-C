#include <iostream>
using namespace std;

float Promedio(int [], int);

int main(void){
    int numNotas;
    int num = 1;
    int arregloNotas[numNotas];
    cout<<"Digite el numero de notas a ingresar: ";
    cin>>numNotas;
    for(int i=0;i<numNotas;i++){
        cout<<"Digite la ["<<num<<"] nota: ";
        cin>>arregloNotas[i];
        num++;
    }
    float prom = Promedio(arregloNotas, numNotas);
    cout<<"El proemdio es: "<<prom<< endl;
    return 0;
}

float Promedio(int arregloNotas[], int numNotas){
    float contador = 0;
    for(int i=0;i<numNotas;i++){
        contador += arregloNotas[i];
    }
    contador = contador / numNotas;
    return contador;
}