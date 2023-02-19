//Susikertancios tieses (61 psl.)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x1, y1, x2, y2; //kintamieji

    cout << "x1: ";
    cin >> x1;

    cout << "x2: ";
    cin >> x2; //ivedimai

    cout << "x" << setw(5) << "y1" << setw(5) << "y2" << endl; //lenteles virsus
 
    for (x1; x1 <= x2; x1++)
    {
        y1 = 2 * x1 + 2;
        y2 = 3 * x1 + 1; //skaiciuojami ats

        cout << x1 << setw(5) << y1 << setw(5) << y2;

        if (y1 == y2)
        {
            cout << setw(10) << "susikerta" << endl;
        }
        else
        {
            cout << setw(5) << "***" << endl; //spausdinami ats
        }
    }
    
    return 0;
}