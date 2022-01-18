#include <iostream>
using namespace std;
int main()
{
    float pi, s1, s2,r, volume_kubus_1, volume_kubus_2, volume_bola, volume_total;
    pi = 3.14;
    cout << "AHMAD FAHRIZAL RAMADHAN " << endl << endl;
    cout << " Masukkan panjang sisi kubus 1 = ";
    cin >> s1;

    volume_kubus_1 = s1*s1*s1;

    cout << " Hasil dari volume kubus 1 adalah " << volume_kubus_1 << endl;
    cout << " Masukkan panjang sisi kubus 2 = ";
    cin >> s2;

    volume_kubus_2 = s2*s2*s2;

    cout << " Hasil dari volume kubus 2 adalah " << volume_kubus_2 << endl;
    cout << " Masukkan jari-jari = ";
    cin >> r;

    volume_bola = (1.3)*pi*r*r*r;

    cout << " Hasil dari volume bola adalah " << volume_bola << endl;

    volume_total = volume_kubus_1 + volume_kubus_2 + volume_bola;

    cout << "Maka volume total keseluruhan benda adalah " << volume_total << endl;
    return 0;
}
