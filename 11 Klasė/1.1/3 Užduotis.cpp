//Kelionė po Lietuvą
#include <iostream>
using namespace std;

int main()
{
    int k, t, d, v, n, b;

    cout << "Kiek vienuoliktoku planuoja vykti i kelione? ";
    cin >> k;

    cout << "Kiek litu kelionei gali skirti kiekvienas vienuoliktokas? ";
    cin >> t;

    cout << "Kiek dienu truks kelione? ";
    cin >> d;

    cout << "Kiek maisto per diena reikia zmogui? ";
    cin >> v;

    cout << "Kiek kainuoja litras benzino? ";
    cin >> n;

    cout << "Kiek kuro planuojama sunautodi simtui kilometru? ";
    cin >> b;

    //nepabaigta formule (neteisingas atsakymas)
    if (k * t > (k * t) - (t * v) - (b / 100 * 320 * n))
    {
        cout << "Vienuoliktokai gali vykti i sia kelione" << endl;
    }

    else
    {
        cout << "Vienuoliktokai negali vykti i sia kelione" << endl;
    }

    return 0;
}
