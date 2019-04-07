#include "iostream"
using namespace std;

int main() {
    int firstNumber;
    int secondNumber;
    float result;

    firstNumber = 0;
    secondNumber = 0;
    result = 0;

    cout << "Ingrese un numero: ";
    cin >> firstNumber;

    cout << "Ingrese otro numero: ";
    cin >> secondNumber;

    if (secondNumber == 0) {
        cout << "ERROR: El segundo numero ingresado no puede ser cero" << endl;
    } else {
        result = (float) firstNumber/secondNumber;
        cout << "El resultado de la division es " << result << endl;
    }

    return 0;
}