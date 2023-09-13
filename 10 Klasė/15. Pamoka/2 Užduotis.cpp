//Olimpinių žaidynių numeris (37 psl.)

#include <iostream>
using namespace std;

int main()
{
    int m, n; //kintamieji

    cout << "m: ";
    cin >> m; //ivedimas


    if ((m - 1896) % 4 == 0) //jei metai olimpiniai
    {
        n = ((m - 1896) / 4) + 1; //skaiciuojamas eiles nr.
        cout << "n: " << n; //spausdinamas ats
    }
    else //jie neolimpiniai
    {
        cout << "Metai neolimpiniai"; //spausdinamas ats
    }

    return 0;
}