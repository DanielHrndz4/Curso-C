#include <iostream>
using namespace std;

struct Nodo *pila = NULL;

void Ingresar(string, float);
void Imprimir();
void Tope();
void Eliminar(string &, float &);
void Salir();

struct Nodo{
    string pizza;
    float precio;
    struct Nodo *siguiente;
};

int main(void){
    int des;
    string ingrediente;
    float precio;
    etiqueta:
    cout<<"\n======= MENU PIZZA ROMA =======\n"<<endl;
    cout<<"[1] Ingresar orden"<<endl;
    cout<<"[2] Ver ordenes"<<endl;
    cout<<"[3] Ver ultimo elemento agregado"<<endl;
    cout<<"[4] Eliminar ultima orden"<<endl;
    cout<<"[5] Salir\n"<<endl;
    cout<<"Seleccione su opcion: ";
    cin>>des;
    switch (des)
    {
    case 1:
        cout<<"Digite el ingrediente: ";
        cin>>ingrediente;
        cout<<"Digite el precio : $";
        cin>>precio;
        Ingresar(ingrediente, precio);
        goto etiqueta;
        break;
    case 2:
        Imprimir();
        goto etiqueta;
        break;
    case 3:
        Tope();
        goto etiqueta;
        break;
    case 4:
        Eliminar(ingrediente, precio);
        goto etiqueta;
        break;
    case 5:
        Salir();
        break;    
    default:
        cout<<"Invalid value"<<endl;
        goto etiqueta;
        break;
    }
}

//INGRESAR 
void Ingresar(string namePizza, float cantPrecio){
    struct Nodo *nuevoNodo = new Nodo();
    nuevoNodo->pizza = namePizza;
    nuevoNodo->precio = cantPrecio;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
}

//IMPRIMIR
void Imprimir(){
    struct Nodo *temporal = pila;
    while(temporal != NULL){
        cout<<"\nPizza: "<<temporal->pizza<<endl;
        cout<<"Precio : $"<<temporal->precio<<endl<<endl;
        temporal = temporal->siguiente;
    }
}

//ULTIMO ELEMENTO
void Tope(){
    if(pila == NULL){
        cout<<"La pila esta vacia..."<<endl;
    }else{
        cout<<"\nULTIMO ELEMENTO\n"<<endl;
        cout<<"Pizza: "<<pila->pizza<<endl;
        cout<<"Precio : $"<<pila->precio<<endl;
    }
}

//ELIMINAR
void Eliminar(string &namePizza, float &cantPrecio){
    if(pila != NULL){
        struct Nodo *temporal = pila;
        namePizza = temporal->pizza;
        cantPrecio = temporal->precio;
        pila = temporal->siguiente;
        cout<<"Elemento eliminado con exito..."<<endl;
        delete temporal;
    }else{
        cout<<"La pila esta vacia..."<<endl;
    }
}
//SALIR
void Salir(){
    exit(0);
}