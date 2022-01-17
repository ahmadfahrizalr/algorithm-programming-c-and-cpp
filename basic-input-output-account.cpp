#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int A[10] = {14,1,5,7,10,6,67,90,81,70};
int bil, c;

void cari (int bil)
{
    for (c=0; c<10; c++)
    {
        if (A[c] == bil)
        {
            cout << "Bilangan yang dicari pada indeks - " << c;
            break;
        }
    }
    getch();
}
int main()
{
    for (int i=0; i<10; i++)
    {
        cout << "Indeks - [" << i << "]" << " " << A[i] << endl;
    }
    cout << endl;
    cout << "Masukkan bilangan pencarian: ";
    cin >> bil;
    cari (bil);
    for (c=0; c<10; c++)
    {
        if (A[c] != bil)
        {
            cout << "Bilangan yang dicari tidak terdaftar";
            break;
        }
    }
    return 0;
}
