#include <iostream>

using namespace std;
int main ()
{
    int x, y, N=3;
    int A[3][3];
    int B[3][3];
    for (x=0;x<N;x++)
    {
        for (y=0;y<N;y++)
        {
            cout << "A [" << x+1 << "] [" << y+1 << "] =";
            cin >> A[x][y];
        }
    }
    cout << "\n";
    cout << "Menampilkan Isi Matriks A \n";
    for (x=0;x<N;x++)
    {
        for (y=0;y<N;y++)
        {
            cout << A[x][y] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    for (x=0;x<N;x++)
    {
        for (y=0;y<N;y++)
        {
            cout << "B [" << x+1 << "] [" << y+1 << "] =";
            cin >> B[x][y];
        }
    }
    cout << "\n";
    cout << "Menampilkan Isi Matriks B \n";
    for (x=0;x<N;x++)
    {
        for (y=0;y<N;y++)
        {
            cout << B[x][y] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Penjumlahan Matriks A & B\n";
    for (x=0;x<N;x++)
    {
        for (y=0;y<N;y++)
        {
            cout << A[x][y] + B[x][y] << "  ";
        }
        cout << endl;
    }
    return 0;
}
