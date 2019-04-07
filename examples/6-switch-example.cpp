#include "iostream"
using namespace std;

int main() {
    char subject;
    
    cout << "--" << endl;
    cout << "Ingrese el nombre de la materia a inscribirse: " << endl;
    cout << "A: Algebra y Geometria Analitica" << endl;
    cout << "Q: Quimica General" << endl;
    cout << "F: Fisica I" << endl;
    cout << "--" << endl;
    cout << endl;

    cin >> subject;

    switch (subject) {
        case 'A':
            cout << "Usted se ha inscripto a Algebra y Geometria Analitica" << endl;
            break;
        case 'Q':
            cout << "Usted se ha inscripto a Quimica General" << endl;
            break;
        case 'F':
            cout << "Usted se ha inscripto a Fisica I" << endl;
        default:
            cout << "Materia inexistente" << endl;
    }

    return 0;
}