#include <iostream>
#include <fstream>

using namespace std;

const char CDfv[] = "Duomenys.txt";
const char CRfv[] = "Rezultatai.txt";

int Lenteles(int n, int& ats);

int main()
{
    ifstream fd(CDfv);
    ofstream fr(CRfv);

    int n;
    int ats = 0;

    fd >> n;
    fr << Lenteles(n, ats);

    return 0;
}

int Lenteles(int n, int& ats)
{
    while (n > 0)
    {
        if (n <= 9)
        {
            ats = ats++;
            n--;
        }

        else if (n > 9 && n < 100)
        {
            ats = ats + 2;
            n--;
        }
    }
}
