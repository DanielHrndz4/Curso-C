#include <iostream>
using namespace std;

int main(void){
    //METODO DE INSERCION, COMPRUEBA LA POSICION SI EL VALOR DE LA IZQUIERDA ES MENOR
    //Y SI NO LO ES LO CAMBIA DE POSICION
    int arreglo[] = {9,1,3,4,6,5,3,7};
    //Almacenar posicion
    int aux;
    //Almacenar elemento de cambio
    int pos;
    for (int i = 0; i < sizeof(arreglo)/sizeof(arreglo[0]); i++){
        //Posicion actual
        pos = i;
        //Numero de arreglo
        aux = arreglo[i];

        //Comparacion del numero de la izquierda
        while((pos>0)&&(arreglo[pos-1]>aux)){
            arreglo[pos] = arreglo[pos-1];
            //Iteracion hacia atras
            pos--;
        }
        arreglo[pos] = aux;

    }
    for (int i=0; i<sizeof(arreglo)/sizeof(arreglo[0]); i++){
        cout << arreglo[i] << ", ";
    }
    


    return 0;
}