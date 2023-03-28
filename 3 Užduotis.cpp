//Snaigės už lango (69 psl.)
#include <iostream>
using namespace std;

int main() {

  int k, n, s = 0; //kintamieji

  cout << "Įveskite, kiek snaigių nukrito per pirmąją sekundę ir kelias sekundes snigo: ";

  cin >> k >> n; //ivedimai

  for (int i = 0; i < n; i++)
    {
      s = s + k;
      k = k * 2; //skaiciuojam atsakyma
    }

  cout << "Iskris " << s << " snaigiu"; //spausdinam ats
  
  return 0;
}
