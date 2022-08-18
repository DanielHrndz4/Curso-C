#include <iostream>
using namespace std;

int main(void){
    char opcion;
    bool entrada = true;
    while(entrada == true){
        cout << "Bienvenido" << endl;
        cout << "Digite 'S' para continuar o 'N' para salir" << endl;
        cin >> opcion;
        if(opcion == 'S'){
            cout << "SALUDOS" << endl;
        }else if(opcion != 'N' && opcion != 'S'){
            cout << "Letra erronea digite 'S' o 'N'" << endl;
        }
        else{
            cout << "Cerrando programa..." << endl;
            exit(0);
        }
        cout << endl;
    }
    return 0;
}