#include <iostream>

using namespace std;

typedef struct
{
    int nim;
    string nama;
    int nilai [4];
} Mahasiswa;

int main()
{
    Mahasiswa Mhs[3];
    int j,i;
    for(j=0 ; j<2 ; j++)
    {
        cout <<"Data ke-"<< j+1 << endl;
        cout <<"NIM : ";
        cin >> Mhs[j].nim;
        cout <<"Nama : ";
        cin >> Mhs[j].nama;
        for(i=0 ; i<3 ; i++)
        {
            cout <<"Nilai ke-"<<i+1<< " : ";
            cin >> Mhs[j].nilai[i];
        }
        cout << endl;
    }
    cout <<"Data Mahasiswa \n";
    for(j=0 ; j<2 ; j++)
    {
        cout << j+1 <<"\t"<< Mhs[j].nama;
        for(i=0 ; i<3 ; i++)
        {
            cout<<"\t"<< Mhs[j].nilai[i];
        }
        cout<<endl;
    }
    return 0;
}
