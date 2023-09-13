#include <iostream>
#include <fstream>

using namespace std;

const char CDfv[] = "Duomenys.txt";
const char CRfv[] = "Rezultatai.txt";

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
    int k = 0;
    char s1, s2;

    s1 = ' ';

    ifstream fd(CDfv);

    while (!fd.eof())
    {
        fd.get(s2);
        if (!fd.eof() && (s1 == '/') && (s2 == '/'))
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