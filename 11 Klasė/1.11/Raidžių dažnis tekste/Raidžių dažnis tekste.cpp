#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

const char CDfv[] = "Duomenys.txt";
const char CRfv[] = "Rezultatai.txt";
const int CMax = 256;

int Kiek(char sim);
void Spausdinti(char S[], int A[], int n);

int main()
{
    char S[CMax]; //raidžių masyvas
    int A[CMax]; //raidžių pasikartojimo skaičiai
    int n = 0; //raidžių kiekis

    for (char sim = 'a'; sim <= 'z'; sim++)
    {
        S[n] = sim;
        A[n] = Kiek(sim);
        n++;
    }

    S[n] = 'ą'; A[n] = Kiek('ą'); n++;
    S[n] = 'č'; A[n] = Kiek('č'); n++;
    S[n] = 'ę'; A[n] = Kiek('ę'); n++;
    S[n] = 'ė'; A[n] = Kiek('ė'); n++;
    S[n] = 'į'; A[n] = Kiek('į'); n++;
    S[n] = 'š'; A[n] = Kiek('š'); n++;
    S[n] = 'ų'; A[n] = Kiek('ų'); n++;
    S[n] = 'ū'; A[n] = Kiek('ū'); n++;
    S[n] = 'ž'; A[n] = Kiek('ž'); n++;

    Spausdinti(S, A, n);

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
        if (!fd.eof() && (tolower(s) == sim))
        {
            k++;
        }
    }

    fd.close();
    return k;
}

void Spausdinti(char S[], int A[], int n)
{
    char Snera[CMax];
    int j = 0;

    ofstream fr(CRfv);

    fr << endl;
    fr << "======== Raides esancios sarase ========";
    fr << endl << endl;

    for (int i = 0; i < n; i++)
    {
        if (A[i] != 0)
        {
            fr << S[i] << " " << setw(2) << A[i] << "    ";
            if ((j + 1) % 5 == 0) //spausdiname 5 raides eilutėje
            {
                fr << endl;
            }
            j++;
        }
        else if (A[i] == 0)
        {
            Snera[i] = S[i];
        }
    }

    fr << endl << endl;
    fr << "======== Raides kuriu nera sarase ========";
    fr << endl << endl;

    j = 0;

    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0)
        {
            fr << Snera[i] << "  " << setw(2) << A[i] << "    ";
            if ((j + 1) % 5 == 0) //spausdiname 5 raides eilutėje
            {
                fr << endl;
            }
            j++;
        }
    }
    fr.close();
}