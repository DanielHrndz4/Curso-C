#include <iostream>
using namespace std;

int main(void){
    string letra;
    cout << "Digita una letra: ";
    cin >> letra;
    
    if(letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u"){
        cout << "Es una vocal";
    }else{
        cout << "No es una vocal";
    }
    return 0;
}   