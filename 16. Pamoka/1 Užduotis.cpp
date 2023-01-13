//Staigmena (41 psl.)
#include <iostream>

using namespace std;

int main()
{
    double a1, a2, a3, a4, a5;
    double vid; //kintamieji

    cout << "1. Pazimys: ";
    cin >> a1;

    cout << "2. Pazimys: ";
    cin >> a2;

    cout << "3. Pazimys: ";
    cin >> a3;

    cout << "4. Pazimys: ";
    cin >> a4;

    cout << "5. Pazimys: ";
    cin >> a5; //ivedimai

    vid = (a1 + a2 + a3 + a4 + a5) / 5; //vidurkio skaiciavimas

    if (vid > 9)
    {
        cout << "Mokinys gaus tris saldainius"; //if sakinys
    }
    else if (vid >= 7 && vid <= 9) //&& reiškia 'ir'
    {
        cout << "Mokinys gaus du saldainius";
    }
    else
    {
        cout << "Mokinys gaus viena saldaini"; //else sakiniai
    }

    return 0;
}