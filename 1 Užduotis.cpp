//Konkursas (69 psl.)
#include <iostream>
using namespace std;

int main() {

  int a, b, ats = 0; //kintamieji

  cout << "Įveskite intervalo pradzią: ";
  cin >> a;

  cout << "Įveskite intervalo pabaigą: ";
  cin >> b; //ivedimai

  for (int i = a; i <= b; i++) //for sakinys
    {
      if (i % 6 == 0) //if sakinys
      {
        ats++; //skaiciuojamas ats
      }
    }
  
cout << "Reikalingas porcijų skaičius: " << ats; //spausdinamas ats
  
  return 0;
}
