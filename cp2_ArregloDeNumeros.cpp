#include <iostream>
using namespace std;

float promedio(float arreglo[], int i, int numDatos, float resultado)
{
    if (i < numDatos)
    {
        resultado = resultado + arreglo[i];
        return promedio(arreglo, i + 1, numDatos, resultado);
    }
    else
    {
        return resultado / numDatos;
    }
}

int main()
{
    int numDatos;
    cout << "Tamaño del arreglo: ";
    cin >> numDatos;
    float *arreglo = new float[numDatos];
    for (int i = 0; i < numDatos; i++)
    {
        cout << "Ingrese el numero [" << (i + 1) << "] :";
        cin >> arreglo[i];
    }

    float resultado = promedio(arreglo, 0, numDatos, 0);
    cout << "El promedio es: " << resultado << endl;
    return 0;
}