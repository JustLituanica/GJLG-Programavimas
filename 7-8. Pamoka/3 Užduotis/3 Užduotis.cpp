//Naujo skaiciaus formavimas (20 psl.)
#include <iostream>
using namespace std;

int main()
{
    int n, x, a, b, c; //kintamieji

    cout << "Ivesk n: ";
    cin >> n; //ivedimas

    a = n / 100;
    b = n / 10 % 10;
    c = n % 10; //atskiriame skaitmenis

    x = (b * 100) + (a * 10) + c; //skaiciuojame ats

    cout << "Skaicius buvo " << x; //spausdinam ats

    return 0;
}