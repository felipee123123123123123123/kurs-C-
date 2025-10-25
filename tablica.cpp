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
	
