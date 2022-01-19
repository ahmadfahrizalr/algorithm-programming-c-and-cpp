#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;
    char teks[50];
    int i;

    file.open("data.txt");
    for (i=1;i<=3;i++)
    {
        cout << "Masukkan teks ke- " << i << " : ";
        cin.getline(teks,50);
        file << teks << endl;
    }
    file.close();
    return 0;
}
