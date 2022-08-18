#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    //cout << "Raiz de 2" << sqrt(2) << endl;
    //cout << "2 al cubo" << pow(2, 3) << endl;
    //cout << "log(10)" <<log(10) << endl;
    bool bandera = true;        
    cout << "Bienvenido!" << endl << endl;
    int opcion;
    string salida;
    double v1, v2, resultado;
    do{
        cout << "1) Suma" << endl;
        cout << "2) Resta" << endl;
        cout << "3) Multiplicacion" << endl;
        cout << "4) Division" << endl;
        cout << "5) Salir" << endl;
        cout << "Digite una opcion: ";
        cin >> opcion;
        switch (opcion) 
        {
        case 1:
            cout << "Digite el primer valor: ";
            cin >> v1;
            cout << "Digite el segundo  valor: ";
            cin >> v2;
            resultado = v1 + v2;
            cout << "El resultado de la suma es: " << resultado << endl;
            cout << endl;
            break;
        case 2:
            cout << "Digite el primer valor: ";
            cin >> v1;
            cout << "Digite el segundo  valor: ";
            cin >> v2;
            resultado = v1 - v2;
            cout << "El resultado de la resta es: " << resultado << endl;
            cout << endl;
            break;
        case 3:
            cout << "Digite el primer valor: ";
            cin >> v1;
            cout << "Digite el segundo  valor: ";
            cin >> v2;
            resultado = v1 * v2;
            cout << "El resultado de la multiplicacion es: " << resultado << endl;
            cout << endl;
            break;
        case 4:
            cout << "Digite el primer valor: ";
            cin >> v1;
            cout << "Digite el segundo  valor: ";
            cin >> v2;
            resultado = v1 / v2;
            cout << "El resultado de la division es: " << resultado << endl;
            cout << endl;
            break;
        case 5:
            cout << "Quiere abandonar el programa? [S/N]" << endl;
            cin >> salida;
            if(salida == "S"){
                cout << "Cerrando el programa" << endl;
                exit(0);
            }
            cout << endl;
            break;
        default:
            cout << "Opcion no valida..." << endl;
            cout << endl;
            break;
        }
    }while(bandera == true);
    return 0;
}