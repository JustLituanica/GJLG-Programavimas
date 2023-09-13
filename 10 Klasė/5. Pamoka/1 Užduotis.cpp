// Dienos (18 psl.) Dalyba su sveikasia dalmens dalimi
#include <iostream>
using namespace std;

int main() {

	system("clear"); // naujas lapas

	int d, s; // kintamieji

	cout << "Kiek nuo metu pradzios praejo dienu? ";
	cin >> d; // ivedam

	s = d / 7; // atliekam skaiciavima

	cout << "Nuo metu pradzios praejo " << s << " savaites (savaiciu)"; // Atspausdinam atsakyma

	return 0;
}