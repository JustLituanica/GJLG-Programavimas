//Antrokų pamokos (66 psl.)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double n, p, ats = 0;//kintamieji

	cout << "Kiek savaites dienu? ";
	cin >> n; //ivedimas

	for (int i = 0; i < n; i++)
	{
		cout << "p: ";
		cin >> p; //ivedimas
		ats = ats + p; //atsakymo skaiciavimas
	}

	cout << "Per " << n << " savaites dienas antrokams buvo " << ats << " pamoku" << endl;
	cout << "Vidutiniskai per diena buna " << setprecision(2) << ats / n << " pamokos";
	//atsakymo spausdinimas

	return 0;
}