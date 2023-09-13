// Bijele iššūkis (https://open.kattis.com/problems/bijele)
#include <iostream>
using namespace std;

int main() {
	int set[] = { 1, 1, 2, 2, 2, 8 }; // masyvas (set = kaip turi buti)

	for (int i = 0; i < 6; i++) {
		int n;              // kintamasis skaiciui ivesti
		cin >> n;           // ivedam skaiciu
		cout << set[i] - n; // atspausdinam pakitimus
		if (i != 6) {
			cout << " "; // parasom tarpa tarp skaiciu, kad nebutu klaidu
		}
	}
	return 0;
}