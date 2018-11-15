#include <iostream>
using namespace std;

void InsertVector ( int v[], int n );
void SortVector ( int v[], int n);
void ReadVector ( int v[], int n );

int main() { 
	int n;
	
	cout << "*************************************" << endl;
	cout << "*        ORDINAMENTO VETTORE        *" << endl; 
	cout << "*************************************" << endl;
	
	//CONTROLLO NUMERI VALORI > 0 . 
	do {
		cout << "Inserisci numero valori da inserire"<<endl;
		cin >> n;
	} while ( !(n > 0) );
	
	//DICHIARAZIONE VETTORE . 
	int v[n];
	
	//INSERIMENTO FUNZIONI PER LO SVOLGIMENTO . 
	InsertVector (v, n);
	SortVector(v, n);
	ReadVector(v, n);
}

void InsertVector ( int v[], int n ) {
	for ( int i = 0; i < n; i++ ) {
		cout << "Inserisci valore " << i << " : ";
		cin >> v[i];
	}
}

void SortVector ( int v[], int n) {
	int sos, s;
	
	do {
		cout << "Ordinamento crescente (0) - Ordinamento decrescente (1): ";
		cin >> s;
	} while ( !( (s == 0) || (s == 1) ) );
	
	if ( s == 1 ) {
		for ( int i = 0; i < n; i++ ) {
			for ( int j = i + 1; j < n; j++ ) {
				if ( v[i] < v[j]) {
					sos = v[i];
					v[i] = v[j];
					v[j] = sos;
				}
			}
		}
	}
	else {
		for ( int i = 0; i < n; i++ ) {
			for ( int j = i + 1; j < n; j++ ) {
				if ( v[i] > v[j]) {
					sos = v[i];
					v[i] = v[j];
					v[j] = sos;
				}
			}
		}
	}
}

void ReadVector( int v[], int n ) {
	for ( int i = 0; i < n; i++ ) {
		cout << v[i] << " ";
	}
}
