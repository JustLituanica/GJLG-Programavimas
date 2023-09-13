//Kambario tvarkymas (46 psl.)
#include <iostream>
using namespace std;

int main()
{
    int k; //kintamieji

    cout << "k: ";
    cin >> k; //ivedimai

    if (k == 1 || k == 3 || k == 5)
    {
        cout << "Kambari tvarkys jaunelis";
    }
    if (k == 2 || k == 4 || k == 6) //if sakiniai
    {
        cout << "Kambari tvarkys vyresnelis"; //atsakymo spausdinimas
    }

    return 0;
}