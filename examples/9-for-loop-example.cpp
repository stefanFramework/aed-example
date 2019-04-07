#include "iostream"
using namespace std;

int main() {
    int range;

    cout << "Ingrese el valor del rango: ";
    cin >> range;

    int i;

    i = 0;
    while (i < range) {
        cout << i << " ";
        i++; // i = i + 1
    }

    cout << endl << endl;

    for (i = 0; i < range; i++) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
    
}
