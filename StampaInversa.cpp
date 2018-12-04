#include <iostream>
using namespace std;

void InserisciArray(int v[], int n);
void StampaArrayInverso(int v[], int n);

int main() {
    
    //DICHIARAZIONE VARIABILI . 
    int n;

    do {
        cout << "Inserisci grandezza array: ";
        cin >> n;
    } while ( !( n >= 0) );

    //DICHIARAZIONE ARRAY . 
    int v[n];

    //CHIAMATA FUNZIONE StampaArray(...) . 
    InserisciArray(v, n);

    //CHIAMATA DI FUNZIONE InserisciArray(...) . 
    StampaArrayInverso(v, n);
}

void InserisciArray(int v[], int n) {
    for ( int i = 0; i < n; i++ ) {
        cout << "Inserisci valore in posizione " << i << ": ";
        cin >> v[i];
    }
}

void StampaArrayInverso(int v[], int n) {
    for ( int i = n - 1; i >= 0; i-- ) {
        cout << v[i] << " ";
    }
}