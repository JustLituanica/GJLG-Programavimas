// Gimtadienio uzduotis (15 psl.)
#include <iostream>
using namespace std;

int main() {

	system("clear"); // naujas lapas

	int a;         // a - metai;
	int men, d, v; // men - menesiai, d - dienos, v - val.

	cout << "Kiek metu sukanka Tautvydui? ";
	cin >> a; // ivedam kiek metu Tautvydui

	men = a * 12; // suskaiciuoja menesius
	d = a * 365;  // skaiciuoja dienas
	v = d * 24;   // skaiciuoja valandas

	system("clear"); // pradeda tuscia lapa

	cout << "Tautvydui " << men << " menesiu" << endl; // atspausdina menesius
	cout << "arba" << endl;
	cout << d << " dienu" << endl; // atspausdina dienas
	cout << "arba" << endl;
	cout << v << " valandu"; // atspausdina valandas

	return 0;
}