//Darbštuolis (66 psl.)
#include <iostream>
using namespace std;

int main()
{
    int n, p, m = 0; //kintamieji

    cout << "Kiek menesiu dirbo? ";
    cin >> n; //ivedimai

    for (int i = 0; i < n; i++)
    {
        cout << "p: ";
        cin >> p; //ivedimai

        if (p >= 650)
        {
            m++; //skaiciuojam ats
        }
    }

    cout << "Didesni uz 650 euru atlyginima zmogus gavo " << m << " menesi";
    //spausdinam ats;

    return 0;
}