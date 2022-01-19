#include <iostream>
using namespace std;
typedef struct
{
    int Jam;
    int Menit;
    int Detik;
} Waktu;

Waktu Inisialisasi ()
{
    Waktu W;
    W.Jam = 0;
    W.Menit = 0;
    W.Detik = 0;
    return W;
}

void CetakWaktu (Waktu W)
{
    cout << W.Jam << ":" << W.Menit << ":" << W.Detik << endl;
}

int main()
{
    Waktu Wkt;
    Wkt = Inisialisasi();
    CetakWaktu(Wkt);
    cout << "Atur Waktu: " << endl << "Jam: ";
    cin >> Wkt.Jam;
    cout << "Menit: ";
    cin >> Wkt.Menit;
    cout << "Detik: ";
    cin >> Wkt.Detik;
    CetakWaktu(Wkt);
    return 0;
}
