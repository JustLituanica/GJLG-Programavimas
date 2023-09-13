//Automobiliai (37 psl.)

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double v1, v2, m; //kintamieji
    double ats; //tarpinis kintamasis ats skaiciuoti

    cout << "v1: ";
    cin >> v1;

    cout << "v2: ";
    cin >> v2;

    cout << "m: ";
    cin >> m; //ivedimai

    ats = (v1 + v2) / 60 * m; //skaiciuojamas atstumas

    cout << "Atstumas tarp automobiliu bus lygus " << fixed << setprecision(1) << ats << " km." << endl;
    //spausdinamas ats

    if (ats < 100) //jei atstumas mazesnis uz 100 km
    {
        cout << "Sis atstumas mazesnis uz 100 kilometru"; //spausdinamas ats
    }
    else
    {
        cout << "Sis atstumas didesnis uz 100 kilometru"; //spausdinamas ats
    }

    return 0;
}