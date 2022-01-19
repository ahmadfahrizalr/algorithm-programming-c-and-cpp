//PROGRAM MENGHITUNG ARITMATIKA

#include<iostream> //Menentukan file header
using namespace std;
int main()
{
    int m, n; //Mendeklarasi nilai
    m = 27; //Menentukan nilai M
    n = 5; //Menentukan nilai N
    cout << "m + n =" << m + n << endl; //Menampilkan sekaligus mengoperasikan bilangan hasil penjumlahan
    cout << "m - n =" << m - n << endl; //Menampilkan sekaligus mengoperasikan bilangan hasil pengurangan
    cout << "m x n =" << m * n << endl; //Menampilkan sekaligus mengoperasikan bilangan hasil kali
    cout << "m / n =" << m / n << endl; //Menampilkan sekaligus mengoperasikan bilangan hasil bagi
    cout << "m % n =" << m % n << endl; //Menampilkan sekaligus mengoperasikan bilangan hasil modulo
    cout << "~m =" << ~m << endl; //Menampilkan sekaligus mengoperasikan bilangan hasil negasi

    return 0;
}
