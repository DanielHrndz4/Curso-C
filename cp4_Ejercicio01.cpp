#include <iostream>
using namespace std;

struct Nodo{
    string modelo;
    string numPlaca;
    string color;
    struct Nodo *siguiente;
};

bool Vacia();
void Insertar(string, string, string);
void Eliminar(string &, string &, string &);
void Imprimir();

struct Nodo *frenteCola = NULL;
struct Nodo *finalCola = NULL;

int main(void){
    string modeloAuto;
    string placaAuto;
    string colorAuto;
    int des;
    etiqueta:
    cout<<"====== TALLER ======"<<endl;
    cout<<"[1] Insertar Auto"<<endl;
    cout<<"[2] Ver Autos"<<endl;
    cout<<"[3] Eliminar Auto"<<endl;
    cout<<"[4] Salir"<<endl;
    cout<<"Digite su eleccion: ";
    cin>>des;

    switch (des){
    case 1:
        cout<<"\nDigite el modelo del auto: ";
        cin>>modeloAuto;
        cout<<"Digite el numero de placa: ";
        cin>>placaAuto;
        cout<<"Digite el color: ";
        cin>>colorAuto;
        Insertar(modeloAuto, placaAuto, colorAuto);
        cout<<endl;
        goto etiqueta;
        break;
    case 2:
        Imprimir();
        goto etiqueta;
        break;
    case 3:
        Eliminar(modeloAuto, placaAuto, colorAuto);
        goto etiqueta;
        break;
    case 4:
        exit(0);
        break;    
    default:
        cout<<"Opcion no disponible..."<<endl;
        goto etiqueta;
        break;
    }
    return 0;
}

bool Vacia(){
    if(frenteCola == NULL){
        return true;
    }else{
        return false;
    }
}

void Insertar(string modeloAuto, string placaAuto, string colorAuto){
    struct Nodo *nuevoNodo = new Nodo();
    nuevoNodo->modelo = modeloAuto;
    nuevoNodo->numPlaca = placaAuto;
    nuevoNodo->color = colorAuto;
    nuevoNodo->siguiente = NULL;
    if(Vacia()){
        frenteCola = nuevoNodo;
    }else{
        finalCola->siguiente = nuevoNodo;
    }
    finalCola = nuevoNodo;
}

void Eliminar(string &modeloAuto, string &placaAuto, string &colorAuto){
    if(!Vacia()){
        modeloAuto = frenteCola->modelo;
        placaAuto = frenteCola->numPlaca;
        colorAuto = frenteCola->color;
        struct Nodo *temporal = frenteCola;
        if(frenteCola == finalCola){
            frenteCola = NULL;
            finalCola = NULL;
        }else{
            frenteCola = frenteCola->siguiente;
        }
        delete temporal;   
        cout<<"\nElemento eliminado con exito...\n"<<endl;
    }else{
        cout<<"\nElemento vacio...\n"<<endl;
    }
}

void Imprimir(){
    struct Nodo *temporal = frenteCola;
    while(temporal != NULL){
        cout<<"\nModelo: "<<temporal->modelo<<endl;
        cout<<"Numero de Placa: "<<temporal->numPlaca<<endl;
        cout<<"Color: "<<temporal->color<<endl;
        cout<<endl;
        temporal = temporal->siguiente;
    }
}