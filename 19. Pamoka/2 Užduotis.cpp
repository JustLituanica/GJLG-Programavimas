//Reiškinio reikšmių skaičiavimas_2 (61 psl.)
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {

  int x1, x2;
  double y; //kintamieji

  cin >> x1;
  cin >> x2; //ivedimai

  for (int i = x1; x1 <= x2; x1++) //for sakinys
  {
    y = sqrt(pow(x1, 2) + 3 * x1 - 500); //skaiciuojam ats
    cout << x1;
    cout << fixed << setw(10) << setprecision(2) << y << endl; //spausdinam ats
  }

  return 0;
}