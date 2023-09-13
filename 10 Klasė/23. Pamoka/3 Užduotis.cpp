//Autobusas (68 psl.)
#include <iostream>
using namespace std;

int main()
{
	int n, k, m, kv = 0; //kintamieji

	cout << "Kiek autobusu vaziavo? ";
	cin >> n;

	cout << "Kiek keleioviu veza autobusas? ";
	cin >> k;

	cout << "Kiek daugiau keleiviu veza autobusas negu pries tai buves? ";
	cin >> m; //ivedimai

	for (int i = 0; i < m; i++)
	{
		kv = kv + k;
		k = k + m; //skaiciuojam ats
	}

	cout << n << " autobusai perveze " << kv << " keleiviu";
	//spausdinam ats

	return 0;
}