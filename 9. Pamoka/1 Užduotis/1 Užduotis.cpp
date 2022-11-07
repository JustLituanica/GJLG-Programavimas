//Cukrus (25 psl.) Veiksmai su realiaisiais skaiciais
#include <iostream>
using namespace std;

int main()
{
    double ckgkaina, suma;
    int k, n; //kintamieji

    cout << "Kokia cukraus kilogramo kaina? ";
    cin >> ckgkaina;

    cout << "Kiek kilogramu cukraus telpa maise? ";
    cin >> k;

    cout << "Kiek maisu cukraus perka seima? ";
    cin >> n; //ivedimas

    suma = (k * ckgkaina) * n; //skaiciuojamas ats

    cout << "Seima uz perkama cukru sumokes " << suma << " euru"; //spausdinamas ats

    return 0;
}
