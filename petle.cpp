#include<iostream>
#include<cmath>
using namespace std;
int main()
{

	
	for (int i = 1; i <= 10; i++) {
		cout << i << " ";
		}
	


	int i2 = 2;
	while (i2 <= 20) {
	if (i2 % 2 == 0) 
		cout << i2 << " "; 
		i2++;
		}


	for (int i3 = 100; i3 >= 1; i3--) {
		cout << i3 << " ";
	}


	for (int suma = 0, x = 1; x <= 100; x++) {
		suma = suma + x;
		if (x == 100)
		cout << suma;
	}


	for (int y = 1, a; y <=10 ; y++) {
		a = y * y;
		cout << a << " ";
	}

	int z;
		do {
			cout << "podaj liczbe";
			cin >> z;
		} while (z != 0); 
		



	return 0;
}
