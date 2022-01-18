#include <iostream>

using namespace std;

int main()
{
    char nama [6];
    int i;

    for (i=0;i<5;i++)
    {
    cout << "Huruf ke - "<< i << " = ";
    cin>>nama[i];
    }
    nama [5] = '\0';

    cout << "Nama Anda Adalah = " << nama << endl;

    return 0;
}
