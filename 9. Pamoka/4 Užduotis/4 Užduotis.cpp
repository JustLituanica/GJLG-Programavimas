//Medaus kainos (26 psl.)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, aa, bb, cc, n, s; //kintamieji

    cout << "Kiek kainuoja liepu medus? ";
    cin >> a;

    cout << "Kiek kainuoja grikiu medus? ";
    cin >> b;

    cout << "Kiek kainuoja rapsu medus? ";
    cin >> c;

    cout << "Kiek kilogramu liepu medaus pirko Regina? ";
    cin >> aa;

    cout << "Kiek kilogramu grikiu medaus pirko Regina? ";
    cin >> bb;

    cout << "Kiek kilogramu rapsu medaus pirko Regina? ";
    cin >> cc;

    cout << "Kokia nuolaida pritaike pardavejas? ";
    cin >> n; //ivedimai

    s = ((a * aa) + (b * bb) + (c * cc)) - n; //skaicuojamas ats

    cout << "Regina sumokes " << fixed << setprecision(2) << s << " Eur"; //spausdinamas ats

    return 0;
}
