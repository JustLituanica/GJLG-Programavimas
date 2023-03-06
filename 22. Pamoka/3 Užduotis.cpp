//Mokinių ūgiai (66 psl.)
#include <iostream>
using namespace std;

int main()
{
    double n, u, uvid = 0; //kintamieji

    cout << "Kiek klasej mokiniu? ";
    cin >> n; //ivedimai

    for (int i = 0; i < n; i++)
    {
        cout << "u: ";
        cin >> u; //ivedimai

        uvid = uvid + u; //ats skaiciavimas
    }

    cout << "Vidutinis klases mokiniu ugis uvid = " << uvid / n << " cm";
    //ats spausdinimas

    return 0;
}