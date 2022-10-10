// Sodininkas (19 psl.)
#include <iostream>
using namespace std;

int main()
{
	int n, m, d, k, a;

	cout << "Kiek deziu prirenka sodininkas? ";
	cin >> n;

	cout << "Kiek deziu nuveza i turgu? ";
	cin >> m;

	cout << "Kiek dienu vaziavo i turgu? ";
	cin >> d;

	k = ((n - m) * 4) / m;
	a = ((n - m) * 4) % m;

	cout << "Liko " << k << " pilnu didesniu deziu" << endl;
	cout << "Liko " << a << " mazesniu, nesupakuotu deziu";

	return 0;
}