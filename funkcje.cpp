#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int suma(int a, int b) {

	int suma = ( a + b);
	return suma;
	}

	
	
	
	int main() {
		cout << suma(5, 9) << endl;
		cout << suma(11241233463463, 26162)<<endl;
		return 0;

	}

	#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int silnia(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * silnia(n - 1);
}




int main() {

    int a;
    cout << "Napisz  liczbe" << endl;
    cin >> a;
    
    cout << "Silnia z " << a << " to " << silnia(a) << endl;

    return 0;
}




