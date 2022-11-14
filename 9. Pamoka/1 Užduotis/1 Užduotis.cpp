//Cukrus (25 psl.) Veiksmai su realiaisiais skaiciais
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double ckgkaina, suma, k;
    int n; //kintamieji

    cout << "Kokia cukraus kilogramo kaina? ";
    cin >> ckgkaina;

    cout << "Kiek kilogramu cukraus telpa maise? ";
    cin >> k;

    cout << "Kiek maisu cukraus perka seima? ";
    cin >> n; //ivedimas

    suma = (k * ckgkaina) * n; //skaiciuojamas ats

    cout << "Seima uz perkama cukru sumokes " << fixed << setprecision(2) << suma << " euru"; //spausdinamas ats

    return 0;
}
