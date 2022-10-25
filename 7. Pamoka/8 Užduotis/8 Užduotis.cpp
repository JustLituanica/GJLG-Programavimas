//Obuoliu dalybols (21 psl.)
#include <iostream>
using namespace std;

int main()
{
    int n, k, m, a, b; //kintamieji

    cout << "Kelis obuolius atnese mokytoja? ";
    cin >> n;

    cout << "Po kelis obuolius atsinese kiekvienas mokinys? ";
    cin >> k;

    cout << "Keli mokiniai klaseje? ";
    cin >> m; //ivedimai

    a = (n + (k * m)) / (m + 1);
    b = (n + (k * m)) % (m + 1); //skaiciavimai

    cout << "Kiekvienam scentes dalyviu teko po " << a << " obuolius" << endl;
    cout << "Kitai dienai liko " << b << " obuoliai"; //spausdinami ats

    return 0;
}