
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const char CDfv[] = "Duomenys.txt";
const char CRfv[] = "Rezultatai.txt";
const int CMax = 30;

void Skaityti(string A[], int& n);
void Spausdinti(string A[], int n, string komentaras);
void Atrinkti(string A[], int n, string B[]);

int main()
{
    string A[CMax];
    int n;
    string B[CMax];

    ofstream fr(CRfv);
    fr.close();

    Skaityti(A, n);

    Spausdinti(A, n, "Pradiniai duomenys");

    Atrinkti(A, n, B);

    Spausdinti(B, n, "Isrinkti miestai");

    return 0;
}

void Skaityti(string A[], int& n)
{
    ifstream fd(CDfv);

    fd >> n;

    fd.ignore(80, '\n');

    for (int i = 0; i < n; i++)
    {
        getline(fd, A[i]);
    }

    fd.close();
}

void Spausdinti(string A[], int n, string komentaras)
{
    ofstream fr(CRfv, ios::app);

    fr << "===============================" << endl;
    fr << komentaras << endl;
    fr << "===============================" << endl;

    for (int i = 0; i < n; i++)
    {
        if (A[i].length() > 1)
        {
            fr << A[i] << endl;
        }
    }

    fr.close();
}

void Atrinkti(string A[], int n, string B[])
{
    for (int i = 0; i < n; i++)
    {
        if (A[i].find(' ') != -1)
        {
            B[i] = A[i];
        }
    }
}