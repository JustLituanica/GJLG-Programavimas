//Kalendorius (62 psl.)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(7) << "Pr" << setw(7) << "A" << setw(7) << "T" << setw(7) << "K" << setw(7) << "Pt" << setw(7) << "Š" << setw(7) << "S" << endl;
    //spausdiname lenteles virsu

    for (int i = 1; i <= 31; i++)
    {
        if (i % 7 == 0)
        {
            cout << setw(7) << i << endl;
        }
        else
        {
            cout << setw(7) << i; //spausdiname ats
        }
    }

    return 0;
}