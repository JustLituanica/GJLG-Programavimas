//Kelias į mokyklą (69 psl.)
#include <iostream>
using namespace std;

int main() {

  int n; //kintamieji
  int a = 0, b = 0;

  cout << "Įveskite zingsnių kiekį iki mokyklos: ";
  cin >> n; //ivedam zingsniu skaiciu

  for (int i = 1; i <= n; i++) //for sakinys
    {
        if (i % 10 == 0)
        {
          a++; //skaiciuojam suplojimus
        }
      
        if (i % 10 == 5)
        {
          b++; //skaiciuojam spragtelejimus
        }
    }

  cout << "Suplojimų bus: " << a << endl;
  cout << "Spragtelėjimų bus: " << b; //spausdinamas ats
  
  return 0;
}
