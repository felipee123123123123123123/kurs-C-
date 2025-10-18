#include<iostream>

using namespace std;

int main()
{
	double temp_C, temp_F;

	cout << "Podaj temperature w C" << endl;
	cin >> temp_C;
	temp_F = temp_C * 1.8 + 32;

	cout << "temp_C" <<" "<< temp_C <<" " << "rowna sie"<< " " << temp_F;

		return 0;
}
