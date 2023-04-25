//Riešutai(77 psl.)
#include <iostream>
using namespace std;

int main() {
  int n, k = 0; //kintamieji

  cout << "n: ";
  cin >> n; //ivedimas

  while (n > 0) //while ciklas
    {
      if (n % 2 == 0) //jei lyginis
      {
        n = n / 2; //perkeliam puse riesutu
        k++; //skaiciuojam perkelimus
      }
      else //jei ne lyginis
      {
        n--; //perkeliam viena riesuta
        k++; //skaiciuojam perkelimus
      }
    }

  cout << "Reiks perkelti " << k << " kartus";

  return 0;
}