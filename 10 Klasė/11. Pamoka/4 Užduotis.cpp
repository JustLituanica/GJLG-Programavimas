//Braskiu sverimas (22 psl.)
#include <iostream>
using namespace std;

int main()
{
    int k;
    int k300, k200, k100; //kintamieji

    cout << "Kiek kg braškių nori pasverti Ramunė? ";
    cin >> k; // ivedimas

    k300 = (k * 1000) / 300;
    k200 = ((k * 1000) - k300 * 300) / 200;
    k100 = ((k * 1000) - k300 * 300 - k200 * 200) / 100; //atsakymo skaiciavimas

    cout << "k300 = " << k300 << endl;
    cout << "k200 = " << k200 << endl;
    cout << "k100 = " << k100 << endl; //atsakymo spausdinimai

    return 0;
}