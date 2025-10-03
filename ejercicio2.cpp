#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    // Verificar si el numero es menor a 10
    if (numero < 10) {
        cout << "Los numeros del 1 al " << numero << " son: 1 2 3 4 5 6 7 8 9" << endl;
    }
    // Verificar si el numero es menor a 30
    else if (numero < 30) {
        cout << "Los numeros del 1 al " << numero << " son: 1 2 3 ... hasta " << numero << endl;
    }
    // Si no se cumplen las condiciones anteriores
    else {
        cout << "El numero es muy grande, solo se permiten valores menores a 30" << endl;
    }

    return 0;
}
