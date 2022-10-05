//Olimpiada (18 psl.) veiksmai su sveikaja dalimi ir liekana dalyboje
#include <iostream>
using namespace std;

int main() {

	system("clear"); //naujas lapas

	int n, m, s, k; //kintamieji

	cout << "Kiek devintoku dalyvavo olimpiadoje? ";
	cin >> n; //ivedam

	cout << "Kiek saldainiu nupirko mokytoja? ";
	cin >> m; //ivedam

	s = m / n; //skaiciuojam sveikaja dali

	k = m % n; //skaiciuojam liekana

	cout << "Kiekvienas mokinys gavo po " << s << " saldainius" << endl;
	cout << "Mokytojai liko " << k << " saldainai (saldainiu)"; //atspausdiname abu ats.

	return 0;
}