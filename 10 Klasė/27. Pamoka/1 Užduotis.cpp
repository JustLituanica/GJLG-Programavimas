//Sieninis laikrodis (75 psl.)
#include <iostream>
using namespace std;

int main()
{
    int s, s1, d = 0;
    int laikas; //kintamieji

    cout << "s: ";
    cin >> s;

    cout << "s1: ";
    cin >> s1; //ivedimai

    laikas = 15 * 60; //skaiciuojam sekundes 15 minuciu
    while (laikas > 0)
    {
        laikas = laikas - s - (s1 * d);
        d++; //skaiciuojam dienu skaiciu
    }

    cout << "15 minuciu laikrodis veluos po " << d << " dienu"; //spausdinam ats

    return 0;
}