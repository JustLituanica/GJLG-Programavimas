//Savarankisko darbo pradzios laikas (22 psl.)
#include <iostream>
using namespace std;

int main()
{
    int v, m, k, n, vs, ms; //kintamieji

    cout << "Kie kvalandu rode laikrodis? ";
    cin >> v;

    cout << "Kiek minuciu rode laikrodis? ";
    cin >> m;

    cout << "Kiek minučių mokiniai skyrė kartojimo užduotims? ";
    cin >> k;

    cout << "Kiek minučių buvo skirta naujų dalykų aiškinimuisi? ";
    cin >> n; //ivedimai

    vs = (((m + k + n) / 60) + v);
    ms = (v * 60 + (m + k + n)) % 60; //atsakymo skaiciavimas

    cout << "Savarankiskas darbas prasidejo " << vs << " val. " << ms << " min.";
    //spausdinamas atsakymas

    return 0;
}