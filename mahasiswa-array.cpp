#include <iostream>
using namespace std;
typedef struct
{
    int NIM;
    string nama;
    int umur;
} Mahasiswa;
int main()
{
    Mahasiswa Mhs[10];
    int i;
    for (i=0;i<3;i++)
    {
        cout << "Data ke- " << i+1 << ":" << endl;
        cout << "NIM: ";
        cin >> Mhs[i].NIM;
        cout << "Nama: ";
        cin >> Mhs[i].nama;
        cout << "Umur: ";
        cin >> Mhs[i].umur;
    }
    cout << "|\tNIM\t\t|\tNAMA\t|\tUMUR\t|\n";
    for (i=0;i<2;i++)
    {
        cout << "|\t" << Mhs[i].NIM << "\t|\t" <<
        Mhs[i].nama << "\t|\t" << Mhs[i].umur << "\t|\n";
    }
    return 0;
}
