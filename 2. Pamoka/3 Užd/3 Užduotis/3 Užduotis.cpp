#include <iostream>
using namespace std;

int main() {

	system("clear");

	int n, a, vid = 0;

	cout << "Is kiek skaiciu gauti vidurki? ";
	cin >> n;

	for (int i = 0; n > i; i++) {

		cout << "Ivesk skaiciu: ";
		cin >> a;

		vid = vid + a;
	}

	vid = vid / n;

	cout << "Ivestu skaiciu vidurkis yra: " << vid;

	return 0;
}