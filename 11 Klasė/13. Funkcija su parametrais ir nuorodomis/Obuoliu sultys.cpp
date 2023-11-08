#include <iostream>
#include <fstream>

using namespace std;

const char CDfv[] = "Duomenys.txt";
const char CRfv[] = "Rezultatai.txt";

void Spausdinti(int litraiPenki, int litraiDu, int litraiViens);

int main()
{
    ofstream fr(CRfv);
    ifstream fd(CDfv);

    int n, l;
    fd >> n;
    
    for (int i = 0; i < n; i++)
    {
        int litraiPenki = 0, litraiDu = 0, litraiViens = 0;
        fd >> l;

        while (l >= 5){
            litraiPenki++;
            l = l - 5;
        }while (l >= 2){
            litraiDu++;
            l = l - 2;
        }while (l >= 1){
            litraiViens++;
            l = l - 1;
        }
        Spausdinti(litraiPenki, litraiDu, litraiViens);
    }

    return 0;
}

void Spausdinti(int litraiPenki, int litrai2, int litraiViens)
{
    ofstream fr(CRfv, ios::app);
    fr << litraiPenki << " " << litraiDu << " " << litraiViens << endl;
}
