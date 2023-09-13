
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const char CDfv[] = "Duomenys.txt";
const char CRfv[] = "Rezultatai.txt";
const int CMax = 300;
const int CPav = 21;

struct Miestas
{
    string pav, valst;
    int kiek;
};

void Skaityti(Miestas A[], int & n);
void Spausdinti(Miestas A[], int n, string pav);
void Atrinkti(Miestas A[], int n, Miestas B[], int & m);
int Yra(Miestas A[], int n, string pav);
void RikiuotiBurbulas(Miestas A[], int n);

int main()
{
    Miestas A[CMax];
    Miestas B[CMax];
    int n, m;

    Skaityti(A, n);
    Atrinkti(A, n, B, m);
    RikiuotiBurbulas(B, m);
    Spausdinti(B, m, "Valstybiu sarasas");

    return 0;
}

void Skaityti(Miestas A[], int& n)
{
    char eil[CPav + 1];

    ifstream fd(CDfv);

    fd >> n;

    fd.ignore(80, '\n');

    for (int i = 0; i < n; i++)
    {
        fd.get(eil, CPav);

        A[i].pav = eil;

        getline(fd, A[i].valst);

        A[i].kiek = 1;
    }

    fd.close();
}

void Spausdinti(Miestas A[], int n, string pav)
{
    ofstream fr(CRfv);

    fr << pav << endl;

    for (int i = 0; i < n; i++)
    {
        fr << setw(15) << A[i].pav
            << setw(15) << A[i].valst
            << setw(6) << A[i].kiek << endl;
    }

    fr.close();
}

void Atrinkti(Miestas A[], int n, Miestas B[], int& m)
{
    m = 0;

    for (int i = 0; i < n; i++)
    {
        int k = Yra(B, m, A[i].valst);

        if (k >= 0)
        {
            B[k].kiek++;
        }
        else 
        {
            B[m] = A[i];
            m++;
        }
    }
}

int Yra(Miestas A[], int n, string pav)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i].valst == pav)
        {
            return i;
        }
    }

    return -1;
}

void RikiuotiBurbulas(Miestas A[], int n)
{
    int c;
    string miest, valst;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (A[j].kiek > A[j - 1].kiek)
            {
                c = A[j].kiek;
                A[j].kiek = A[j - 1].kiek;
                A[j - 1].kiek = c;

                miest = A[j].pav;
                A[j].pav = A[j - 1].pav;
                A[j - 1].pav = miest;

                valst = A[j].valst;
                A[j].valst = A[j - 1].valst;
                A[j - 1].valst = valst;
            }
        }
    }
}