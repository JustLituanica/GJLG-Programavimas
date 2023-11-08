#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const char CRfv[] = "Rezultatai.txt";
void Uzduotis();

int main()
{
    Uzduotis();
    return 0;
}

void Uzduotis()
{
    ofstream fr(CRfv);

    fr << "Metrai | " << "Coliai | " << "Pedos | " << "Jardai" << endl;

    for (double i = 1; i <= 5; i++)
    {
        double coliai = i * 100 / 2.54;
        double pedos = coliai / 12;
        double jardai = pedos / 3;

        fr << i << setprecision(4) << coliai << setprecision(3) << pedos << setprecision(3) << jardai << endl;
    }
}
