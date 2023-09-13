// Gimtadienis (18 psl.) Skaiciuojam sveikasias dalis ir liekanas dalyboje
#include <iostream>
using namespace std;

int main() {

	system("clear"); // naujas lapas

	int n, k, d, m, a; // kintamieji

	cout << "Kiek balionu gavo Andrius? ";
	cin >> n; // ivedimas

	cout << "Kiek puciamu balionu sprogo? ";
	cin >> k; // ivedimas

	cout << "Kiek draugu turi Andrius? ";
	cin >> d; // ivedimas

	m = (n - k) / (d + 1); // skaiciuojam kiek balionu gauna draugai
	a = (n - k) / (d + 1) + (n - k) % (d + 1); // skaiciuojam kiek balionu liko andriui

	cout << "Kiekvienas draugas gavo po " << m << " balionu (balionus)" << endl;
	cout << "Andriui teko " << a << " balionai (balionu)"; // atspausdinam ats.

	return 0;
}