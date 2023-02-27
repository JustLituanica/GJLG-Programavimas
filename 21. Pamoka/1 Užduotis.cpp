// Antroku pamokos (66 psl.)
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  int n, p;
  double ats = 0;

  cout << "Kiek savaites dienu? ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Kiek pamoku " << i + 1 << "d.? ";
    cin >> p;
    ats = ats + p;
  }

  cout << "Vidutiniskai per diena buna " << fixed << setprecision(1) << ats / n
       << " pamokos";

  return 0;
}