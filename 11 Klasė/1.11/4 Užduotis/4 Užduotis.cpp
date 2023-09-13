
#include <iostream>
#include <fstream>

using namespace std;

const char CDfv[] = "Duomenys.txt";
const char CRfv[] = "Rezultatai.txt";

int Kiek(char sim);
void Spausdinti(int raides, int skaiciai, int tarpai, int simboliai);

int main()
{
    int skaiciai = 0, raides = 0;
    int tarpai, simboliai = 0;

    for (char sim = 'a'; sim <= 'z'; sim++)
    {
        raides = raides + Kiek(sim);
    }

    for (char sim = '1'; sim <= '9'; sim++)
    {
        skaiciai = skaiciai + Kiek(sim);
    }

    tarpai = Kiek(' ');

    simboliai = simboliai + Kiek('.');
    simboliai = simboliai + Kiek(',');
    simboliai = simboliai + Kiek('-');
    simboliai = simboliai + Kiek('(');
    simboliai = simboliai + Kiek(')');

    Spausdinti(raides, skaiciai, tarpai, simboliai);

    return 0;
}

int Kiek(char sim)
{
    char s;
    int k = 0;

    ifstream fd(CDfv);

    while (!fd.eof())
    {
        fd.get(s);
        if (!fd.eof() && s == sim)
        {
            k++;
        }
    }

    return k;
}

void Spausdinti(int raides, int skaiciai, int tarpai, int simboliai)
{
    ofstream fr(CRfv);

    fr << "Raidziu yra: " << raides << endl;
    fr << "Skaitmenu yra: " << skaiciai << endl;
    fr << "Tarpo simboliu yra: " << tarpai << endl;
    fr << "Kitokiu simboliu yra: " << simboliai;

    fr.close();
}