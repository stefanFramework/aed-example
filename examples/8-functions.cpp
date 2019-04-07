#include "iostream"
using namespace std;

float celsiusToFahrenheit(float celsiusTemperature);

int main() {
    float temperature;
    float convertedTemperature;

    cout << "Ingrese la temperatura (C):";
    cin >> temperature;

    convertedTemperature = celsiusToFahrenheit(temperature);

    cout << "La temperatura en Fahrenheits es: " << convertedTemperature << endl;
}

float celsiusToFahrenheit(float celsiusTemperature) {
    float fahrenheitTemperature;
     
    fahrenheitTemperature = (celsiusTemperature * 1.8) + 32;

    return fahrenheitTemperature;
}