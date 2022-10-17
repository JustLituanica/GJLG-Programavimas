//Lektuvas (20 psl.) Matavimo smulkinimas ir stambinimas

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, v, m; //kintamieji

    cout << "Kelinta valanda pakilo lektuvas? ";
    cin >> a;

    cout << "Kelinta minute pakilo lektuvas? ";
    cin >> b;

    cout << "Kiek minuciu ore praleido lektuvas? ";
    cin >> c; //ivedimai

    m = (b + c) % 60;
    v = a + ((b + c)) / 60;
    v = v % 24; //skaiciuojam atsakyma

    cout << "Lektuvas leisis " << v << " valanda ir " << m << " minute"; //atsakymas

    return 0;
}
