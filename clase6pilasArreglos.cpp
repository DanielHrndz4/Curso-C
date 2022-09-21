#include <iostream>

using namespace std;

// Definición de constante
#define tam_max 5

void CrearPila(struct Pila *);
int Vacia(struct Pila *);
int Llena(struct Pila *);
void Agregar(struct Pila *, int);
void Borrar(struct Pila *);

struct Pila
{
    // Define el ultimo elemento que entra
    int cima;
    int elemento[tam_max];
} pila;

int main()
{
    bool exit = false;
    CrearPila(&pila);
    int num;
    int des;
    etiqueta:
    // MENU
    cout
         << "======= MENU =======" << endl;
    cout << "[1] Agregar elemento" << endl;
    cout << "[2] Borrar elemento" << endl;
    cout << "[3] Salir" << endl;
    cout << "Digite un numero: ";
    cin >> des;
    cout << endl;
    switch (des)
    {
    case 1:
        cout << "Digite el elemento: ";
        cin >> num;
        Agregar(&pila, num);
        goto etiqueta;
        break;
    case 2:
        Borrar(&pila);
        goto etiqueta;
        break;
    case 3:
        cout << "Saliendo del programa..." << endl;
        exit = true;
        break;
    default:
        cout<<"Opcion no disponible..."<< endl;
        goto etiqueta;
        break;
    }

    return 0;
}

// Crear pila
void CrearPila(Pila *p)
{
    // Pila esta vacia
    p->cima = -1;
}

// Pila vacia
int Vacia(Pila *p)
{
    if (p->cima == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Pila llena
int Llena(Pila *p)
{
    // Evalua el máximo de elementos del arreglo
    if (p->cima == tam_max - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Push
void Agregar(Pila *p, int n)
{
    if (!Llena(p))
    {
        p->cima++;
        // indice indica la posicion del array en el tope
        p->elemento[p->cima] = n;
        // cout<<n;
        cout << "Se agrego: " << p->elemento[p->cima] << " con exito" << endl
             << endl;
    }
    else
    {
        cout << "No se pueden agregar mas elementos" << endl
             << endl;
    }
}
// Pop
void Borrar(Pila *p)
{
    if (!Vacia(p))
    {
        int temporal = p->cima;
        p->cima--;
        cout << "Elemento borrado con exito..." << endl<<endl;
    }
    else
    {
        cout << "Pila esta vacía"<<endl<<endl;
    }
}