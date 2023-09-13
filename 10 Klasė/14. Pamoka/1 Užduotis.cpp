//Šindlerijų tyrimas (36 psl.)
#include <iostream>
using namespace std;

int main()
{
    int m, n; //kintamieji

    cout << "m: ";
    cin >> m;

    cout << "n: ";
    cin >> n; //ivedimai

    if (m * n > 1000000)
    {
        cout << "Zuvu stebejimui pakanka"; //spausdinimas
    }
    else
    {
        cout << "Zuvu stebejimui per mazai";//spausdinimas
    }
    return 0;
}