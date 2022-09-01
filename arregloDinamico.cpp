#include <iostream>
#include <stdlib.h>

using namespace std;

void capturaDatos(int *ptr, int numEdad);

int main(void){
    //DECLARACION DE VARIABLES Y PUNTEROS
    int numEdad;
    cout<<"Ingrese el numero de edades: ";
    cin>>numEdad;
    int *ptr;
    capturaDatos(ptr, numEdad);
    //LIBERAR MEMORIA
    delete[]ptr;
    return 0;
}
void capturaDatos(int *ptr, int numEdad){
    //ARREGLO DINAMICO
    ptr = new int[numEdad];
    for(int i=0; i<numEdad; i++){
        cout<<"Ingrese las edades: ";
        cin>>ptr[i];
    }
}