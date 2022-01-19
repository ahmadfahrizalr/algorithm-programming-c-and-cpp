#include <iostream>
#include <iomanip>

using namespace std;
int A[3][3];
int B[3][3];
void elemen_matriks();
void selisih_matriks();
int main ()
{
    cout << "Menampilkan hasil dari pengurangan matriks\n" << endl;
    selisih_matriks();
    return 0;
}
void elemen_matriks()
{
    int x, y, N=3;
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
}
void selisih_matriks()
{
    elemen_matriks();
    int x, y, N=3;
    cout << "Pegurangan Matriks A & B\n";
    for (x=0;x<N;x++)
    {
        for (y=0;y<N;y++)
        {
            cout << setw(5) << A[x][y] - B[x][y] << "  ";
        }
        cout << endl;
    }
}
