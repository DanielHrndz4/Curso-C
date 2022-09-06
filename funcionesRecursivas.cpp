#include <iostream>
using namespace std;

int funcionRecursiva(int);
int funcionIterativa(int);

int main(void){
    int n = 5;
    cout<<"Funcion Recursiva: "<<funcionRecursiva(n)<<endl;
    cout<<"Funcion Iterativa: "<<funcionIterativa(n)<<endl;
    return 0;
}

int funcionRecursiva(int n){
    if(n<=1){
        return 1;
    }else{
        return n*funcionRecursiva(n-1);
    }
}

int funcionIterativa(int n){
    int contador = 1;
    for(int i=1; i<=n; i++){
        contador *= i;
    }
    return contador;
}