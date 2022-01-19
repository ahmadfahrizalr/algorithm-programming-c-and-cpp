#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    char teks[50];
    int pos;

    file.open("data.txt");
    cout << "Tentukan posisi yang akan diubah: ";
    cin >> pos;
    cout << "Masukkan data baru : ";
    cin.ignore();
    cin.getline(teks,50);
    file.seekp(pos);
    file << teks << endl;

    file.close();
    return 0;
}
