/*
Scrivere un programma con metodo ricorsivo che conti il numero di cifre dispari in un numero .
*/

#include <iostream>
using namespace std;

int Dispari ( int n );

int main () {
	int n;
	
	cout << "*****************************" << endl;
	cout << "*CONTATORE DI NUMERI DISPARI*" << endl;
	cout << "*****************************" << endl;
	
	do {
		cout << "Inserisci valore: " << endl;
		cin >> n;
	} while ( !(n > 0) );
	
	n = Dispari(n);
	cout << n;
}

int Dispari ( int n ) {
	int count = 0;
	
	if ( n >= 0 ) {
		if ( n % 2 != 0) {
			count += 1;
		}
		return n - Dispari(n - 1);
	}
	
	return count;
}
