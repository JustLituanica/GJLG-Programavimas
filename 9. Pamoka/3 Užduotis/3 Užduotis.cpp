// Zvejo laimikis (25 psl.)
#include <iostream>
using namespace std;

int main()
{
    int k, e, a;
    double kk, ek, ak, z; //kintamieji

    cout << "Kiek karosu pagavo zvejys? ";
    cin >> k;

    cout << "Kiek sveria karosas? ";
    cin >> kk;

    cout << "Kiek eserys pagavo zvejys? ";
    cin >> e;

    cout << "Kiek sveria eserys? ";
    cin >> ek;

    cout << "Kiek auksliu pagavo zvejys? ";
    cin >> a;

    cout << "Kiek sveria auskle? ";
    cin >> ak; //ivedimai

    z = (k * kk) + (e * ek) + (a * ak); //skaiciuojamas ats

    cout << "Zvejys pagavo " << z << " kilogramus zuvu"; //spausdinamas ats

    return 0;
}