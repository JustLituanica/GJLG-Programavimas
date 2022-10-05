// Bulvės
#include <iostream>
using namespace std;

int main()
{
	int n, m, k, d, a;

	cout << "Kiek per diena prikasa maisu? ";
	cin >> n;

	cout << "Kiek is lauko parveza maisu? ";
	cin >> m;

	cout << "Po kiek dienu baige kasti bulves? ";
	cin >> k;

	d = ((n - m) * k) / m;
	a = ((n - m) * k) % m;

	cout << "Bulves suves per " << d << " dienas" << endl;
	cout << "Bulviu gaus " << a << " talkininkas";
 

	return 0;
}