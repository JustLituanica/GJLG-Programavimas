//Staciakampis (16 psl.) Skaičiuojame stačiakampio perimetrą ir plotą
#include <iostream>
using namespace std;

int main() {

	system("clear"); //naujas lapas

	int i, p, prm, plt; //kintamieji

	cout << "Koks stačiakampio ilgis? ";
	cin >> i; //ivedimas

	cout << "Koks stačiakampio plotis? ";
	cin >> p; //ivedimas

	prm = (i + p) * 2; //perimetro skaiciavimas

	plt = p * i; //ploto skaiciavimas

	cout << "Stačiakampio perimetras: " << prm << endl; //atsakymo isvedimas
	cout << "Stačiakampio plotas: " << plt; //atsakymo isvedimas

	return 0;
}