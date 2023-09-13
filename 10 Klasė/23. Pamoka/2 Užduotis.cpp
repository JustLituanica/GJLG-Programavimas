//Skaitytoja (68 psl.)
#include <iostream>
using namespace std;

int main()
{
	int n, p, m, pv = 0; //kintamieji

	cout << "Kiek dienu skaite knyga? ";
	cin >> n;

	cout << "Kiek puslapiu perskaite pirma diena? ";
	cin >> p;

	cout << "Kiek daugiau puslapiu perskaite sekancia diena? ";
	cin >> m; //ivedimai

	for (int i = 0; i < m; i++)
	{
		pv = pv + p;
		p = p + m; //skaiciuojam ats
	}

	cout << "Per " << n << " dienas Karolina perskaite " << pv << " puslapiu";
	//spausdinam ats

	return 0;
}