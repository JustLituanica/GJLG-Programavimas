#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const char CDfv[] = "Duomenys.txt";
const char CRfv[] = "Rezultatai.txt";
const int CMax = 256;

int Kiek(int sk);
void Spausdinti(char S[], int A[], int n);

int main()
{
    char S[CMax]; //Skaiciu masyvas
    int A[CMax]; //Skaiciu kiekis
    int n = 0;

    for (char sk = '0'; sk <= '9'; sk++)
    {
        S[n] = sk;
        A[n] = Kiek(sk);
        n++;
    }

    Spausdinti(S, A, n);

    return 0;
}

int Kiek(int sk)
{
    char s;
    int k = 0;

    ifstream fd(CDfv);

    while (!fd.eof())
    {
        fd.get(s);
        if (!fd.eof() && s == sk)
        {
            k++;
        }
    }
    return k;
}

void Spausdinti(char S[], int A[], int n)
{
    ofstream fr(CRfv);

    fr << "===== Rezultatai =====" << endl;

    for (int i = 0; i < n; i++)
    {
        fr << S[i] << " " << A[i] << endl;
    }

    fr.close();
}