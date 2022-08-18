#include <iostream>
using namespace std;

int main(void){
int v =10;
int opcion1 = doble(v);
int opcion2 = triple(v);
int opcion3 = cuadruple(v);
cout << opcion1 << opcion2 << opcion3;

    return 0;
}

//SIN PUNTERO
int doble(int a){
    return a * 2;
}
int triple(int b){
    return b * 2;
}
int cuadruple(int c){
    return c * 2;
}