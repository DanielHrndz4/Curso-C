#include <iostream>
using namespace std;

void Insertar(string, string, int, string, string);
void Eliminar(int);
void Imprimir();
void Filtrar(string);
void Buscar(string);

struct Nodo{
    string titulo;
    string estante;
    int ISBN;
    string genero;
    string autor;
    struct Nodo *siguiente;
};

struct Nodo *lista = NULL;

int main(void){
    int num;
    string nomLibro;
    string filtrarGenero;
    string aux;
    string tituloLibro;
    string estanteLibro;
    int ISBNLibro;
    string generoLibro;
    string autorLibro;
    int des;
    etiqueta:
    cout<<"\n====== BIBLIOTECA ======"<<endl;
    cout<<"[1] Insertar Libro"<<endl;
    cout<<"[2] Ver Libros"<<endl;
    cout<<"[3] Buscar Libro"<<endl;
    cout<<"[4] Eliminar Libro"<<endl;
    cout<<"[5] Filtrar Libro"<<endl;
    cout<<"[6] Salir"<<endl;
    cout<<"Digite su eleccion: ";
    cin>>des;

    switch (des){
    case 1:
        getline(cin, aux);
        cout<<"Nombre del libro: ";
        getline(cin,tituloLibro);
        cout<<"Numero de estante: ";
        cin>>estanteLibro;
        cout<<"ISBN del libro: ";
        cin>>ISBNLibro;
        getline(cin,aux);
        cout<<"Genero del libro: ";
        getline(cin,generoLibro);
        cout<<"Autor del libro: ";
        getline(cin,autorLibro);
        Insertar(tituloLibro, estanteLibro, ISBNLibro, generoLibro, autorLibro);
        system("clear");
        goto etiqueta;
        break;
    case 2:
        cout<<"\n========================";
        Imprimir();
        cout<<"========================\n"<<endl;
        goto etiqueta;
        break;
    case 3: 
        getline(cin,aux);
        cout<<"Digite el nombre del libro a buscar: ";
        getline(cin,nomLibro);
        Buscar(nomLibro);
        goto etiqueta;
        break;
    case 4: 
        cout<<"Digite el ISBN del libro que desea eliminar: ";
        cin>>num;
        Eliminar(num);
        system("clear");
        goto etiqueta;
        break;
    case 5: 
        cout<<"Digite el genero que desea filtrar: ";
        cin>>filtrarGenero;
        Filtrar(filtrarGenero);
        goto etiqueta;
        break;
    case 6:
        exit(0);
        break;    
    default:
        cout<<"Opcion no disponible..."<<endl;
        goto etiqueta;
        break;
    }

    return 0;
}

void Insertar(string tituloLibro, string estanteLibro, int ISBNLibro, string generoLibro, string autorLibro){
    struct Nodo *nuevoNodo = new Nodo();
    struct Nodo *temporal = lista;

    if(nuevoNodo != NULL){
        nuevoNodo->titulo = tituloLibro;
        nuevoNodo->estante = estanteLibro;
        nuevoNodo->ISBN = ISBNLibro;
        nuevoNodo->genero = generoLibro;
        nuevoNodo->autor = autorLibro;
        nuevoNodo->siguiente = NULL;

        if(lista == NULL){
            lista = nuevoNodo;
        }else{
            int desLibro;
            cout<<"Donde desea insertar el libro?"<<endl;
            cout<<"[1] Inicio | [2] Final"<<endl;
            cin>>desLibro;
            switch (desLibro)
            {
            case 1:
                nuevoNodo->siguiente = lista;
                lista = nuevoNodo;
                break;
            case 2:
                while(temporal->siguiente != NULL){
                    temporal = temporal->siguiente;
                }
                temporal->siguiente = nuevoNodo;
                break;
            default: 
                cout<<"Opcion no valida..."<<endl;
                break;
            } 
        }

    }else{
        cout<<"No se pueden agregar mas nodos"<<endl;
    }
}

void Eliminar(int num){
    if(lista != NULL){
        struct Nodo *auxBorrar;
        struct Nodo *anterior = NULL;
        auxBorrar = lista;

        while((auxBorrar != NULL) && (auxBorrar->ISBN !=num)){
            anterior = auxBorrar;
            auxBorrar = auxBorrar->siguiente;
        }
        if(auxBorrar == NULL){
            cout<<"El elemento no existe"<<endl;
        }else if(anterior == NULL){
            lista = lista->siguiente;
            delete auxBorrar;
        }else{
            anterior->siguiente = auxBorrar->siguiente;
            delete auxBorrar;
        }
    }
}

void Imprimir()
{
    struct Nodo *temporal = lista;
    if (lista != NULL)
    {
        while (temporal != NULL)
        {
            cout <<"\nNombre del libro: "<<temporal->titulo <<endl;
            cout <<"Numero de estante: "<<temporal->estante <<endl;
            temporal = temporal->siguiente;
        }
    }
    else
    {
        cout << "\nLista vacia"<<endl;
    }
}

void Buscar(string nomLibro){
    struct Nodo *temporal = lista;
    if (lista != NULL){
        while (temporal != NULL){
            if (temporal->titulo == nomLibro){
                cout <<"\nNombre del libro: "<<temporal->titulo <<endl;
                cout <<"Numero de estante: "<<temporal->estante <<endl;
            }
            temporal = temporal->siguiente;
        }
    }else{
        cout<<"Libro no encontrado"<<endl;
    }
}

void Filtrar(string filtro){
    struct Nodo *temporal = lista;
    if (lista != NULL){
        while (temporal != NULL){
            if (temporal->genero == filtro){
                cout <<"\nNombre del libro: "<<temporal->titulo <<endl;
                cout <<"Numero de estante: "<<temporal->estante <<endl;
            }
            temporal = temporal->siguiente;
        }
    }else{
        cout<<"Lista vacia"<<endl;
    }
}

