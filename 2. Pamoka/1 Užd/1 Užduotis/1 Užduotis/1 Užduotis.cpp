#include <iostream>
using namespace std;

int main() {

	system("clear");

	string vrd, pvrd, kl1, megpam;
	int met, kl, pam;

	cout << "1. Koks tavo vardas? " << endl;
	cin >> vrd;
	system("clear");

	cout << "2. Kokia tavo pavarde? " << endl;
	cin >> pvrd;
	system("clear");

	cout << "3. Kurioj klasej mokinies? (skaicius)" << endl;
	cin >> kl;
	system("clear");

	cout << "4. Kurioj klasej mokinies? (raide)" << endl;
	cin >> kl1;
	system("clear");

	cout << "5. Kiek tau metu? " << endl;
	cin >> met;
	system("clear");

	cout << "6. Kiek siandien turejai pamoku?" << endl;
	cin >> pam;
	system("clear");

	cout << "7. Kokia tavo megstamiausia pamoka?" << endl;
	cin >> megpam;
	system("clear");

	cout << "Tavo vardas " << vrd << " " << pvrd << endl;
	cout << "Tu mokiniesi " << kl << kl1 << " Klaseje" << endl;
	cout << "Ir tau yra " << met << " metu" << endl;
	cout << "Siandien turejai " << pam << " pamokas" << endl;
	cout << "Tavo megstamiausia pamoka yra " << megpam << endl;

	return 0;
}