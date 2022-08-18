#include <iostream>
using namespace std;

int main(void){
    bool b = true;
    while(b == true){
        int valor;
        cout << "Ingrese un valor :";
        cin >> valor;
        for (valor; valor <= 10; valor++){
            cout << valor << endl;
        }
    }
    return 0;
}