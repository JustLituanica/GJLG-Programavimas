//Pervežimai (37 psl.)
#include <iostream>

using namespace std;

int main()
{
    double n, m, k1;
    int k; //kintamieji

    cout << "n: ";
    cin >> n;

    cout << "m: ";
    cin >> m; //ivedimai

    k = n / 14;
    k1 = n / 14; //dalinam su reliuoju ir sveikuoju skaiciais

    if (k1 > k) //jei lieka skaiciu po kablelio tai prie realiojo skaiciaus...
    {
        k++; //(k = k + 1) ...pridedame vieną
    }

    cout << "k: " << k; //spausdinamas ats

    return 0;
}