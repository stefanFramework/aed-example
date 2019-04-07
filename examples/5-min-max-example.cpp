#include "iostream"
using namespace std;

int main() {
    int firstNumber = 0;
    int secondNumber = 0;
    int thirdNumber = 0;

    int max = 0;

    cout << "Ingrese un numero: ";
    cin >> firstNumber;

    cout << "Ingrese un numero: ";
    cin >> secondNumber;

    cout << "Ingrese un numero: ";
    cin >> thirdNumber;

    if ((firstNumber >= secondNumber) && (firstNumber >= thirdNumber)) {
        max = firstNumber;
    } else if ((secondNumber >= firstNumber) && (secondNumber >= thirdNumber)) {
        max = secondNumber;
    } else {
        max = thirdNumber;
    }

    cout << "El maximo es: " << max << endl;

    return 0;
}