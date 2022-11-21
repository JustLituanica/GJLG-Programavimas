//Autobuso atvykimo laikas (22 psl.)
#include <iostream>
using namespace std;

int main()
{
    int vi, mi, vp, mp, ms, vr, mr, v, m; //kintamieji

    cout << "Kelinta valanda autobusas išvyko iš Vilniaus? ";
    cin >> vi >> mi;
    
    cout << "Kiek laiko autobusas vaţiavo iš Vilniaus i Panevėžį? ";
    cin >> vp >> mp;

    cout << "Kelias minutes autobusas stovėjo Panevėžyje? ";
    cin >> ms;

    cout << "Kiek laiko autobusas vaţiavo iš Panevėžio į Rygą? ";
    cin >> vr >> mr; //ivedimai

    v = (((mi + mp + ms + mr) / 60) + vi + vp + vr) % 24;
    m = (((vi + vp + vr) * 60) + mi + mp + ms + mr) % 60;
    //skaiciuojamas ats

    cout << "Autobusas i Ryga atvyks: " << v << " val. " << m << " min.";
    //spausdinamas ats;

    return 0;
}