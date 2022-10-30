#include <iostream>
#include "censoLib.h"
using namespace std;

int main(void)
{
    string nombrePer;
    int anioNacPer;
    string sexoPer;
    string DUIPer;
    string departamentoPer;
    string municipioPer;
    int des, edadPer;
    string seleccionDep;
    int desDep;
    string aux;
    string nombreEliminar;
    int deSalir;

    cout << endl;
etiqueta:
    cout << "==============================================          WWWWWWWWWkc::ldxONWWMWWWWWWWWWWWWWWWWWWW" << endl;
    cout << "||          BIENVENIDO AL CENSO SV          ||          WWWWWWWWKl.     .c0NWWWWWWWWWWWWWWWWWWWW" << endl;
    cout << "|| [1] Insertar Registros                   ||          WWWWWKOo.         .;ld0NWWWWWWWWWWWWWWWW" << endl;
    cout << "|| [2] Imprimir Registros                   ||          WWNk:.                .,c0NKxccxXKKNWWWW" << endl;
    cout << "|| [3] Eliminar Registros                   ||          WNl                      .'.    ...:KWWW" << endl;
    cout << "|| [4] Busqueda por Departamento            ||          WNOl;.                             ;XWWW" << endl;
    cout << "|| [5] Funcion personalizada                ||          WWWWWOl::,....                     lNWWW" << endl;
    cout << "|| [6] Salir                                ||          WWWWWWWMWWNXK0xl,.                ,xNWWW" << endl;
    cout << "==============================================          WWWWWWWWWWWWWWWWNKkl:;'...       .dNWWWW" << endl;
    cout << "                                                        WWWWWWWWWWWWWWWWWWWMWWNX00OOkkkkx0WWWWWW" << endl;
    cout << "Digite su eleccion: ";
    cin >> des;
    cout << endl;
    system("clear");
    switch (des)
    {
    case 1:
        getline(cin, aux);
        cout << "Digite su nombre: ";
        getline(cin, nombrePer);
        cout << "Digite su año de nacimiento: ";
        cin >> anioNacPer;
        edadPer = 2022 - anioNacPer;
        cout << "Digite su sexo: ";
        cin >> sexoPer;
        getline(cin, aux);
        cout << "Digite el departamento donde recide: ";
        getline(cin, departamentoPer);
        cout << "Digite el municipio donde recide: ";
        getline(cin, municipioPer);
        if (edadPer >= 18)
        {
            cout << "Digite su numero de DUI: ";
            cin >> DUIPer;
            cout << endl;
        }
        else
        {
            DUIPer = "";
        }
        system("clear");
        cout << "Registor insertado con exito!" << endl
             << endl;
        Insertar(nombrePer, edadPer, sexoPer, DUIPer, departamentoPer, municipioPer);
        goto etiqueta;
        break;
    case 2:
        system("clear");
        Imprimir();
        goto etiqueta;
        break;
    case 3:
        getline(cin, aux);
        cout << "Digite el nombre de la persona que desea eliminar: ";
        getline(cin, nombreEliminar);
        Eliminar(nombreEliminar);
        goto etiqueta;
        break;
    case 4:
        ImprimirDep();
        cout << "Seleccione el departamento: ";
        cin >> desDep;
        system("clear");
        switch (desDep)
        {
        case 1:
            seleccionDep = "AHUACHAPAN";
            BusquedaDep(seleccionDep);
            break;
        case 2:
            seleccionDep = "SANTA ANA";
            BusquedaDep(seleccionDep);
            break;
        case 3:
            seleccionDep = "SONSONATE";
            BusquedaDep(seleccionDep);
            break;
        case 4:
            seleccionDep = "LA LIBERTAD";
            BusquedaDep(seleccionDep);
            break;
        case 5:
            seleccionDep = "CHALATENANGO";
            BusquedaDep(seleccionDep);
            break;
        case 6:
            seleccionDep = "CUSCATLAN";
            BusquedaDep(seleccionDep);
            break;
        case 7:
            seleccionDep = "SAN SALVADOR";
            BusquedaDep(seleccionDep);
            break;
        case 8:
            seleccionDep = "LA PAZ";
            BusquedaDep(seleccionDep);
            break;
        case 9:
            seleccionDep = "CABAÑAS";
            BusquedaDep(seleccionDep);
            break;
        case 10:
            seleccionDep = "SAN VICENTE";
            BusquedaDep(seleccionDep);
            break;
        case 11:
            seleccionDep = "USULUTAN";
            BusquedaDep(seleccionDep);
            break;
        case 12:
            seleccionDep = "SAN MIGUEL";
            BusquedaDep(seleccionDep);
            break;
        case 13:
            seleccionDep = "MORAZAN";
            BusquedaDep(seleccionDep);
            break;
        case 14:
            seleccionDep = "LA UNION";
            BusquedaDep(seleccionDep);
            break;
        default:
            cout << "Opcion no disponible..." << endl;
            break;
        }
        goto etiqueta;
        break;
    case 5:
        break;
    case 6:
        cout << "Seguro que desea salir del programa?" << endl;
        cout << "[1] SI | [2] NO :";
        cin >> deSalir;
        switch (deSalir)
        {
        case 1:
            exit(0);
            break;
        case 2:
            system("clear");
            goto etiqueta;
            break;
        default:
            break;
        }
        break;
    default:
        cout << "Opcion no disponible...";
        break;
    }
    return 0;
}
