#include <iostream>
using namespace std;

int main(void){
    char nombre[]= "Daniel";
    char nombreCopia[] = "Daniel";

    //strcat Concatena cadenas
    //cout<<strcat(nombre, nombreCopia)<<endl;
    
    //strlen Longitud de una cadena
    int longitud = 0;
    longitud = strlen(nombreCopia);
    cout<<longitud<<endl;

    //strcpy Copiar el contenido de una cadena a otra
    //strcpy(nombre, nombreCopia);
    //cout<<nombre<<endl;

    //strcmp Comparar cadenas
    if (strcmp(nombreCopia, nombre)==0){
        cout<<"Cadenas iguales.."<<endl;
    }else{
        cout<<"Cadenas diferentes..."<<endl;
    }

    //strrev Invertir cadena
    //cout<<strrev(nombre);

    //strupr Mayusculas
    //cout<<strupr(nombreCopia);

    //strlwr Minusculas
    //cout<<strlwr(nombre);

    return 0;
}