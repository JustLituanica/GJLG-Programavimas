//Greitpyragis (45 - 46 psl.)
#include <iostream>
using namespace std;

int main()
{
    int k; //kintamasis

    cout << "k";
    cin >> k; //ivedimas

    if (k == 1 || k == 2)
    {
        cout << "Pyragas labiausiai patiks mamai ir dukrai";
    }

    else if (k == 3 || k == 4) //if sakiniai
    {
        cout << "Pyragas labiausiai patiks teciui ir sunui"; //atsakymo spausdinimas
    }

    return 0;
}