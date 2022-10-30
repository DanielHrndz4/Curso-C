#include <iostream>
using namespace std;

struct Nodo
{
    string nombre;
    int edad;
    string sexo;
    string DUI;
    string departamento;
    string municipio;
    struct Nodo *siguiente;
};

struct Nodo *lista = NULL;

void Insertar(string nombrePer, int edadPer, string sexoPer, string DUIPer, string departamentoPer, string municipioPer)
{
    struct Nodo *nuevoNodo = new Nodo();
    if (nuevoNodo != NULL)
    {
        nuevoNodo->nombre = nombrePer;
        nuevoNodo->edad = edadPer;
        nuevoNodo->sexo = sexoPer;
        nuevoNodo->DUI = DUIPer;
        nuevoNodo->departamento = departamentoPer;
        nuevoNodo->municipio = municipioPer;
        nuevoNodo->siguiente = NULL;
        if (lista == NULL)
        {
            lista = nuevoNodo;
        }
        else
        {
            nuevoNodo->siguiente = lista;
            lista = nuevoNodo;
        }
    }
    else
    {
        cout << "No se pueden agregar mas nodos" << endl;
    }
}

void Imprimir()
{
    struct Nodo *temporal = lista;
    int contadorNino = 0;
    int contadorNina = 0;
    int contadorHombre = 0;
    int contadorMujer = 0;
    if (lista != NULL)
    {
        while (temporal != NULL)
        {
            if ((temporal->edad < 18) && (temporal->sexo == "MASCULINO"))
            {
                cout << "=============================" << endl;
                cout << "Nombre: " << temporal->nombre << endl;
                cout << "Edad: " << temporal->edad << endl;
                cout << "Sexo: " << temporal->sexo << endl;
                cout << "Departamento: " << temporal->departamento << endl;
                cout << "Municipio: " << temporal->municipio << endl;
                cout << "=============================" << endl;
                contadorNino++;
            }
            else if ((temporal->edad < 18) && (temporal->sexo == "FEMENINO"))
            {
                cout << "=============================" << endl;
                cout << "Nombre: " << temporal->nombre << endl;
                cout << "Edad: " << temporal->edad << endl;
                cout << "Sexo: " << temporal->sexo << endl;
                cout << "Departamento: " << temporal->departamento << endl;
                cout << "Municipio: " << temporal->municipio << endl;
                cout << "=============================" << endl;
                contadorNina++;
            }
            else if ((temporal->edad >= 18) && (temporal->sexo == "MASCULINO"))
            {
                cout << "=============================" << endl;
                cout << "Nombre: " << temporal->nombre << endl;
                cout << "Edad: " << temporal->edad << endl;
                cout << "Sexo: " << temporal->sexo << endl;
                cout << "DUI: " << temporal->DUI << endl;
                cout << "Departamento: " << temporal->departamento << endl;
                cout << "Municipio: " << temporal->municipio << endl;
                cout << "=============================" << endl;
                contadorHombre++;
            }
            else if ((temporal->edad >= 18) && (temporal->sexo == "FEMENINO"))
            {
                cout << "=============================" << endl;
                cout << "Nombre: " << temporal->nombre << endl;
                cout << "Edad: " << temporal->edad << endl;
                cout << "Sexo: " << temporal->sexo << endl;
                cout << "DUI: " << temporal->DUI << endl;
                cout << "Departamento: " << temporal->departamento << endl;
                cout << "Municipio: " << temporal->municipio << endl;
                cout << "=============================" << endl;
                contadorMujer++;
            }
            else
            {
                cout << "Elemento no encontrador!" << endl;
            }
            temporal = temporal->siguiente;
        }
        cout << "=============================" << endl;
        cout << "Total de Niños: " << contadorNino << endl;
        cout << "Total de Niñas: " << contadorNina << endl;
        cout << "Total de Hombres: " << contadorHombre << endl;
        cout << "Total de Mujeres: " << contadorMujer << endl;
        cout << "=============================" << endl;
    }
}

void ImprimirDep()
{
    cout << "[1] Ahuachapán" << endl;
    cout << "[2] Santa Ana" << endl;
    cout << "[3] Sonsonate" << endl;
    cout << "[4] La Libertad" << endl;
    cout << "[5] Chalatenango" << endl;
    cout << "[6] Cuscatlán" << endl;
    cout << "[7] San Salvador" << endl;
    cout << "[8] La Paz" << endl;
    cout << "[9] Cabañas" << endl;
    cout << "[10] San Vicente" << endl;
    cout << "[11] Usulután" << endl;
    cout << "[12] San Miguel" << endl;
    cout << "[13] Morazán" << endl;
    cout << "[14] La Unión" << endl;
}

void BusquedaDep(string seleccionDep)
{
    struct Nodo *temporal = lista;
    int contadorNino = 0;
    int contadorNina = 0;
    int contadorHombre = 0;
    int contadorMujer = 0;
    if (lista != NULL)
    {
        while (temporal != NULL)
        {
            if (temporal->departamento == seleccionDep)
            {
                if ((temporal->edad < 18) && (temporal->sexo == "MASCULINO"))
                {
                    cout << "=============================" << endl;
                    cout << "Nombre: " << temporal->nombre << endl;
                    cout << "Edad: " << temporal->edad << endl;
                    cout << "Sexo: " << temporal->sexo << endl;
                    cout << "Departamento: " << temporal->departamento << endl;
                    cout << "Municipio: " << temporal->municipio << endl;
                    cout << "=============================" << endl;
                    contadorNino++;
                }
                else if ((temporal->edad < 18) && (temporal->sexo == "FEMENINO"))
                {
                    cout << "=============================" << endl;
                    cout << "Nombre: " << temporal->nombre << endl;
                    cout << "Edad: " << temporal->edad << endl;
                    cout << "Sexo: " << temporal->sexo << endl;
                    cout << "Departamento: " << temporal->departamento << endl;
                    cout << "Municipio: " << temporal->municipio << endl;
                    cout << "=============================" << endl;
                    contadorNina++;
                }
                else if ((temporal->edad >= 18) && (temporal->sexo == "MASCULINO"))
                {
                    cout << "=============================" << endl;
                    cout << "Nombre: " << temporal->nombre << endl;
                    cout << "Edad: " << temporal->edad << endl;
                    cout << "Sexo: " << temporal->sexo << endl;
                    cout << "DUI: " << temporal->DUI << endl;
                    cout << "Departamento: " << temporal->departamento << endl;
                    cout << "Municipio: " << temporal->municipio << endl;
                    cout << "=============================" << endl;
                    contadorHombre++;
                }
                else if ((temporal->edad >= 18) && (temporal->sexo == "FEMENINO"))
                {
                    cout << "=============================" << endl;
                    cout << "Nombre: " << temporal->nombre << endl;
                    cout << "Edad: " << temporal->edad << endl;
                    cout << "Sexo: " << temporal->sexo << endl;
                    cout << "DUI: " << temporal->DUI << endl;
                    cout << "Departamento: " << temporal->departamento << endl;
                    cout << "Municipio: " << temporal->municipio << endl;
                    cout << "=============================" << endl;
                    contadorMujer++;
                }
                else
                {
                    cout << "Elemento no encontrador!" << endl;
                }
            }
            temporal = temporal->siguiente;
        }
        cout << "=============================" << endl;
        cout << "Total de Niños: " << contadorNino << endl;
        cout << "Total de Niñas: " << contadorNina << endl;
        cout << "Total de Hombres: " << contadorHombre << endl;
        cout << "Total de Mujeres: " << contadorMujer << endl;
        cout << "=============================" << endl;
    }
    else
    {
        cout << "\nLista vacia" << endl;
    }
}

void Eliminar(string nombreEliminar)
{
    if (lista != NULL)
    {
        struct Nodo *auxBorrar;
        struct Nodo *anterior = NULL;
        auxBorrar = lista;

        while ((auxBorrar != NULL) && (auxBorrar->nombre != nombreEliminar))
        {
            anterior = auxBorrar;
            auxBorrar = auxBorrar->siguiente;
        }
        if (auxBorrar == NULL)
        {
            system("clear");
            cout << "El elemento no existe!" << endl
                 << endl;
        }
        else if (anterior == NULL)
        {
            lista = lista->siguiente;
            delete auxBorrar;
            system("clear");
            cout << "Elemento eliminado con exito!" << endl
                 << endl;
        }
        else
        {
            anterior->siguiente = auxBorrar->siguiente;
            delete auxBorrar;
            system("clear");
            cout << "Elemento eliminado con exito!" << endl
                 << endl;
        }
    }
    else
    {
        system("clear");
        cout << "El elemento no existe!" << endl
             << endl;
    }
}