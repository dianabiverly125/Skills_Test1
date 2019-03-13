#include <iostream>
#include <conio.h>

using namespace std;

int main()

{ 
	double pph;
	int hours;

	cout << "Pay rate per hour" << endl;
	cin >> pph;
	cout << "no. of hours worked" << endl;
	cin >> hours;

	cout << endl;
	cout << "Income before taxes: " << pph * hours << endl;
	cout << "Income after taxes: " << (pph * hours) - (.14 * (pph * hours)) << endl;
	cout << "Money spent on clothes and accessories: " << .1 * ((pph * hours) - (.14 * (pph * hours))) << endl;
	cout << "Money spent on school supplies: " << .01 * ((pph * hours) - (.14 * (pph * hours))) << endl;
	cout << "Money spent on saving bonds: " << .25 * (((pph * hours) - (.14 * (pph * hours))) - (.1 * ((pph * hours) - (.14 * (pph * hours)))) + (.01 * ((pph * hours) - (.14 * (pph * hours))))) << endl;

	_getch();
	return 0;

}