#include <iostream>
using namespace std;
int main(void) {
    int variable = 3;
    cout << "Direccion de variable: " << &variable << endl;

    //Le digo a C++ que esta variable contendra direcciones de memoria
    int *miPrimerPuntero;
    //Declaracion y asignacion de una direecion de memoria
    int *miSegundoPuntero = &variable;

    cout << "Direccion de memoria de la variable: " << miPrimerPuntero << endl;
    cout << "Valor contenido dentro de la variable: " << miSegundoPuntero << endl;

    return 0;
}