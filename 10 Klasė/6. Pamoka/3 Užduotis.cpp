// Dovanos
#include <iostream>
using namespace std;

int main()
{
	int n, k, v, d, m;

	cout << "Kiek dovanu nupirko kaledu senis? ";
	cin >> n;

	cout << "Kiek seimu aplanke senis? ";
	cin >> k;

	cout << "Kiek geriausiu vaiku rado senelis? ";
	cin >> v;

	d = (n - k) / v;
	m = (n - k) % v;

	cout << "Geriausi vaikai gavo po " << d << " dovanas" << endl;
	cout << m << " dovanos liko neisdalintos" << endl;

	return 0;
}