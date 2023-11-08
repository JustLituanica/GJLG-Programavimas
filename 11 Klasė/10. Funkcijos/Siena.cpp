#include <iostream>
#include <fstream>

using namespace std;

const char CDfv[] = "Duomenys.txt";
const char CRfv[] = "Rezultatai.txt";

int NaudojamasPlotas(int x1, int y1, int x2, int y2, int& ats);

int main()
{
    ifstream fd(CDfv);
    ofstream fr(CRfv);

    int p, a, n;
    int x1, y1, x2, y2;
    int ats = 0;

    fd >> p >> a >> n;

    int NepanaudotasPlotas = p * a;

    for (int i = 0; i < n; i++)
    {
        fd >> x1 >> y1 >> x2 >> y2;
        NepanaudotasPlotas = NepanaudotasPlotas - NaudojamasPlotas(x1, y1, x2, y2, ats);
    }

    fr << NepanaudotasPlotas;

    return 0;
}

int NaudojamasPlotas(int x1, int y1, int x2, int y2, int& ats)
{
    ats = (x2 - x1) * (y2 - y1);
}
