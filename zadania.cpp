/*1. Oblicz średnią prędkość pojazdu

Wczytaj od użytkownika dystans (w kilometrach) i czas podróży (w godzinach).
Oblicz średnią prędkość i wypisz wynik w km/h. */

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double dystans, czas, predkosc;

	cout << "podaj dystans" << endl;
	cin >> dystans;
	cout << "podaj czas" << endl;
	cin >> czas;

	predkosc = dystans / czas;

	cout << "srednia predkosc: " << predkosc << "km/h" << endl;






	/*2. Oblicz pole prostokąta i przekątną

	Program wczytuje długość i szerokość prostokąta, a następnie oblicza jego pole i długość przekątnej.*/



	double a, b, pole, przekatna;

	cout << "Podaj dlugosc(a)" << endl;
	cin >> a;
	cout << "Podaj szerokosc(b)" << endl;
	cin >> b;
	pole = a * b;
	przekatna = sqrt(a * a + b * b);

	cout << "Pole:" << pole << endl << "Przekatna:" << przekatna << endl;



	/*3. Przeliczanie sekund na godziny, minuty i sekundy

	Wczytaj liczbę sekund i oblicz, ile to godzin, minut i sekund.*/

	int ilosc_sekund, godziny, minuty, sekundy;

	cout << "podaj ilosc sekund" << endl;
	cin >> ilosc_sekund;
	godziny = ilosc_sekund / 3600;
	minuty = ilosc_sekund / 60 - godziny * 60;
	sekundy = ilosc_sekund - minuty * 60 - godziny * 3600;
	cout << "liczba:" << godziny << "godz" << minuty << "min" << sekundy << "sek"<<endl;






	/*4. Oblicz miesięczne zużycie energii

	Program wczytuje moc urządzenia (w watach) oraz liczbę godzin pracy dziennie.
	Oblicz koszt miesięcznego zużycia energii, przyjmując cenę 1 kWh od użytkownika.*/

	double moc, czas_p, koszt, cena;

	cout << "Podaj moc w kW" << endl;
	cin >> moc;
	cout << "Podaj czas pracy w h" << endl;
	cin >> czas_p;
	koszt = 3;
	cena= moc * czas_p* koszt*30;

	cout << "Koszt miesiecznego zuzycia energii:" << cena<<"zl" << endl;



	/*5. Oblicz należny podatek dochodowy

	Wczytaj kwotę dochodu użytkownika i oblicz podatek wg uproszczonego wzoru:

	jeśli dochód ≤ 30 000 zł → podatek 12%,

	jeśli dochód > 30 000 zł → podatek 12% od 30 000 zł + 32% od nadwyżki.*/

	double dochod, podatek, podatek2;

	

	cout << "Podaj dochod" << endl;
	cin >> dochod;
	podatek = dochod * 0.12;
	podatek2 = podatek + (dochod - 30000) * 0.32;

	if (dochod <= 30000) {
			cout << "Podatek wynosi:" << podatek << "zl" << endl;
	}
	else {
		cout << "podatek wynosi:" << podatek2 << endl;
	}

	/*6. Oblicz ilość farby potrzebnej do pomalowania pokoju

Program wczytuje długość i wysokość pokoju (w metrach), oraz informację, ile metrów kwadratowych można pomalować 1 litrem farby.
Oblicz, ile litrów farby trzeba kupić.*/

	double ilosc, dlugosc, wysokosc, mkw;

	cout << "podaj dlugosc w metrach" << endl;
	cin >> dlugosc;
	cout << "podaj wysokosc w metrach" << endl;
	cin >> wysokosc;
	cout << "na ile metrow kwadratowych wystarczy 1 litr farby"<<endl;
	cin >> mkw;
	ilosc = ((dlugosc * wysokosc) / mkw * 4);
	cout << "aby pomalowac pokoj potrzeba" << ilosc << "litrow farby"<<endl;





	return 0;
} 
