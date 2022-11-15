// Pietų kaina (16ps.) Skaiciuojame pinigu sumas
#include <iostream>
using namespace std;

int main() {

	system("clear"); // naujas lapas

	int a, p, j, s; // kintamieji

	cout << "Kelis eurus sumokėjo Antanas? ";
	cin >> a; // ivedam

	cout << "Kelis eurus sumokėjo Pranas? ";
	cin >> p; // ivedam

	cout << "Kelis eurus sumokėjo Jonas? ";
	cin >> j; // ivedam

	s = a + p + j; // suskaiciuojam suma

	cout << "Iš viso sumokėta " << s << " euru (eurai)"; // isvedam atsakyma

	return 0;
}