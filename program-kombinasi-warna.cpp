#include <iostream>
using namespace std;
int main ()
{
    int warna;
    cout << "~ PROGRAM MENENTUKAN ASAL KOMBINASI WARNA ~ \n";
    cout << "Keterangan : 1. Orange 2. Hijau 3. Ungu \n";
    cout << "Masukkan angka warna kombinasi! \n";
    cin >> warna;
    switch (warna)
    {case 1: cout << "Merah campur kuning \n"; break;
     case 2: cout << "Kuning campur biru \n"; break;
     case 3: cout << "Biru campur merah \n"; break;
     default : cout << "Tidak ada warna seperti itu \n"; break;}
    return 0;
}
