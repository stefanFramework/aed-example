#include "iostream"
using namespace std;

int main() {
    int firstNumber;
    int secondNumber;
    int result;

    firstNumber = 0;
    secondNumber = 0;
    result = 0;

    cout << "Ingrese un numero: ";
    cin >> firstNumber;

    cout << "Ingrese otro numero: ";
    cin >> secondNumber;

    cout << "Los numeros ingresados fueron " << firstNumber << " y " << secondNumber << endl;

    // Suma entre numeros
    result = firstNumber + secondNumber;
    cout << "La suma de ambos numeros es : " << result << endl;

    // Resta entre numeros
    result = firstNumber - secondNumber;
    cout << "La resta de ambos numeros es : " << result << endl;

    // Multiplicacion entre numeros
    result = firstNumber * secondNumber;
    cout << "La multiplicacion de ambos numeros es : " << result << endl;

    return 0;
}