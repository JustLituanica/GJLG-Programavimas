// Saldainiai (18 psl.) Dalyba su sveikaja dalimi ir liekana
#include <iostream>
using namespace std;

int main() {

	system("clear"); //nauajs lapas

	int n, m, k, d, a; //kintamieji

	cout << "Kiek saldianiu kiekviena diena Sauliui perka mama? ";
	cin >> n; //ivedam

	cout << "Kiek saldainiu Sauliui leidzia suvalgyti mama? ";
	cin >> m; //ivedam

	cout << "Po kiek dienu Saulius randa sleptuve? ";
	cin >> k; //ivedam

	d = ((n - m) * k) / m; // skaiciuojam keliom dienom uzteks saldainiu 
	a = ((n - m) * k) % m; //skaiciuojam kiek draugu pavaisins Saulius

	cout << "Saldainiu uzteks " << d << " dienoms" << endl;
	cout << "Saulius pavaisins " << a << " drauga (draugu)"; //atspausdinam ats

	return 0;
}