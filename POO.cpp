#include <iostream>
using namespace std;

class circulo
{
private:
    string color;
    float pi;
    float radio;

public:
    circulo(string, float, float);
    void obtenercolor();
    void area();
};
circulo::circulo(string _color, float _pi, float _radio)
{
    color = _color;
    pi = _pi;
    radio = _radio;
};

void circulo::obtenercolor()
{
    cout << "El color del circulo es: " << color << endl;
}

void circulo::area()
{
    float area;
    cout << "El valor de pi es: " << pi << endl;
    cout << "El valor de radio es: " << radio << endl;
    area = 3.141592 * (radio * radio);
    cout << "El area del circulo es: " << area << endl;
};

int main()
{
    string color;
    float pi = 3.141592, radio;

    cout << "Ingrese el color del circulo: ";
    cin >> color;

    cout << "El valor de pi es: " << pi << endl;

    cout << "Ingrese el radio: ";
    cin >> radio;
    cout << endl;

    circulo c1(color, pi, radio);

    c1.obtenercolor();
    c1.area();
    return 0;
}