#include <iostream>
using namespace std;

int main(void){
    int v1, v2, v3, v4, v5;
    cout << "Digite el primer valor: ";
    cin >> v1;
    cout << endl;
    cout << "Digite el segundo valor: ";
    cin >> v2;
    cout << endl;
    
    if(v1 % 2 == 0 && v2 % 2 == 0){
        int resultado = v1 + v2;
        cout << "El resultado es: " << resultado << endl;
    }else{
        cout << "Uno de los valores no es par" << endl;
        exit(0);
    }
    return 0;
}