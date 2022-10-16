//Skaitmenu suma (19 psl.) Veiksmai su skaiciaus skaitmenimis
#include <iostream>
using namespace std;

int main()
{
    
    int k, s;
    int a, b, c, d; //kintamieji

    cout << "Ivesk skaiciu: ";
    cin >> k; //ivedimas

    a = k / 1000; 
    b = k / 100 % 10; 
    c = k % 100 / 10; 
    d = k % 10; //atskiriame skaicius

    s = a + b + c + d; //skaiciuojame atsakyma

    cout << "Skaitmenu suma: " << s; //atspausdiname

    return 0;
}