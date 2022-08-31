#include <iostream>
using namespace std;

void incrementoV(int);
void incrementoR(int &);

int main(void){
    int num = 1;
    //Declaramos el puntero
    int *ptr;
    //Asignar el puntero
    ptr = &num;
    //IMPRIMIR DIRECCION DE MEMORIA
    cout<<"Direccion de memoria: "<<ptr<<endl;
    cout<<"Valor: "<<*ptr<<endl;

    int i = 4;
    //PASO POR VALOR, MODIFICA LA VARIABLE SOLO DENTRO DE LA FUNCION
    incrementoV(i);
    cout<<"Valor de la variable en funcion: "<<i<<endl;
    //PASO POR REFERENCIA, MODIFICA LA VARIABLE EN GENERAL, DEJANDOLE EL VALOR ASIGNADO
    incrementoR(i);
    cout<<"Valor de la variable en funcion: "<<i<<endl;
    return 0;   
}

//Paso por valor
void incrementoV(int i){
    i+=1;
    cout<<"Valor incrementado (VALOR): "<<i<<endl;
}
//Paso por referencia
void incrementoR(int &i){
    i+=1;
    cout<<"Valor incrementado (REFERENCIA): "<<i<<endl;
}