#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;



int main() {
	int tablica[5];

	cout << "podaj 5 liczb" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> tablica[i];
	}cout << "wczytane liczby" << endl;
	for (int i = 0; i < 5; i++) {
		cout << tablica[i] << " ";
	}cout << endl;
	return 0;
}
	
----------------------------------------------------------------------

	#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>



using namespace std;


int main() {
	int tab[8];
	cout << "daj liczbe do tabeli:" << endl;
	for (int a = 0; a < 8; ++a) {

		cin >> tab[a];
	}
	cout << "o to wpisane liczby: " << endl;
	for (int i = 7; i >= 0; --i) {
		cout << tab[i] << endl;
	}
	return 0;
}
------------------------------------------------------------------------

	#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>



using namespace std;


int main() {
	int tab[10];
	cout << "daj liczbe do tabeli:" << endl;
	for (int a = 0; a < 10; ++a) {

		cin >> tab[a];
	}
	cout << "o to liczby parzyste: " << endl;
	for (int i = 1; i < 10; ++i) {
		if (tab[i] %2 ==0) {
			cout << tab[i]<<endl;
		}

	}
	cout << "o to liczby nieparzyste: " << endl;
	for (int f = 1; f < 10; ++f) {
		if (tab[f] %2 != 0) {
			cout << tab[f]<<endl;
		}

	}
	return 0;
}
-------------------------------------------------------------------------------------

	#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>



using namespace std;


int main() {
	float tab[5];
	float sre;
	float suma=0;
	int n=0;
	cout << "daj liczbe do tabeli:" << endl;
	for (int a = 0; a < 5; ++a) {

		cin >> tab[a];
		if (tab[a] > 0) {
			n = n + 1;
			suma = tab[a] + suma;
		}
	}
	if (suma == 0) {
		cout << "nie ma dodatnich liczb.";
	}
	else {
		sre = suma / n;
		cout << "średnia z dodatnich liczb wynosi: " << sre << endl;
	}
	
	return 0;
}
