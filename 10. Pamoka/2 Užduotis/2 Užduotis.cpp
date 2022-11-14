//Knygos (26 psl.)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double kvid, n, k; //klintamieji

    cout << "Kiek skaitytoju? ";
    cin >> n;

    cout << "Kiek perskaitytu knygu? ";
    cin >> k; //ivedimai

    kvid = k / n; //ats skaiciavimas

    cout << "Vidutiniskai vienas skaitytojas perskaito po " << fixed << setprecision(3
    ) << kvid << " knygas"; //atsakymo spausdinimas


    return 0;
}