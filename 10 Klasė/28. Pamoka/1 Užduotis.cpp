//Sodininkas (75 psl.)
#include <iostream>
using namespace std;

int main()
{
    int m1, m, n, d = 0; //kintamieji

    cout << "m1: ";
    cin >> m1;

    cout << "m: ";
    cin >> m;

    cout << "n: ";
    cin >> n; //ivedimai

    while (n > 0) //...kol medziu daugiau nei 0
    {
        n = n - m1; //skaiciuojame likusius medzius
        m1 = m1 + m; //skaiciuojame medziu kieki kiekviena diena
        d++; //skaiciuojame dienas
    }

    cout << "Sodininkas dirbs " << d << " dienas"; //spausdiname ats

    return 0;
}