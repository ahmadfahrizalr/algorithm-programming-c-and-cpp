#include <iostream>
#include <fstream>
using namespace std;
typedef struct
{
    int NIM;
    string nama;
    string kelas;
} Mahasiswa;
int main()
{
    fstream file;
    file.open("17101003.ahm.txt",ios::app);
    Mahasiswa Mhs[10];
    int i;
    for (i=0;i<2;i++)
    {
        cout << "Data ke- " << i+1 << ":" << endl;
        cout << "Nama: ";
        cin >> Mhs[i].nama;
        cout << "NIM: ";
        cin >> Mhs[i].NIM;
        cout << "Kelas: ";
        cin >> Mhs[i].kelas;
    }
    cout << "Data Mahasiswa" << endl;
    cout << "|\tNAMA\t\t|\tNIM\t\t|\tKELAS\t\t|\n";
    file << "Data Mahasiswa" << endl;
    file << "|\tNAMA\t\t|\tNIM\t\t|\tKELAS\t\t|\n";
    for (i=0;i<2;i++)
    {
        cout << "|\t" << Mhs[i].nama << "\t|\t" << Mhs[i].NIM << "\t|\t" << Mhs[i].kelas << "\t|\n";
        file << "|\t" << Mhs[i].nama << "\t|\t" << Mhs[i].NIM << "\t|\t" << Mhs[i].kelas << "\t|\n";
    }
    return 0;
}
