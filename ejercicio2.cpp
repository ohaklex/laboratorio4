#include <iostream>
using namespace std;

int main() {
    int numero;
    int i = 1; // contador que empieza en 1

    cout << "Ingrese un numero (del 1 al 100): ";
    cin >> numero;

    if (numero >= 1 && numero <= 100) {
        // Uso do...while para imprimir los numeros
        do {
            cout << i << " ";
            i++;
        } while (i <= numero);
        cout << endl;
    } else {
        cout << "Error: el numero debe estar entre 1 y 100." << endl;
    }

    return 0;
}
