#include <iostream>
using namespace std;
typedef struct
{
    int NIM;
    char nama[20];
    int nilai[3];
} Mahasiswa;
int main()
{
    Mahasiswa Mhs;
    int j;
    cout << "NIM: ";
    cin >> Mhs.NIM;
    cout << "Nama: ";
    cin >> Mhs.nama;
    for (j=0;j<3;j++)
    {
        cout << "Nilai ke- " << j+1 << ": ";
        cin >> Mhs.nilai[j];
    }
    cout << "|\tNIM \t\t|\tNAMA \t|";
    for (j=0;j<3;j++)
    {
        cout << "\tNilai " << j+1 << "\t|";
    }
    cout << endl;
    cout << "|\t" << Mhs.NIM << "\t|\t" << Mhs.nama << "\t|";
    for (j=0;j<3;j++)
    {
        cout << "\t" << Mhs.nilai[j] << "\t|";
    }
    cout << endl;
    return 0;
}
