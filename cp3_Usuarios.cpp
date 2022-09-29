#include <iostream>
using namespace std;

struct Nodo *pila = NULL;

struct Nodo
{
    int id;
    string nombre;
    struct Nodo *siguiente;
};

void Agregar(int, string);
void Imprimir(int &, string &, int);
void Eliminar(int, string);

int main()
{
    int id;
    string nombre;
    int numDatos;
    int des;
etiqueta:
    cout << "\n======= USUARIOS =======\n"
         << endl;
    cout << "[1] Ingresar Usuarios" << endl;
    cout << "[2] Ver Usuarios" << endl;
    cout << "Seleccione su opcion: ";
    cin >> des;
    switch (des)
    {
    case 1:
        cout << "Cuantos usuarios desea agregar: ";
        cin >> numDatos;

        for (int i = 0; i < numDatos; i++)
        {
            cout << "Ingrese el id: ";
            cin >> id;
            cout << "Ingrese el nombre: ";
            cin >> nombre;
            Agregar(id, nombre);
        }
        goto etiqueta;
        break;
    case 2:
        cout << "\nImprimiendo valores de la pila: \n";
        Imprimir(id, nombre, numDatos);
        goto etiqueta;
        break;
    default:
        cout << "Invalid value" << endl;
        goto etiqueta;
        break;
    }

    return 0;
}
void Agregar(int id, string nombre)
{
    struct Nodo *nuevoNodo = new Nodo();
    nuevoNodo->id = id;
    nuevoNodo->nombre = nombre;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;

    cout << "\nEl elemento " << nombre << " agregado a la PILA correctamente\n"
         << endl;
}
void Imprimir(int &id, string &nombre, int numDatos)
{
    struct Nodo *aux = pila;
    nombre = aux->nombre;
    pila = aux->siguiente;
    while (numDatos > 0)
    {
        cout << "\nID: " << aux->id << endl;
        cout << "Nombre: " << aux->nombre << endl;
        aux = aux->siguiente;
        numDatos--;
    }
    delete aux;
}
