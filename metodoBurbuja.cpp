#include <iostream>
using namespace std;

int main(void){
    //METODO BURBUJA COMPARA ENTRE DOS VALORES, EL MENOR LO PASA AL LADO IZQUIERDO
    int arreglo[]={9,2,7,3,5,3};
    int aux;

    for(int i=0; i<sizeof(arreglo)/sizeof(arreglo[0]); i++){
        //COMPARACION ENTRE ELEMENTOS ALTUALES Y SIGUIENTES
        for(int j=0; j<sizeof(arreglo)/sizeof(arreglo[0]-1); j++){
            if(arreglo[j]>arreglo[j+1]){  //Orden = numero 1 = 9  y numero 2 = 2
                aux = arreglo[j]; //aux = 9 
                arreglo[j] = arreglo[j+1]; //9 = 2
                arreglo[j+1] = aux; //2 = 9
            }// arreglo[j] = numero 1 = 2 y arreglo[j+1] = numero 2 = 9
        }   
    }
    for(int k=0; k<sizeof(arreglo)/sizeof(arreglo[0]); k++){
        cout << arreglo[k] << ", ";
    }

    return 0;
}