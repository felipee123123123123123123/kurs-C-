#include<iostream>

using namespace std;

int main()
{
	double r, pi, obwod, pole;

	cout << "Podaj r:" << endl;
	cin >> r;
	pi = 3.14;

	obwod = 2 * pi * r;
	pole = pi * (r * r);

	cout << "pole:" << pole << endl;
	cout << "obwod:" << obwod;

	return 0;
}
