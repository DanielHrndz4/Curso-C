#include <iostream>
using namespace std;

int numRegistro;
void imprimirDatos();

//DECLARACION DE ESTRUCTURA
struct Dirreccion{
    string municipio;
    string departamento;
    int numCasa;
};
//DECLARACION DE ESTRUCTURA ANIDADA
struct Alumno{
    string nombre;
    string codigo;
    int anioNac;
    int edad;
    struct Dirreccion dir;
}alumno[100];

int main(void){

    string aux;
    cout<<"Ingrese el numero de registros a llenar: ";
    cin>>numRegistro;
    //SOLICITAR DATOS
    for(int i=0; i<numRegistro; i++){
        getline(cin, aux);
        cout<<"Nombre: ";
        getline(cin, alumno[i].nombre);
        cout<<"Digite su codigo de estudiante: ";
        getline(cin, alumno[i].codigo);
        cout<<"Digite su anio de nacimiento: ";
        cin>>alumno[i].anioNac;
        getline(cin, aux);
        cout<<"Digite el municipio donde recide: ";
        getline(cin, alumno[i].dir.municipio);
        cout<<"Digite el departamento donde recide: ";
        getline(cin, alumno[i].dir.departamento);
    }
    imprimirDatos();
    return 0;
}

void imprimirDatos(){
    for(int i=0; i<numRegistro; i++){
        alumno[i].edad = 2022 - alumno[i].anioNac;
        cout<<endl;
        cout<<"++++++++++++++++++++++++++++++"<<endl;
        cout<<"Nombre: "<<alumno[i].nombre<<endl;
        cout<<"Codigo: "<<alumno[i].codigo<<endl;
        cout<<"Edad: "<<alumno[i].edad<<endl;
        cout<<"Municipio: "<<alumno[i].dir.municipio<<endl;
        cout<<"Departamento: "<<alumno[i].dir.departamento<<endl;
        cout<<"++++++++++++++++++++++++++++++"<<endl;
    }
}