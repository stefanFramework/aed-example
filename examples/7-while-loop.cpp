#include "iostream"
using namespace std;

int main() {
    int acum;
    int input;
    
    input = 0;
    acum = 0;

    cout << "Ingrese un numero: ";
    cin >> input;

    while (input != -1) {
        acum += input; // acum = acum + input
        cout << "Ingrese un numero: ";
        cin >> input;
    }

    cout << "Total acumulado: " << acum << endl;

    return 0;
}