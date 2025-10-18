#include<iostream>

using namespace std;

int main()
{
	double cena_b, odl, spal, koszt;

	cout << "podaj cene" << endl;
	cin >> cena_b;
	cout << "podaj odl" << endl;
	cin >> odl;
	cout << "spal" << endl;
	cin >> spal;
	koszt = odl * cena_b * spal / 100;

	cout << "koszt przejazdu:" << koszt  << "zl";




	return 0;
}
