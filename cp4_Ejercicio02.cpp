#include <iostream>
using namespace std;

struct Nodo{
    string nombre;
    float pago;
    struct Nodo *siguiente;
};

bool Vacia();
void Insertar(string, float);
void Eliminar(string &, float &, float &);
void Imprimir();
void PagoTotal(float);

struct Nodo *frenteCola = NULL;
struct Nodo *finalCola = NULL;

int main(void){

int des;
    string nombreCli;
    float pagoCli;
    float totalPago;
    etiqueta:
    cout<<"====== Clientes ======"<<endl;
    cout<<"[1] Insertar Cliente"<<endl;
    cout<<"[2] Ver Clientes"<<endl;
    cout<<"[3] Eliminar Cliente"<<endl;
    cout<<"[4] Salir"<<endl;
    cout<<"Digite su eleccion: ";
    cin>>des;

    switch (des){
    case 1:
        cout<<"\nDigite el nombre: ";
        cin>>nombreCli;
        cout<<"Digite la cantidad: $";
        cin>>pagoCli;
        totalPago += pagoCli;
        Insertar(nombreCli, pagoCli);
        cout<<endl;
        goto etiqueta;
        break;
    case 2:
        cout<<"==================="<<endl;
        Imprimir();
        PagoTotal(totalPago);
        cout<<"===================\n"<<endl;
        goto etiqueta;
        break;
    case 3:
        Eliminar(nombreCli, pagoCli, totalPago);
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

void Insertar(string nombreCli, float pagoCli){
    struct Nodo *nuevoNodo = new Nodo();
    nuevoNodo->nombre = nombreCli;
    nuevoNodo->pago = pagoCli;
    if(Vacia()){
        frenteCola = nuevoNodo;
    }else{
        finalCola->siguiente = nuevoNodo;
    }
    finalCola = nuevoNodo;
}

void Eliminar(string &nombreCli, float &pagoCli, float &totalPago){
    if(!Vacia()){
        nombreCli= frenteCola->nombre;
        pagoCli = frenteCola->pago;
        struct Nodo *temporal = frenteCola;
        totalPago -= pagoCli;
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
        cout<<"Nombre: "<<temporal->nombre<<endl;
        cout<<"Pago: $"<<temporal->pago<<endl;
        cout<<"==================="<<endl;
        temporal = temporal->siguiente;
    }
}

void PagoTotal(float totalPago){
    cout<<"Total de pagos: $"<<totalPago<<endl;
}