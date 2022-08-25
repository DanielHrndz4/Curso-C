#include <iostream>
using namespace std;

int main(void){

    int array[] = {9,2,7,3,6,4,5,1,8};
    int aux;

    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
        for (int j = 0; j < sizeof(array)/sizeof(array[0]-1); j++){
            if (array[j]>array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }

    for (int k = 1; k <= sizeof(array)/sizeof(array[0]); k++){
            cout << array[k] << ", ";
        }

    return 0;
}