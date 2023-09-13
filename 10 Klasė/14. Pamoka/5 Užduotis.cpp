//Paskola (37 psl.)
#include <iostream>
using namespace std;

int main()
{
    int s, k, n, t, m; //kintamieji

    cout << "s: ";
    cin >> s;

    cout << "k: ";
    cin >> k;

    cout << "n: ";
    cin >> n;

    cout << "t: ";
    cin >> t;

    cout << "m: ";
    cin >> m; //ivedimai

    if (s * n + k < t + m)
    {
        cout << "Bankas suteiks paskola"; //spausdiname ats
    }
    else
    {
        cout << "Bankas paskolos nesuteiks"; //spausdiname ats
    }

    return 0;
}