//Keltas (21 psl.)
#include <iostream>
using namespace std;

int main()
{
    int k, m, a, b; //kintamieji

    cout << "Keli automobiliai laukia kelto? ";
    cin >> k;

    cout << "Keli automobiliai telpa kelte? ";
    cin >> m; //ivedimai

    a = (k / m) * m;
    b = k % m; //skaiciuojam

    cout << "Bus perkelta " << a << " automobiliu" << endl;
    cout << "Liks neperkelti " << b << " automobiliai"; //spausdinami ats

    return 0;
}