//Puodeliu pakavimas (21 psl.)
#include <iostream>
using namespace std;

int main()
{
    int p, m, k, n; //kintamieji

    cout << "Keli puodeliai telpa i dezute? ";
    cin >> p;

    cout << "Kelis puodelius reikia supakuoti? ";
    cin >> m; //ivedimai

    k = m / p;
    m = m % p; //skaiciuojam

    cout << "Bus pilnos " << k << " dezutes" << endl;
    cout << "Liks nesupakuoti " << m << " puodeliai"; //spausdinam ats

    return 0;
}
