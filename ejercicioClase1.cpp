#include <iostream>
using namespace std;

struct Alumno{
    string nombre;
    int codigo;
    int edad;
}Alumno[3];

int main(void){
    
    string aux="";
    cout<<"PRESIONE ENTER PARA CONTINUAR..";
    for(int i = 0; i < sizeof(Alumno)/sizeof(Alumno[0]); i++){
        getline(cin, aux);
        cout<<"Digite el nombre: ";
        getline(cin, Alumno[i].nombre);
        cout<<"Digite el codigo: ";
        cin>>Alumno[i].codigo;
        cout<<"Digite la edad: ";
        cin>>Alumno[i].edad;
    }
    for(int j = 0; j < sizeof(Alumno)/sizeof(Alumno[0]); j++){ 
        cout<<"============================="<<endl;
        cout<<"="<<"Nombre: "<<Alumno[j].nombre<<endl;
        cout<<"Codigo: "<<Alumno[j].codigo<<endl;
        cout<<"Edad: "<<Alumno[j].edad<<endl;
    }
    cout<<"============================="<<endl;
    return 0;
}