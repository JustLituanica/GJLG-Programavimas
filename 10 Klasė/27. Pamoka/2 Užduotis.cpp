//Prekes (75 psl.)
#include <iostream>
using namespace std;

int main()
{
    int p, k, s, n = 0; //kintamieji

    cout << "p: ";
    cin >> p;

    cout << "k: ";
    cin >> k;

    cout << "s: ";
    cin >> s; //ivedimai

    while (s - p >= 0) //skaiciuojame ar galime nusipirkti preke
    {
        s = s - p; //atimame prekes kaina is turimu pinigu
        p = p + k; //skaiciuojam naujos prekes kaina
        n++; //skaiciuojam prekiu skaiciu
    }

    cout << "Pirkejas gales nusipirkti " << n << " prekes"; //spausdiname ats

    return 0;
}