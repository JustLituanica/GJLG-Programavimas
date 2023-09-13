// Programuotojai (66 psl.)
#include <iostream>
using namespace std;

int main() {

  int n, u, ats = 0;

  cout << "Kiek programuotoju dalyvavo olimpiadoje? ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Kiek uzdaviniu isprende " << i + 1 << " programuotojas? ";
    cin >> u;
    ats = ats + u;
  }

  cout << n << " olimpiadoje dalyvave programuotojai isprende " << ats
       << " uzdaviniu";

  return 0;
}