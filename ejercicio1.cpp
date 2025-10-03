#include <iostream>
using namespace std;

int main(){
    int edad;
    cout << "Ingrese la edad del cliente: ";
    cin >> edad;

    // Verificar si la persona es menor de edad
    if (edad < 18)
    {
        // Si es menor de edad, el boleto cuesta $4
        cout << "El precio del boleto es $4" << endl;
    }
    else
    {
        // Si no es menor de edad, el boleto cuesta $8
        cout << "El precio del boleto es $8" << endl;
    }

    return 0;
}
