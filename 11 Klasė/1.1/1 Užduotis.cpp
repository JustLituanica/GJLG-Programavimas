//Gimtadienis
#include <iostream>
using namespace std;

int main()
{
    double d, s, r, g, k;

    cout << "Kiek bendru draugu turi dvynukai? ";
    cin >> d;

    cout << "Kiek savo draugu nori pakviesti Saulius? ";
    cin >> s;

    cout << "Kiek savo draugu nori pakviesti Ramune? ";
    cin >> r;

    cout << "Kiek litu gimtadieniui sutaupe vaikai? ";
    cin >> g;


    k = g / (d + s + r);

    cout << “Kiekvienam sveciui vaikai gali skirti po ” << k << “ litu” << endl;

    return 0;
}
