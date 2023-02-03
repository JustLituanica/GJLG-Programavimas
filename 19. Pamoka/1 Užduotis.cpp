// Reiškinio reikšmių skaičiavimas_1 (61 psl.)
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  double y; //kintamasis

  for (int x = -5; x <= 5; x++) //for sakinys
  {
    y = sqrt(pow(x, 2) + 3 * x + 5); //skaiciuojam atsakymus
    cout << x; //spausdinam atsakymus
    cout << fixed << setw(10) << setprecision(2) << y << endl;
  }

  return 0;
}