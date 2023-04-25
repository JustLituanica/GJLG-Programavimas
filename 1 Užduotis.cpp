//Programuotojas (77 psl.)
#include <iostream>
using namespace std;

int main() {
    int p, k, u, d = 0; //kintamieji

    cout << "p: ";
    cin >> p;

    cout << "k: ";
    cin >> k;

    cout << "u: ";
    cin >> u; //ivedimai

    while (u > 0) //while ciklas
    {
        u = u - p; 
        p = p + k;
        d++;   //skaiciuojame dienas   
    }

    cout << "Isspres per " << d << " dienas"; //spausdiname ats

    return 0;
}
