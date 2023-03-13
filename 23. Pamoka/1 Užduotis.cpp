//Ledai (68 psl.)
#include <iostream>
using namespace std;
int main() {

  int k, n, m, vk = 0;

  cout << "Kiek dienu pardavinejo ledus? ";
  cin >> n;

  cout << "Kiek per pirma diena pardave ledu? ";
  cin >> k;

  cout << "Kiek daugiau porcijų ledų parduodavo kiekviena diena? ";
  cin >> m; //ivedimai
  
  for (int i = 0; i < n; i++)
    {
      vk = vk + k; //skaiciuojam visus parduotus ledus
      k = k + m; //skaiciuojam pardavimu didejima
    }

cout << "Per " << n << " dienas verslininkas pardave " << vk << " porciju ledu"; //spausdinamas ats
  
  return 0;
}