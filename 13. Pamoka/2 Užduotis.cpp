//Melaginga zinia (36 psl.)
#include <iostream>
using namespace std;

const double g = 0.83; //konstanta

int main()
{
	double k, t; //kintamieji
	
	cout << "k: ";
	cin >> k;

	cout << "t: ";
	cin >> t; //ivedimai

	if (k * 100 * g <= t * 1000000)
	{
		cout << "Monetos i masinos priekaba tilps";//spausdinamas ats
	}
	else
	{
		cout << "Monetos i masinos priekaba netilps"; //spausdinamas ats
	}

	return 0;
}