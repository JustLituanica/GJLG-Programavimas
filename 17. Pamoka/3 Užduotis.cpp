//Dovana (45 psl.)
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

    if (d <= a && d <= b && d <= c) //if sakinys
    {
        cout << "Kamuolys i dezute tilps";
    }
    else
    {
        cout << "Kamuolys i dezute netilps"; //spausdinamas ats
    }

    return 0;
}