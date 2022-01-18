#include <iostream>
using namespace std;
int main ()
{
    char buku;
    cout << "Hai Guys! Institut Teknologi Telkom Purwokerto menawarkan 5 pilihan judul buku secara gratis.\n" << endl;
    cout << "Berikut rincian 5 judul buku yang ditawarkan:\n";
    cout << "A. Teknik Digital\n";
    cout << "B. Kalkulus\n";
    cout << "C. Pemrograman Berorientasi Objek\n";
    cout << "D. Fisika\n";
    cout << "E. Dasar-Dasar Rangkaian Listrik\n" << endl;
    cout << "Silahkan, masukkan judul buku yang kamu minati! ";
    cin >> buku;

    switch (buku)
    {
        case 'A' :
        case 'a' : cout << "\nKamu memilih judul buku Teknik Digital."; break;
        case 'B' :
        case 'b' : cout << "\nKamu memilih judul buku Kalkulus."; break;
        case 'C' :
        case 'c' : cout << "\nKamu memilih judul buku Pemrograman Berorientasi Objek."; break;
        case 'D' :
        case 'd' : cout << "\nKamu memilih judul buku Fisika."; break;
        case 'E' :
        case 'e' : cout << "\nKamu memilih judul buku Dasar-Dasar Rangkaian Listrik."; break;
        default  : cout << "\nTidak ada pilihan judul buku seperti itu."; break;
    }

    cout << "\n\nTerima kasih telah berpartisipasi dalam penawaran judul buku.\n";
    return 0;
}
