
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const char CDfva[] = "DuomenysA.txt";
const char CDfvb[] = "DuomenysB.txt";
const char CRfv[] = "Rezultatai.txt";

const int CMax = 30;
const int CPav = 20;

struct Sportininkas
{
    string pav;
    int laikas;
};

void Skaityti(const char fv[], Sportininkas A[], int &n);
void Spausdinti(Sportininkas A[], int n);
void Rikiuoti(Sportininkas A[], int n);
void Atrinkti(Sportininkas A[], int n, Sportininkas B[], int & m);

int main()
{
    Sportininkas A[CMax];
    Sportininkas B[CMax];
    int n;
    int m = 0;

    Skaityti(CDfva, A, n);
    Rikiuoti(A, n);
    Atrinkti(A, n, B, m);

    Skaityti(CDfvb, A, n);
    Rikiuoti(A, n);
    Atrinkti(A, n, B, m);

    Rikiuoti(B, m);

    Spausdinti(B, m);

    return 0;
}

void Skaityti(const char fv[], Sportininkas A[], int& n)
{
    ifstream fd(fv);

    int min, sek;
    char eil[CPav + 1];

    fd >> n;

    fd.ignore(80, '\n');

    for (int i = 0; i < n; i++)
    {
        fd.get(eil, CPav);
        A[i].pav = eil;

        fd >> min >> sek;
        fd.ignore(80, '\n');

        A[i].laikas = min * 60 + sek;
    }

    fd.close();
}

void Spausdinti(Sportininkas A[], int n)
{
    ofstream fr(CRfv);

    fr << "             Begiku sarasas" << endl;
    fr << "=========================================" << endl;
    fr << "Vardas ir            Parodytas    Begimo " << endl;
    fr << "pavarde              laikas       takelis" << endl;
    fr << "=========================================" << endl;

    for (int i = 0; i < n; i++)
    {
        fr << setw(20) << left << A[i].pav << " "
            << A[i].laikas / 60 << " : "
            << A[i].laikas % 60 << "   "
            << "       " << n - i << endl;
    }

    fr << "=========================================" << endl;

    fr.close();
}

void Rikiuoti(Sportininkas A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[j].laikas < A[i].laikas)
            {
                Sportininkas sp = A[i];
                A[i] = A[j];
                A[j] = sp;
            }
        }
    }
}

void Atrinkti(Sportininkas A[], int n, Sportininkas B[], int& m)
{
    for (int i = 0; i < n / 2; i++)
    {
        B[m] = A[i];
        m++;
    }
}