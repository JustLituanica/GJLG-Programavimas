//Skysčių matavimo vienetai (21 psl.)
#include <iostream>
using namespace std;

int main()
{
    int s, g, k, s1, g1, k1;
    int a, b, c; //kintamieji

    cout << "Saikai: ";
    cin >> s;

    cout << "Gorčiai: ";
    cin >> g;

    cout << "Kvortos: ";
    cin >> k;

    cout << "Kiek saiku vandens ipilama/ispilama? ";
    cin >> s1;

    cout << "Kiek gorciu vandens ipilama/ispilama? ";
    cin >> g1;

    cout << "Kiek kvortu vandens ipilama/ispilama? ";
    cin >> k1; //ivedimai

    c = (k + k1) % 4;
    b = (g + g1) % 6;
    a = (k + k1) + (g + g1) / 6;

    cout << a << b << c << endl; //1 ats

    a = (k - k1) % (g - g1) / 6;
    b = (k + k1) + (g + g1) / 6;
    c = (k - k1) % 4; //skaiciavimai

    cout << a << b << c << endl; //2 ats

    return 0;
}