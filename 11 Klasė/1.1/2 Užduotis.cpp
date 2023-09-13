//Kelionė į mokyklą
#include <iostream>
using namespace std;

int main()
{
    int v1, m1, m2, v, m;

    cout << "Kai Petras isejo kiek valandu rode laikrodis? ";
    cin >> v1;

    cout << "Kai Petras isejo kiek minuciu rode laikrodis? ";
    cin >> m1;


    cout << "Kiek minuciu trunka Petro kelione i mokykla? ";
    cin >> m2;


    cout << "Kelinta valanda prasideda Petro pamokos? ";
    cin >> v;

    cout << "Kelinta minute prasideda Petro pamokos? ";
    cin >> m;


    if ((v1 * 60 + m1) + m2 < v * 60 + m)
    {
        cout << "Petras i pamoka nepaveluos" << endl;
    }

    else
    {
        cout << "Petras i pamoka paveluos" << endl;
    }

    return 0;
}
