//Prekes (45 psl.)
#include <iostream>
using namespace std;

int main()
{
    int s, r, t, ss, rr, tt; //kintamieji

    cout << "s: ";
    cin >> s;

    cout << "r: ";
    cin >> r;

    cout << "t: ";
    cin >> t;

    cout << "ss: ";
    cin >> ss;

    cout << "rr: ";
    cin >> rr;

    cout << "tt: ";
    cin >> tt; //ivedimai

    if (s <= ss && r <= rr && t <= tt) //if ssakinys
    {
        cout << "Kristina visas prekes isigis vienoje parduotuveje";
    }
    else
    {
        cout << "Kristinai reikes eiti i kita parduotuve"; //spausdinamas ats
    }

    return 0;
}