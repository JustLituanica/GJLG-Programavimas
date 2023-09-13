//Keleiviai (26 psl.)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double kvid, a, k, m; //kintamieji

    cout << "Autobusų, vykstančių maršrutu Panevėţys-Kaunas, skaičius: ";
    cin >> a;

    cout << "Keleivių, įlipančių į maršruto Panevėţys-Kaunas autobusus, skaičius: ";
    cin >> k;

    cout << "Keleivių, išlipančių ne Kaune, skaičius: ";
    cin >> m; //ivedimai

    kvid = (k - m) / a; //atsakymo skaiciavimas

    cout << "Vidutiniškai vienu autobusu iš Panevėţio į Kauną vyksta " << fixed << setprecision(0) << kvid << " keleiviai";
    //atsakymo spausdinimas

    return 0;
}