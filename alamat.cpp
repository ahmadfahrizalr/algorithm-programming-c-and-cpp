#include <iostream> //menentukan file header
using namespace std;

int main()
{
    int *pBil; //mendeklarasikan isi alamat pBil
    int bilX=17; //mendeklarasikan bil X
    pBil = &bilX; //menentukan alokasi alamat bilX sebagai alamat pBil
    cout << "isi bilX   = " << bilX << endl; //menampilkan bilX
    cout << "Nilai yang ditunjuk pBil = " << *pBil << endl; //menampilkan isi alamat pBil
    *pBil = *pBil + 3; //menjumlahkan isi alamat pBil dengan 3
    cout << "isi bil X sekarang   = " << bilX << endl; //menampilkan bilX yang terkini
    cout << "Nilai yang ditunjuk pBil = " << *pBil << endl; //menampilkan isi alamat pBil terkini
    return 0;
}
