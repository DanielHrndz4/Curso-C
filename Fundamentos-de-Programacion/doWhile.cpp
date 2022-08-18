#include <iostream> 
using namespace std;

int main(void){
    int numero = 0;
    do{
        numero += 1;
        cout << numero << endl;
    }while(numero<1000000);
    return 0;
}
