//Trikampio ploto skaičiavimas, kai ţinomi visų kraštinių ilgiai. (29 psl.)
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, pp, s; //kintamieji

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c; //ivedimai

    pp = (a + b + c) / 2;
    s = sqrt(pp * (pp- a) * (pp - b) * (pp - c)); //skaiciuojamas ats

    cout << "Trikampio plotas = " << s << " kvadr. vnt" << endl;
    cout << "Trikampio perimetras = " << pp * 2 << " vnt."; //spausdinamas ats

    return 0;
}