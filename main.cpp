#include <iostream>

using namespace std;

float divisione(int a, int b) {
    float risDivisione;

    risDivisione = a / b;
    
    return risDivisione;
}

int moltiplicazione(int a, int b) {
    int risMoltiplicazione;

    risMoltiplicazione = a * b;
    
    return risMoltiplicazione;
}

int somma(int a, int b) {
    int risSomma;

    risSomma = a + b;
    
    return risSomma;
}

int sottrazione(int a, int b) {
    int risSottrazione;

    risSottrazione = a - b;
    
    return risSottrazione;
}

float divisione(int a, int b);
int moltiplicazione(int a, int b);
int somma(int a, int b);
int sottrazione(int a, int b);

int main() {
    float a, vattuale;
    string operazione;

    vattuale = 0;
    do {
        cout << vattuale << endl;
        cin >> operazione;
        if (operazione == "x") {
        } else {
            if (operazione == "+") {
                cin >> a;
                vattuale = somma(vattuale, a);
            }
            if (operazione == "-") {
                cin >> a;
                vattuale = sottrazione(vattuale, a);
            }
            if (operazione == "*") {
                cin >> a;
                vattuale = moltiplicazione(vattuale, a);
            }
            if (operazione == "/") {
                cin >> a;
                vattuale = divisione(vattuale, a);
            }
            if (operazione == "R") {
                vattuale = 0;
            }
        }
    } while (operazione != "x");
    cout << "Programma terminato" << endl;
    return 0;
}
