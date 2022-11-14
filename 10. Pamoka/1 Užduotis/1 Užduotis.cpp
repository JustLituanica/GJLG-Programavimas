//Pazymiu vidurkis (26 psl.)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double v, p1, p2, p3, p4, p5; //kintamieji

    cout << "Pirmas pazymys: ";
    cin >> p1;

    cout << "Antras pazymys: ";
    cin >> p2;

    cout << "Trecias pazymys: ";
    cin >> p3;

    cout << "Ketvirtas pazymys: ";
    cin >> p4;

    cout << "Penktas pazymys: ";
    cin >> p5; //ivedimai

    v = (p1 + p2 + p3 + p4 + p5) / 5; //skaiciuojam ats

    cout << "Ricardo pazymiu vidurkis yra " << fixed << setprecision(2) << v;
    //spausdinam ats

    return 0;
}