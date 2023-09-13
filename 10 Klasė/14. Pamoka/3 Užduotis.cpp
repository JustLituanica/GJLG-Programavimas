//Tarakono greitis (36 psl.)
#include <iostream>
using namespace std;

int main()
{
    int s, c, v; //kintamieji

    cout << "s: ";
    cin >> s;

    cout << "c: ";
    cin >> c;

    cout << "v: ";
    cin >> v; //ivedimai

    if (s * c / 100 < v)
    {
        cout << "Muse greitesne uz tarakona"; //spausdinamas ats
    }
    else
    {
        cout << "Tarakonas greitesnis uz muse"; //spausdinamas ats
    }

    return 0;
}