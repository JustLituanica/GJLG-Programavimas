
#include <iostream>
using namespace std;

int main()
{
    int kt, kv, km, gt, gv, gm;
    int i = 0;

    cout << "Tigras atsiliko: ";
    cin >> kt;

    cout << "Vilkas atsiliko: ";
    cin >> kv;

    cout << "Mokytojas atsiliko: ";
    cin >> km;

    cout << "Tigro greitis: ";
    cin >> gt;

    cout << "Vilko greitis: ";
    cin >> gv;

    cout << "Mokytojo greitis: ";
    cin >> gm;

    while ((i <= 8) && (kt >= 0) && (kv >= 0) && (km >= 0))
    {
        kt = kt - gt + 1;
        kv = kv - gv + 1;
        km = km - gm + 1;
        i++;
    }

    if (kt <= 0)
    {
        cout << "Tigras pavijo" << endl;
    }
    else
    {
        cout << "Tigras nepavijo" << endl;
    }

    if (kv <= 0)
    {
        cout << "Vilkas pavijo" << endl;
    }
    else
    {
        cout << "Vilkas nepavijo" << endl;
    }

    if (km <= 0)
    {
        cout << "Mokytojas pavijo" << endl;
    }
    else
    {
        cout << "Mokytojas nepavijo" << endl;
    }

    if (kt > 0 && kv > 0 && km > 0)
    {
        cout << "Niekas nepavijo";
    }

    return 0;
}