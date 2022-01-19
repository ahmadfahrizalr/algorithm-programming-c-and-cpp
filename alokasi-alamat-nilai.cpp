#include <iostream> //menentukan file header
using namespace std;

int main()
{
    long *p, x; //mendeklarasikan alamat p dan x
    p = &x; //mengalokasikan alamat x sebagai p
    x = 17; //menentukan nilai x

    cout << "Nilai X   = " << x << endl; //menampilkan nilai x
    cout << "Nilai *p  = " << *p << endl; //menampilkan isi alamat p
    cout << "Nilai p   = " << p << endl; //menampilkan alamat p
    cout << "Nilai &x  = " << &x << endl << endl;  //menampilkan alamat x

    *p = 20; //mengubah nilai p menjadi 20

    cout << "Nilai X   = " << x << endl; //menampilkan nilai x terkini
    cout << "Nilai *p  = " << *p << endl; //menapilkan isi alamat p terkini
    cout << "Nilai p   = " << p << endl; //menampilkan alamat p
    cout << "Nilai &x  = " << &x << endl << endl; //menampilkan alamat x
    return 0;
}
