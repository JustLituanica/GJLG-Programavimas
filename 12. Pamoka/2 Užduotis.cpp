//Atkarpos ilgis (28 psl.)
#include <cmath>
#include <iostream>
using namespace std;

int main() {

  int x1, y1, x2, y2;
  int a; //kintamieji

  cout << "x1: ";
  cin >> x1;

  cout << "y1: ";
  cin >> y1;

  cout << "x2: ";
  cin >> x2;

  cout << "y2: ";
  cin >> y2; //ivedimai

  a = sqrt(pow(2, x2 - x1) + (pow(2, y2 - y1))); //skaiciuojam ats

  cout << "AB ilgis a yra lygus " << a << " vnt."; //spausdinam ats

  return 0;
}
