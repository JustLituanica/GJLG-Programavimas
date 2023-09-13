//Apskritimo ilgis (27 psl.)
#include <iostream>
#include <iomanip>
using namespace std;

const double pi = 3.1414592; //konstanta

int main()
{
    double r, c; //kintamieji

    cout << "r: ";
    cin >> r; //ivedimai

    c = 2 * pi * r; //Skaiciuojam ats

    cout << "c = " << fixed << setprecision(2) << c << endl; //spausdiname ats

    return 0;
}