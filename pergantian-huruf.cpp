#include <iostream>

using namespace std;
int main ()
{
    char kata[] = "pemrograman", huruf;
    int indeks;

    cout << "Tuliskan indeks array yang isinya mau diubah = ";
    cin >> indeks;

    cout << "Tuliskan huruf pengganti = ";
    cin >> huruf;

    cout << "Kata sebelum diganti = " << kata << endl;
    kata[indeks] = huruf;
    cout << "Kata  setelah diganti = " << kata << endl;

    return 0;
}
