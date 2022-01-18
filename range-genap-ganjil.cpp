#include <iostream>
using namespace std;
int main()
{
    int i, genap, ganjil;
    int bmin, bmax;
    cout << "Tuliskan Range [min max] = ";
    cin >> bmin >> bmax;
    cout << "Angka ganjil dari " << bmin << " - " << bmax << " = ";
    for (i = bmin; i <= bmax; i++)
    {
        if (i % 2 != 0)
        {cout << i << " ";}
    }
    cout << "\nAngka genap dari " << bmin << " - " << bmax << " = ";
    for (i = bmin; i <= bmax; i++)
    {
        if (i % 2 == 0)
        {cout << i << " ";}
    }
    cout << endl;
    return 0;
}
