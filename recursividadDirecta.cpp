#include <iostream>
using namespace std;

void cuentaRegresiva(int);

int main(void){
    int num;
    cout<<"Cuenta regresiva"<<endl<<"Digite un numero: ";
    cin>>num;
    cuentaRegresiva(num);
    return 0;
}

void cuentaRegresiva(int num){
    if(num>0){
        cout<<endl<<num;
        cuentaRegresiva(num-1);
    }else if(num<0){
        cout<<"El numero es menor o igual a cero"<<endl;
    }
}