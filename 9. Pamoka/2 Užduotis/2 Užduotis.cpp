//Vandens saugykla (25 psl.)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double v, p, vv;
    int n; //kintamieji

    cout << "Kiek vandens yra saugykloje? ";
    cin >> v;

    cout << "Kiek zmoniu vartoja saugyklos vandeni? ";
    cin >> n;

    cout << "Kiek vandens vidutiniskai suvartoja vienas zmogus? ";
    cin >> vv; //ivedimai

    p = v / (n * vv); //skaiciuojamas ats

    cout << "Vandens uzteks " << fixed << setprecision(2) << p << " paroms"; //spausdinamas ats

    return 0;
}
