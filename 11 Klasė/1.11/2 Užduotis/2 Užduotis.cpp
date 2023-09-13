#include <iostream>
#include <fstream>

using namespace std;

const char CDfv[] = "Duomenys.txt";
const char CRfv[] = "Rezultatai.txt";
const int CMax = 100;

int Kiek();
void Spausdinti(int ats);

int main()
{
    int ats;

    ats = Kiek();
    Spausdinti(ats);

    return 0;
}

int Kiek()
{
    char s1, s2;
    int k = 0;

    ifstream fd(CDfv);

    s1 = ' ';

    while (!fd.eof())
    {
        fd.get(s2);
        if (!fd.eof() && s1 == 'a' && s2 == 'u')
        {
            k++;
        }
        s1 = s2;
    }
    return k;
}

void Spausdinti(int ats)
{
    ofstream fr(CRfv);

    fr << ats;

    fr.close();
}