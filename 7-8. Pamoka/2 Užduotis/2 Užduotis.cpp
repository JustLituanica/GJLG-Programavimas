//Skaiciaus formavimas is skaitmenu (19 psl.)
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, p; //kintamieji

    cout << "Ivesk a: ";
    cin >> a;

    cout << "Ivesk b: ";
    cin >> b;

    cout << "Ivesk c: ";
    cin >> c;

    cout << "Ivesk d: ";
    cin >> d;

    cout << "Ivesk e: ";
    cin >> e; //ivedimai

    p = (a * 10000) + (b * 1000) + c * (100 + d) * (10 + e); //skaiciuojam ats

    cout << "Penkiazenklis skaicius: " << p; //atsakymas

    return 0;
}