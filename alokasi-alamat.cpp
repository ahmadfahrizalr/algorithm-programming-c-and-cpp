#include <iostream> // menentukan file header
using namespace std;

int main()
{
    int x, y; //mendeklarasikan nilai x dan y
    int *px; //mendeklarasikan isi alamat px
    x = 17; //menentukan nilai x
    y=x; //nilai x = nilai y
    px = &x; //menentukan alokasi alamat x sebagai nilai px
    cout << "Nilai x = " << x << endl; //menampilkan nilai x
    cout << "Nilai y = " << y << endl; //menampilkan nilai y
    cout << "Alamat px = " << px << endl; //menampilkan alokasi alamat px
    cout << "Nilai px = " << *px << endl; //menampilkan isi alamat px
}
