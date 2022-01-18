#include <iostream>
using namespace std;
int main ()
{
    int varA;

    cout << "Masukkan sebuah nilai = ";
    cin >> varA;

    if (varA % 2 == 1)

    {
        cout << varA << " adalah Bilangan Ganjil" << endl;
    }
    else
    {
        cout << varA << " adalah Bilangan Genap" << endl;
    }
return 0;
}
