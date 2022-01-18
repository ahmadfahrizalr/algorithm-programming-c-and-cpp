#include <iostream>

using namespace std;
int main()
{
    float jari, tinggi;
    float tabung;
    const float pi = 3.14;

    cout << "Masukkkan panjang jari-jari = ";
    cin >> jari;
    cout << "Masukkan tinggi = ";
    cin >> tinggi;

    tabung = 2 * pi * jari * tinggi;

    cout << "Luas dari tabung adalah " << tabung << endl;
    return 0;
}
