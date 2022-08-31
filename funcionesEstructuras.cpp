#include <iostream>
using namespace std;

string aux;
void imprimirProducto(struct Producto);

struct Producto{
    float precio;
    string nombre;
    float cantidad;
    float total;
}producto;

struct Producto capturaDatos(struct Producto prod){
    cout<<"Ingrese el precio: $";
    cin>>prod.precio;
    getline(cin,aux);
    cout<<"Ingrese el nombre del producto: ";
    getline(cin,prod.nombre);
    cout<<"Ingrese la cantidad: ";
    cin>>prod.cantidad;

    return prod;
}
int main(void){

    //producto = capturaDatos(producto);
    //imprimirProducto(producto);

    imprimirProducto(capturaDatos(producto));

    return 0;
}

void imprimirProducto(struct Producto prod){
    cout<<endl<<"++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"El precio del producto: $"<<prod.precio<<endl;
    cout<<"El nombre del producto: "<<prod.nombre<<endl;
    prod.total = prod.precio * prod.cantidad;
    cout<<"El total es: $"<<prod.total<<endl;
    cout<<"++++++++++++++++++++++++++++++++++++++"<<endl;
}