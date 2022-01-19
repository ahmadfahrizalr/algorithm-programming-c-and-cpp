//PROGRAM MENGHITUNG ARITMATIKA

#include<iostream> //Menentukan file header
using namespace std;
int main()
{
    int m, n; //Mendeklarasi nilai
    m = 12; //Menentukan nilai M
    n = 2; //Menentukan nilai N
    cout << "m >> n =" << (m >> n) << endl; //Menampilkan sekaligus mengoperasikan bilangan bitwise bergeser ke kanan
    cout << "m << n =" << (m << n) << endl; //Menampilkan sekaligus mengoperasikan bilangan bitwise bergeser ke kiri
    cout << "m & n =" << (m & n) << endl; //Menampilkan sekaligus mengoperasikan bilangan bitwise logika AND
    cout << "m | n =" << (m | n) << endl; //Menampilkan sekaligus mengoperasikan bilangan bitwise logika OR
    cout << "m ^ n =" << (m ^ n) << endl; //Menampilkan sekaligus mengoperasikan bilangan hasil logika XOR
    cout << "~m =" << (~m) << endl; //Menampilkan sekaligus mengoperasikan bilangan hasil logika NOT

    return 0;
}
