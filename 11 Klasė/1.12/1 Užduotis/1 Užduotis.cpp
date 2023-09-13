
#include <iostream>
#include <fstream>
using namespace std;

const char CDfv[] = "Duomenys.txt";
const char CRfv[] = "Rezultatai.txt";

void Skaityti(int A[]);
void Spausdinti(int A[]);

int main()
{
    int A[100];

    Skaityti(A);
    Spausdinti(A);

    return 0;
}

void Skaityti(int A[])
{
    int n, nr;

    ifstream fd(CDfv);

    for (int i = 0; i < 100; i++)
    {
        A[i] = 0;
    }

    fd >> n;

    for (int j = 0; j < n; j++)
    {
        fd >> nr;
        A[nr] = A[nr] + 1;
    }
    fd.close();
}

void Spausdinti(int A[])
{
    ofstream fr(CRfv);
    
    for (int i = 0; i < 100; i++)
    {
        if (A[i] > 1)
        {
            for (int j = 1; j <= A[i] - 1; j++)
            {
                fr << i << " ";
            }
        }
    }
    fr.close();
}