//Egle zalciu karaliene (45 psl.)
#include <iostream>
using namespace std;

int main()
{
    int u1, u2, u3; //kintamieji

    cout << "u1: ";
    cin >> u1;

    cout << "u2: ";
    cin >> u2;

    cout << "u3: ";
    cin >> u3; //ivedimai

    if (u1 == 1 && u2 == 1 && u3 == 1) //if sakinys
    {
        cout << "Zilvinas Egle namu aplankyti isleis";
    }
    else
    {
        cout << "Zilvinas Egles aplankyti namu neisleis"; //spausdinamas ats
    }

    return 0;
}