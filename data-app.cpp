#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;
    char teks[50];
    int i;

    file.open("data.txt",ios::app);
    cout << "Masukkan data baru : ";
    cin.getline (teks,50);
    file << teks << endl;
    file.close();
    return 0;
}
