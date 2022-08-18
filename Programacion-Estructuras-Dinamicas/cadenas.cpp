#include <iostream>
using namespace std;

int main(void){
    char cadena[]="KATHY";

    cout<<"char Cadena = ";
    for (int i=0; i<strlen(cadena); i++){
        cout<<"['"<<cadena[i]<<"']";
    }
    return 0;
}