#include<iostream>

using namespace std;

int main()
{

int liczba;
	cout << "Podaj liczbe calkowita" << endl;
	cin >> liczba;
	if (liczba > 0) {
		cout << "Liczba dodatnia" << endl;
	}

	int liczba2;
		cout << "podaj liczbe" << endl;
		cin >> liczba2;
		if (liczba2 %2== 0) {
			cout << "liczba jest parzysta" << endl;
		}
		else {
			cout << "liczba jest nieparzysta" << endl;
		}

		int liczba3;
		cout << "podaj liczbe" << endl;
		cin >> liczba3;
		if (liczba3 >= 10&&liczba3<= 50) {
			cout << "liczba znajduje sie w przedziale 10-50" << endl;
		}
		else {
			cout << "liczba nie znajduje sie w przedziale 10-50" << endl;
		}

		int liczba4;
		cout << "podaj liczbe" << endl;
		cin >> liczba4;
		if (liczba4 ==0) {
			cout << "liczba jest zerem" << endl;
		}
		if(liczba4<0){
			cout << "liczba jest ujemna" << endl;
		} if (liczba4 > 0) {
			cout << "liczba jest dodatnia" << endl;
		}if (liczba4 % 2 == 0) {
			cout << "liczba jest parzysta" << endl;
		}
		else {
			cout << "liczba nie jest parzysta" << endl;
		}

		int a, b, c;
		cout << "podaj pierwsza liczbe" << endl;
		cin >> a;
		cout << "podaj druga liczbe" <<endl;
		cin >> b;
		cout << "podaj trzecia liczbe" << endl;
		cin >> c;
		if (a < b && b < c) {
			cout << c << "," << b << "," << a;
		}
		else if (a < c && c < b) {
			cout << b << "," << c << "," << a;
		}
		else if (b < a && a < c) {
			cout << c << "," << a << "," << b;
		}
		else if (b < c && c < a) {
			cout << a << "," << c << "," << b;

		}
		else if (c < a && a < b) {
			cout << b << "," << a << "," << c;

		}
		else if (c < b && b < a) {
			cout << a << "," << b << "," << c;
		}


    return 0;
}

