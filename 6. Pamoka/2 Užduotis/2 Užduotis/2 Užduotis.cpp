// Šindlerija (19 psl.)
#include <iostream>
using namespace std;

int main()
{
	int k, n, a, p;

	cout << "Kiek gramu zuvu nori istirti mokslininkai? ";
	cin >> k;

	cout << "Kiek akvariume telpa zuvu? ";
	cin >> n;

	a = (k * 500) / n;
	p = (k * 500) % n;

	cout << "Bus " << a << " pilnu akvariumu" << endl;
	cout << "Paskutiniame akvariume liks " << p << " zuvu";


	return 0;
}
