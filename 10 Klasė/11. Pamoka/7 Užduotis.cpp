//Rankinis laikrodis (23 psl.)
#include <iostream>
using namespace std;

int main()
{
    int v, min; //kintamieji
    
    cout << "V: ";
    cin >> v;

    cout << "Min: ";
    cin >> min; //ivedimai

    v = (v + 3) % 12;
    min = (min + 15) % 60; //skaiciavimas

    cout << v << " " << min; //spausdinimas

    return 0;
}