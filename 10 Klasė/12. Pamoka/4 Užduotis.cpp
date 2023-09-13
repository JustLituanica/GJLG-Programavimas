//Trikampio ploto skaičiavimas, kai ţinomos visų kraštinių koordinatės. (29 psl.)
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, s, p;
    int a, b, c; //kintamieji

    cout << "x1: ";
    cin >> x1;

    cout << "y1: ";
    cin >> y1;

    cout << "x2: ";
    cin >> x2;

    cout << "y2: ";
    cin >> y2;

    cout << "x3: ";
    cin >> x3;

    cout << "y3: ";
    cin >> y3; //ivedimai

    a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)); //skaiciuojam atkarpu ilgius

    p = a + b + c; //skaiciuojam perimetra
    s = 0.25 * sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c)); //herono formule plotui apskaiciuoti

    cout << "Trikampio plotas = " << s << " kvadr. vnt." << endl;
    cout << "Trikampio perimetras = " << p << " vnt."; //spausdinimai

}