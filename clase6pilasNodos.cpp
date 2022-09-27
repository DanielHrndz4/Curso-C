#include <iostream>
using namespace std;

//VARIABLE GLOBAL
struct Nodo *pila = NULL;

void Insertar(int);
void Eliminar(int &);
bool Vacia();
int Tope();
void Imprimir();

struct Nodo{
    int dato;
    struct Nodo *siguiente;
};

int main(void){

    int valor;
    cout<<"Ingrese un valor a la pila: ";
    cin>>valor;
    Insertar(valor);
    cout<<Vacia()<<endl;
    Imprimir();
    Eliminar(valor);
    cout<<Vacia()<<endl;
    return 0;
}

//INSERTAR 
void Insertar(int n){
    //RESERVA DE MEMORIA
    struct Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
}

//ELIMINAR
void Eliminar(int &n){
    if(pila != NULL){
        struct Nodo *temporal = pila;
        n = temporal->dato;
        pila = temporal->siguiente;
        delete temporal;
    }
}

//VACIA
bool Vacia(){
    //SI RETORNA 1 ESTA VACIA
    //SI RETORNA 0 NO ESTA VACIA
    return pila == NULL;
}

//CONOCER EL ULTIMO ELEMENTO
int Tope(){
    if(pila == NULL){
        return -1;
    }else{
        return pila->dato;
    }
}

//IMPRIMIR
void Imprimir(){
    struct Nodo *temporal = pila;
    while(temporal != NULL){
        cout<<"Elemento de la pila: "<<temporal->dato<<endl;
        temporal = temporal->siguiente;
    }
}
