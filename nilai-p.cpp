#include <iostream> //menentukan file header
using namespace std;

int main()
{
    int x;              // mendeklarasikan nilai x
    int *px;            // pointer ke variabel
    int **ppx;          // pointer ke pointer

    x = 1717;     // memberi nilai x
    px = &x;      // mengalokasikan alamat x menjadi px
    ppx = &px;    // mengalokasikan alamat px menjadi ppx

    cout << "Nilai x = " << x << endl;     // menampilkan nilai x
    cout << "Nilai px = " << *px << endl;  // membaca isi alamat px
    cout << "Nilai ppx = " << **ppx << endl; //membaca isi alamat ppx

}
