#include <iostream>
using namespace std;
int main()
{
cout << "Masukkan sebuah angka pada range 1...5: ";
int nilai;
cin >> nilai;
switch (nilai)
{
case 1: cout << "Anda memasukkan sebuah angka ";
cout << "satu" << endl;
break;
case 2: cout << "Anda memasukkan sebuah angka ";
cout << "dua" << endl;
case 3: cout << "Anda memasukkan sebuah angka ";
cout << "tiga" << endl;
break;
case 4: cout << "Anda memasukkan sebuah angka ";
cout << "empat" << endl;
break;
case 5: cout << "Anda memasukkan sebuah angka ";
cout << "lima" << endl;
break;
default: cout << "Anda memasukkan angka yang diluar range";
break;
}
return 0;
}
