#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

//*1. Napisz funkcję roznica, która zwraca różnicę dwóch liczb całkowitych.*//

    int roznica(int a, int b) {
	return a - b;
}
	
		

//*2. Napisz funkcję iloczyn, która zwraca iloczyn dwóch liczb całkowitych.*//

	int iloczyn(int a, int b) {
		return a * b;
	
		
	}
//*3. Napisz funkcję srednia, która zwraca średnią dwóch liczb zmiennoprzecinkowych.*//

    double srednia(double a, double b) {
		return (a + b) / 2;
	
	
		
	}

//*4. Napisz funkcję czy_parzysta, która zwraca true, jeśli liczba jest parzysta, a false w przeciwnym wypadku.*//


	bool parzysta(int a) {
		if (a % 2 == 0) {
			return true;
		}
		else {
			false;
		}
	
		
	}



	//*5. Napisz wartosc_bezwzgledna, która zwraca wartość bezwzględną liczby całkowitej.*//

	int bezwzgledna(int a) {
		if (a>=0) {
			return a;
		}
		else {
			return a*-1;
		}
	
		
	}

	//*6. Napisz funkcję pole_prostokata, która zwraca pole prostokąta.*//
	int pole(int a, int b) {
		return(a * b);
	
		
	}

	//*7. Napisz funkcję double pole_kola, która zwraca pole koła.*//

	  double polek(double r) {
		return 3.14 * (r * r);
	}
	
	

	//*8. Napisz funkcję double obwod_kwadratu, która zwraca obwód kwadratu.*//

	double obwodkw(double a) {
		return 4*a;

	}

	//*9. Napisz funkcję minimum, która zwraca mniejszą z dwóch liczb.*//

	int minimum(int a, int b) {
		if (a > b) {
			return b;
		}
		else {
			return a;
		}
	}

	//*10. Napisz funkcję maximum, która zwraca wiekszosc z dwóch liczb.*//
	
	int maximum(int a, int b) {

		if (a > b) {
			return a;
		}
		else {
			return b;
		}
	}


	int main() {

		cout << roznica(6, 5) << endl;
		cout << iloczyn(6, 5) << endl;
		cout << srednia(6, 5) << endl;
		cout << parzysta(6) << endl;
		cout << bezwzgledna(21) << endl;
		cout << pole(5, 10) << endl;
		cout << polek(5);
		cout << obwodkw(5);
		cout << minimum(10, 4);
		cout << maximum(10, 4);




		return 0;




	}


	
