#include <iostream>
using namespace std;

void imprimirCadena(char cadena[]);

int main(void){
    char cadena[20];
    cout<<"Digite una cadena de texto: ";
    cin.getline(cadena,20,'\n');
    imprimirCadena(cadena);
    return 0;
}
void imprimirCadena(char cadena[]){
    int longitud = 0;
    longitud = strlen(cadena);
    cout<<endl<<"Cadena: "<<cadena<<endl;
    cout<<"Longitud de la cadena: "<<longitud<<endl;
}