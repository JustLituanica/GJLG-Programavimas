
#include <iostream>
#include <fstream>
using namespace std;

const char CDfv[] = "Duomenys.txt";
const char CRfv[] = "Rezultatai.txt";

void Skaityti();
void Spausdinti();

int main()
{
    int n;

    ifstream fd(CDfv);
    fd >> n;

    for (int i = 0; i < n; i++)
    {
        Skaityti();
    }

    Spausdinti();

    return 0;
}

void Skaityti()
{
    ifstream fd(CDfv);
    
}

void Spausdinti()
{
    ofstream fr(CRfv);

    fr << endl;

    fr.close();
}