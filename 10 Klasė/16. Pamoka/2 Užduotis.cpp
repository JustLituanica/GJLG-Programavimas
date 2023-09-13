//Autobusas (41 psl.)
#include <iostream>
using namespace std;

int main()
{
    int t1, t2, t; //kintamieji

    cout << "t1: ";
    cin >> t1;

    cout << "t2: ";
    cin >> t2;

    cout << "t: ";
    cin >> t; //ivedimai

    if (t - t1 > 0)
    {
        cout << "Keleivis spes nueiti i autobusa"; //if sakinys
    }
    else if (t - t2 > 0)
    {
        cout << "Keleivis spes nubegti i autobusa";
    }
    else
    {
        cout << "Keleivis nespes i autobusa"; //else sakiniai
    }

    return 0;
}