#include <iostream>
#include<string.h>
using namespace std;
int main ()
{
    int x, *y;
    cout << "Hari <1-7> : ";
    cin >> x;
    y = &x;
    if (x==1)
    {
        cout << "Hari ke - " << *y << " adalah hari Senin\n";
    }
    else if (x==2)
    {
        cout << "Hari ke - " << *y << " adalah hari Selasa\n";
    }
    else if (x==3)
    {
        cout << "Hari ke - " << *y << " adalah hari Rabu\n";
    }
    else if (x==4)
    {
        cout << "Hari ke - " << *y << " adalah hari Kamis\n";
    }
    else if (x==5)
    {
        cout << "Hari ke - " << *y << " adalah hari Jumat\n";
    }
    else if (x==6)
    {
        cout << "Hari ke - " << *y << " adalah hari Sabtu\n";
    }
    else if (x==7)
    {
        cout << "Hari ke - " << *y << " adalah hari Minggu\n";
    }
    else
    {
        cout << "Hari ke - " << *y << " adalah hari Kode hari salah!!\n";
    }
return 0;
}
