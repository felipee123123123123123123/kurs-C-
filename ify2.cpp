#include<iostream>
using namespace std;
int main()
{
	/*1. Sprawdzenie wieku i prawo do głosowania.
	Wczytaj wiek użytkownika.
	Jeśli >= 18 - "Masz prawo do głosowania".
	Jeśli < 18 "Nie masz prawa do głosowania”.*/

	int wiek;
	
	cout << "podaj wiek" << endl;
	cin >> wiek;
	if (wiek >= 18) {
		cout << "masz prawo do glosowania" << endl;

	}
	else {
		cout << "nie masz prawa do glosowania" << endl;
	} 



/*2. Ocena szkolna na podstawie wyniku procentowego
		Wczytaj wynik procentowy z testu(0–100).
		90–100 - „Ocena: celujący”,
		75–89 - „Ocena : bardzo dobry”,
		50–74 - „Ocena : dobry”,
		< 50 - „Ocena : niedostateczny”.*/

	int wynik;

	cout << "podaj wynik z testu" << endl;
	cin >> wynik;
	if (wynik >= 90 &&wynik<=100){
		cout << "ocena celujacy" << endl;
	}
	else if (wynik >= 75 && wynik <= 89) {
		cout << "ocena bardzo dobry" << endl;
	}
	else if (wynik >= 50 && wynik <= 74) {
		cout << "ocena dobry" << endl;
	}
	else if (wynik < 50) {
		cout << "ocena ndst" << endl;
	}
	else {
		cout << "bledny wynik" << endl;
	}





/*3.Sprawdzenie liczby dodatniej lub ujemnej
		Wczytaj liczbę całkowitą.
		Jeśli dodatnia - „Liczba dodatnia”,
		jeśli ujemna - „Liczba ujemna”,
		jeśli 0 - „Liczba równa zero”.*/

	int liczba;
	
	cout << "podaj liczbe" << endl;
	cin >> liczba;
	if (liczba == 0) {
		cout << "liczba równa zero" << endl;
	}if (liczba > 0) {
		cout << "liczba dodatnia" << endl;
	}if (liczba < 0) {
		cout << "liczba ujemna" << endl;
	}



/*4.Sprawdzenie czy liczba mieści się w zakresie 100–200 lub poza nim
		Wczytaj liczbę.
		Jeśli >= 100 i <= 200 - "Liczba w przedziale 100–200"
		w przeciwnym razie - "Liczba poza przedziałem"*/

	int liczba2;

	cout << "podaj liczbe" << endl;
	cin >> liczba2;
	if (liczba2 >= 100 && liczba2 <= 200) {
		cout << "liczba w przedziale 100-200" << endl;
	}
	else {
		cout << "liczba poza przedzialem" << endl;
	}


/*5.Sprawdzenie największej liczby z trzech wprowadzonych
		Wczytaj trzy liczby.
		Program wypisze, która jest największa.*/

	int l1, l2, l3;

	cout << "podaj pierwsza liczbe" << endl;
	cin >> l1;
	cout << "podaj druga liczbe" << endl;
	cin >> l2;
	cout << "podaj trzecia liczbe" << endl;
	cin >> l3;
	if (l1 > l2 && l1 > l3) {
		cout << "najwieksza liczba to " << l1;
	}
	else if (l2 > l1 && l2 > l3) {
		cout << "najwieksza liczba to " << l2;
	}
	else if (l3 > l1 && l3 > l2) {
		cout << "najwieksza liczba to " << l3;
	}



		return 0;
}
