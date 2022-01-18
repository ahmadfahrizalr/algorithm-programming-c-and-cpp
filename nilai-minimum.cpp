#include <iostream>
using namespace std;
int main ()
{
    int angka, perulangan, min;
    perulangan = 4;

    for (int i = 1; i <= perulangan; i++)
    {
        cout << "Masukkan angka: ";
        cin >> angka;

        if (i == 1)
        {
            min = angka;
        }
        else if (min > angka)
        {
            min = angka;
        }
    }
cout << endl;
cout << "Nilai minimum: " << min << endl;

return 0;
}
