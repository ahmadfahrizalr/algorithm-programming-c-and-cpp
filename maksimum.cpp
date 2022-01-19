#include <iostream> //menentukan file header
#define MAX 5 //menentukan nilai MAX 5
using namespace std;

int main()
{
    int a[MAX];     //mendeklarasikan a berjumlah karakter 5
    int *pa;        //mendeklarasikan isi alamat pa
    pa = a;        // atau pa = &a[0]

    for (int i = 0; i<MAX; i++)     //perintah perulangan bersyarat
    {
        cout << "Masukkan Nilai " << i+1 << " : "; //menampilkan nilai i lalu dijumlahkan 1
        cin >> a[i]; //memasukkan perintah
    }
    cout << endl;
    for (int i = 0; i<MAX; i++) //perintah perulangan bersyarat
    {
        cout << "Nilai a[" << i << "] = "<< *pa << endl; //menampilkan perintah dan isi alamat dari pa
        pa++; //pa berlanjut hingga syarat terpenuhi
    }
}
