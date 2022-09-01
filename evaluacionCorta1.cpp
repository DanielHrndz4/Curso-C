#include <iostream>
using namespace std;

float promedio(int numDatos,float contador);

int main(void){

    int numDatos;
    int array[numDatos];
    int aumentNum = 1;
    float contador;

    cout<<"Ingrese el numero de datos: ";
    cin>>numDatos;

    for (int i = 0; i < numDatos; i++){
        cout<<"Numero "<<aumentNum<<": ";
        cin>>array[i];
        aumentNum++;
        contador += array[i];
    }

    promedio(numDatos, contador);
    return 0;
}
float promedio(int numDatos,float contador){
    float resultado = contador / numDatos;
    cout<<endl<<"El promedio es: "<<resultado<<endl;
    return resultado;
}