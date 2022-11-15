// Skola (16psl.) Skaiciuojam pinigu skola (atimti);
#include <iostream>
using namespace std;

int main() {

	system("clear"); // naujas lapas

	int j, r, s, k; // kintamieji

	cout << "Kelis eurus turėjo Jurgis? ";
	cin >> j; // ivedimas

	cout << "Kelis eurus paskolino Romui? ";
	cin >> r; // ivedimas

	cout << "Kelis eurus paskolino Simui? ";
	cin >> s; // ivedimas

	k = j - r - s; // atsakymo skaiciavimas

	cout << "Jurgiui liko " << k << " eurai (euru)"; // atsakymo isvedimas

	return 0;
}