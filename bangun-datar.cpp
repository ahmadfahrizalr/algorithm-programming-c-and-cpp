#include <iostream>
#include <math.h>

using namespace std;
const float pi = 3.14;

float segitiga(float a, float t)
{
    float L;
    L = (a*t)/2;
    return L;
}
float lingkaran(float r)
{
    float L = pi * pow(r, 2);
    return L;
}
    int main()
{
    float alas=15.5, tinggi=10.5, L, jari=7.5;
    int pilih;
    cout << "Program Menghitung Luas Bidang\n";
    cout << "Pilihlah (1-segitiga atau 2-lingkaran) = ";
    cin >> pilih;
    switch (pilih)
    {
        case 1:
            cout << "Luas segitiga adalah = ";
            L = segitiga(alas, tinggi);
            break;
        case 2:
            cout << "Luas lingkaran adalah = ";
            L = lingkaran(jari);
            break;
        default:
            cout << "Pilihan tidak ada\n";
            break;
    }
    cout << L;
    return 0;
}
