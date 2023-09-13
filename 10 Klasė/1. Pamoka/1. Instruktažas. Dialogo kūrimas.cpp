// Dialogo kurimas
#include <iostream>
using namespace std;

int main() {

	string vardas, miestas, pamoka, akys, mokykla, dainininkas, filmas, sekme, maistas, ats; // apsirasome kintamuosius

	cout << "1. Koks tavo vardas?" << endl; // Prasome ivesti kintamaji
	cin >> vardas;                          // ivedam kintamaji

	cout << "2. Kokiame mieste gyveni?" << endl; // Prasome ivesti kintamaji
	cin >> miestas;                              // ivedam kintamaji

	cout << "3. Kokia tavo megstamiausia pamoka?" << endl;  // Prasome ivesti kintamaji
	cin >> pamoka; // ivedam kintamaji

	cout << "4. Kokios spalvos tavo akys?" << endl; // Prasome ivesti kintamaji
	cin >> akys;                                    // ivedam kintamaji

	cout << "5. Kokioje mokykloj mokiniesi?" << endl; // Prasome ivesti kintamaji
	cin >> mokykla;                                   // ivedam kintamaji

	cout << "6. Koks tavo megstamiausias dainininkas?" << endl;// Prasome ivesti kintamaji
	cin >> dainininkas; // ivedam kintamaji

	cout << "7. Koks tavo megstamiausias filmas?" << endl;  // Prasome ivesti kintamaji
	cin >> filmas; // ivedam kintamaji

	cout << "8. Kaip sekasi mokykloje?" << endl; // Prasome ivesti kintamaji
	cin >> sekme;                                // ivedam kintamaji

	cout << "9. Koki patiekala labiausiai megsti?" << endl;   // Prasome ivesti kintamaji
	cin >> maistas; // ivedam kintamaji

	cout << "10. Ar patinka matematika?" << endl; // Prasome ivesti kintamaji
	cin >> ats;                                   // ivedam kintamaji

	// atsakome i klausimus ↓↓↓↓↓↓
	cout << vardas << " yra nuostabus vardas" << endl;
	cout << "Girdejau, kad " << miestas << " gyveni geri mokiniai" << endl;
	cout << "Geras, man irgi patinka " << pamoka << endl;
	cout << "Manau, kad tavo akys (" << akys << ") yra grazios" << endl;
	cout << mokykla << " isleidzia daug geru mokiniu" << endl;
	cout << dainininkas << " gerai dainuoja" << endl;
	cout << "Dar neziurejau filmo " << filmas << endl;
	cout << "Keista, kad tau mokykloje " << sekme << " (sekasi)" << endl;
	cout << maistas << " tikrai skanus patiekalas" << endl;
	cout << "Matematika ir man " << ats << " (patinka)";
	// atsakome i klausimus ^^^^^

	return 0;
}