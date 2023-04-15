//Pietus (75 psl.)
#include <iostream>
using namespace std;

int main()
{
    int t1, k, t, n = 0; //kintamieji

    cout << "t1: ";
    cin >> t1;

    cout << "k: ";
    cin >> k;

    cout << "t: ";
    cin >> t; //ivedimai

    while (t1 + k <= t) //tikrinam ar mama spes pagaminti patiekala
    {
        t = t - t1; //skaiciujojam likusi laika
        t1 = t1 + k; //skaiciuojam ilgesnio gaminimo laika
        n++; //skaiciuojam patiekalu skaiciu
    }

    cout << "Mama suspes pagaminti " << n << " petiekalus"; //spausdinam ats

    return 0;
}