#include "iostream"
using namespace std;

int main() {
    int firstNumber;
    int secondNumber;

    firstNumber = 0;
    secondNumber = 0;

    cout << "Ingrese un numero: ";
    cin >> firstNumber;

    cout << "Ingrese otro numero: ";
    cin >> secondNumber;

    cout << "Los numeros ingresados fueron " << firstNumber << " y " << secondNumber << endl;

    return 0;
}