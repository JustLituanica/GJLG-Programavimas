//Kurmio svarstymai (37 psl.)
#include <iostream>
using namespace std;

const double gr = 0.5; //konstanta

int main()
{
    double g, m, n; //kintamieji

    cout << "g: ";
    cin >> g;

    cout << "m: ";
    cin >> m;

    cout << "n: ";
    cin >> n; //ivedimai

    if ((m * 365.25 * gr * (g / 1000) / 1000) < n)
    {
        cout << "Kurmiu vesti Coliuke apsimoka"; //spausdinam ats
    }
    else
    {
        cout << "Kurmiui vesti Coliukes neapsimoka"; //spausdinam ats
    }

    return 0;
}