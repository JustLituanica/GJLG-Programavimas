
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const char CDfv[] = "Duomenys.txt";
const char CRfv[] = "Rezultatai.txt";
const int CMax = 30;
const int CPav = 20;

struct Preke
{
    string pav;
    string tiekejas;
    int kiekis;
    int kaina;

    int suma;
};

void Skaityti(Preke A[], int & n);
void Spausdinti(Preke A[], int n, string komentaras, Preke B[]);
void Suma(Preke A[], int n);
void Rikiuoti(Preke A[], int n);
void Brangiausia(Preke A[], int n, Preke B[]);

int main()
{
    Preke A[CMax];
    Preke B[CMax];
    int n = 1;

    Skaityti(A, n);

    Suma(A, n);
    Brangiausia(A, n, B);

    Rikiuoti(A, n);

    Spausdinti(A, n, "Maxima", B);

    return 0;
}

void Skaityti(Preke A[], int& n)
{
    ifstream fd(CDfv);

    char eil[CPav + 1];

    fd.ignore(80, '\n');

    while (!fd.eof())
    {
        fd.ignore(80, '\n');
        n++;
    }
    fd.close();

    fd.open(CDfv);

    for (int i = 0; i < n; i++)
    {
        fd.get(eil, CPav);
        A[i].pav = eil;

        fd >> ws;

        fd.get(eil, CPav);
        A[i].tiekejas = eil;

        fd >> A[i].kiekis >> A[i].kaina;

        fd.ignore(80, '\n');
    }

    fd.close();
}

void Spausdinti(Preke A[], int n, string komentaras, Preke B[])
{
    ofstream fr(CRfv);

    fr << "================================================" << endl;
    fr << komentaras << endl;
    fr << "Prekes pav.        Kiekis     Kaina     Suma    " << endl;
    fr << "================================================" << endl;

    for (int i = 0; i < n; i++)
    {
        fr << setw(20) << left << A[i].pav << " "
            << setw(10) << A[i].kiekis << setw(10) << A[i].kaina << A[i].suma << endl;
    }

    fr << "================================================" << endl;

    fr << "Brangiausia sio tiekejo preke: " << B[0].pav << endl;
    fr << "Sios prekes parduotuveje yra: " << B[0].kiekis << " vienetu" << endl;

    fr << "================================================" << endl;

    fr.close();
}

void Suma(Preke A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        A[i].suma = A[i].kiekis * A[i].kaina;
    }
}

void Rikiuoti(Preke A[], int n)
{
    int kaina, kiekis, suma;
    string pav, tiekejas;

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (A[j].kaina < A[j - 1].kaina)
            {
                kaina = A[j].kaina;
                A[j].kaina = A[j - 1].kaina;
                A[j - 1].kaina = kaina;

                kiekis = A[j].kiekis;
                A[j].kiekis = A[j - 1].kiekis;
                A[j - 1].kiekis = kiekis;

                suma = A[j].suma;
                A[j].suma = A[j - 1].suma;
                A[j - 1].suma = suma;

                pav = A[j].pav;
                A[j].pav = A[j - 1].pav;
                A[j - 1].pav = pav;

                tiekejas = A[j].tiekejas;
                A[j].tiekejas = A[j - 1].tiekejas;
                A[j - 1].tiekejas = tiekejas;
            }

            else if (A[j].kaina == A[j - 1].kaina && A[j].pav < A[j - 1].pav)
            {
                kaina = A[j].kaina;
                A[j].kaina = A[j - 1].kaina;
                A[j - 1].kaina = kaina;

                kiekis = A[j].kiekis;
                A[j].kiekis = A[j - 1].kiekis;
                A[j - 1].kiekis = kiekis;

                suma = A[j].suma;
                A[j].suma = A[j - 1].suma;
                A[j - 1].suma = suma;

                pav = A[j].pav;
                A[j].pav = A[j - 1].pav;
                A[j - 1].pav = pav;

                tiekejas = A[j].tiekejas;
                A[j].tiekejas = A[j - 1].tiekejas;
                A[j - 1].tiekejas = tiekejas;
            }
        }
    }

}

void Brangiausia(Preke A[], int n, Preke B[])
{
    int max = 0;
    int indeksas;

    for (int i = 0; i < n; i++)
    {
        if (A[i].kaina > max)
        {
            max = A[i].kaina;

            B[0].pav = A[i].pav;
            B[0].kaina = A[i].kaina;
            B[0].kiekis = A[i].kiekis;
        }
    }
}