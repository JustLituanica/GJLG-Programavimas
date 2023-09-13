// Lietus (77 psl.)
#include <iostream>
using namespace std;
int main() {

  int m, k, mm, s, d = 0;
  int s1; // kinatamasis reikalingas atsakymui spausdinti

  cout << "m: ";
  cin >> m;

  cout << "k: ";
  cin >> k;

  cout << "mm: ";
  cin >> mm;

  cout << "s: ";
  cin >> s;

  s1 = s; // prisiskiriame reikiamus krituliuis kintamajam

  while (s > 0) { // while ciklas
    s = s - (m * mm);
    m = m + k;

    d++; // skaiciuojam dienas
  }

  cout << "Per " << d << " dienas bus prilyta " << s1
       << " mm. krituliu"; // spausdinam ats

  return 0;
}
