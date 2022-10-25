//Lektuvas (20 psl.) Skaiciuojam duomenu smulkinimus
#include <iostream>
using namespace std;

int main() {

	int a, b, c, v, m; //kintamieji

	cout << "Kelinta val isskrido? ";
	cin >> a;

	cout << "Kelinta minute isskrido? ";
	cin >> b;

	cout << "Kiek minuciu praleido ore? ";
	cin >> c; //ivedimai

	v = (a + ((b + c) / 60)) % 24;
	m = (b + c) % 60; //skaiciuojam ats

	cout << "Atskris " << v << " valanda" << endl;
	cout << m << " minuciu"; // spausdinam ats

	return 0;
}