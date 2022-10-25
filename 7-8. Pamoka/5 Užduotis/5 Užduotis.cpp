// Skysčių matavimo vienetai (21 psl.)
#include <iostream>
using namespace std;

int main() {
	int s, g, k, s1, g1, k1;
	int a, b, c; // kintamieji
	int kvortai;

	cout << "Saikai: ";
	cin >> s;

	cout << "Gorčiai: ";
	cin >> g;

	cout << "Kvortos: ";
	cin >> k; // ivedimai

	cout << "Kiek saiku vandens ipilama/ispilama? ";
	cin >> s1;

	cout << "Kiek gorciu vandens ipilama/ispilama? ";
	cin >> g1;

	cout << "Kiek kvortu vandens ipilama/ispilama? ";
	cin >> k1; // ivedimai

	kvortai = ((s + s1) * 6 * 4) + ((g + g1) * 4) + (k + k1);

	a = kvortai / 24;
	b = ((kvortai - (a * 24)) / 4);
	c = (kvortai - (a * 24) - (b * 4)); // skaiciavimas

	cout << a << b << c << endl; // atsakymo spausdinimas

	kvortai = ((s - s1) * 6 * 4) + ((g - g1) * 4) + (k - k1);

	a = kvortai / 24;
	b = ((kvortai - (a * 24)) / 4);
	c = (kvortai - (a * 24) - (b * 4)); // skaiciavimas

	cout << a << b << c; // atsakymo spausdinimas

	return 0;
}