//Kurmio daržas (46 psl.)
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d; //kintamieji

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    cout << "d: ";
    cin >> d; //ivedimai

    if ((a == b && c == d) || (a == c && b == d)) //if sakinys
    {
        cout << "Kurmiui zemes sklypo ribas pazymeti pavyks";
    }
    else
    {
        cout << "Kurmiui zemes sklypo ribu pazymeti nepavyks"; //spausdinamas ats
    }

    return 0;
}