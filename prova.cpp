#include <iostream>
#include <limits> // per pulire il buffer in caso di input errato
using namespace std;

int main() {
    cout << "Benvenuto nella calcolatrice da riga di comando!" << endl;
    cout << "Operazioni disponibili:\n";
    cout << "1. Addizione\n";
    cout << "2. Sottrazione\n";
    cout << "3. Moltiplicazione\n";
    cout << "4. Divisione\n";

    int scelta;
    cout << "Inserisci il numero dell'operazione che vuoi eseguire: ";
    cin >> scelta;

    if (cin.fail() || scelta < 1 || scelta > 4) {
        cerr << "Errore: operazione non valida. Uscita dal programma." << endl;
        return 1;
    }

    double a, b;
    cout << "Inserisci il primo numero: ";
    cin >> a;
    if (cin.fail()) {
        cerr << "Errore: parametro non valido." << endl;
        return 1;
    }

    cout << "Inserisci il secondo numero: ";
    cin >> b;
    if (cin.fail()) {
        cerr << "Errore: parametro non valido." << endl;
        return 1;
    }

    double risultato;
    switch (scelta) {
        case 1:
            risultato = a + b;
            break;
        case 2:
            risultato = a - b;
            break;
        case 3:
            risultato = a * b;
            break;
        case 4:
            if (b == 0) {
                cerr << "Errore: divisione per zero." << endl;
                return 1;
            }
            risultato = a / b;
            break;
    }

    cout << "Risultato: " << risultato << endl;
    cout << "Grazie per aver usato la calcolatrice. Arrivederci!" << endl;
    return 0;
}
