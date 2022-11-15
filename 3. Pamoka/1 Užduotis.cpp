// Laikrodzio uzduotis (15 psl.)
#include <iostream>
using namespace std;

int main() {

	system("clear"); // pradeda visiskai tuscia lapa

	int x, y; // x - valandos, y - minutes
	int m, s; // m - minutes, s - sekundes

	cout << "Kiek valandu rodo laikrodis? ";
	cin >> x; // ivedam valandu kieki

	cout << "Kiek minuciu rodo laikrodis? ";
	cin >> y;        // ivedam minuciu kieki
	system("clear"); // pradeda visiskai tuscia lapa

	m = (x * 60) + y; // suskaiciuoja minutes
	s = m * 60;       // suskaiciuoja sekundes

	cout << "Praejo " << m << " minuciu" << endl; // isveda minutes
	cout << "Praejo " << s << " sekundziu";       // isveda sekundes

	return 0;
}