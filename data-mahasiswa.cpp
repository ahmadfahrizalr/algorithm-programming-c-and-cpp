#include <iostream>

using namespace std;

typedef struct
{
    int nim;
    string nama;
    int nilai [4];
}data;

int main()
{
    data mhs[3];
    int i,j;
    for(i=0 ; i<2 ; i++)
    {
        cout <<"Data ke-"<< i+1 << endl;
        cout <<"NIM : ";
        cin >> mhs[i].nim;
        cout <<"Nama : ";
        cin >> mhs[i].nama;
        for(j=0 ; j<3 ; j++)
        {
            cout <<"Nilai ke-"<<j+1<< " :";
            cin >> mhs[i].nilai[j];
        }
        cout << endl;
    }
    cout <<"Data Mahasiswa \n";
    for(i=0 ; i<2 ; i++)
    {
        cout << i+1 <<"\t"<< mhs[i].nama;
        for(j=0 ; j<3 ; j++)
        {
            cout<<"\t"<< mhs[i].nilai[j];
        }
        cout<<endl;
    }
    return 0;
}
