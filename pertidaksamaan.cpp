//PROGRAM OPERASI LOGIKA

#include<iostream> //Menentukan file header
using namespace std;
int main()
{
    int m, n; //Mendeklarasikan nilai
    cout << "Masukkan nilai m ="; //Menampilkan perintah
    cin >> m; //Memasukkan perintah
    cout << "Masukkan nilai n ="; //Menampilkan perintah
    cin >> n; //Memasukkan perintah
    cout << "m = n --> " << (m==n) << endl; //Apakah m sama dengan n?
    cout << "m != n --> " << (m!=n) << endl; //Apakah m tidak sama dengan n?
    cout << "m > n --> " << (m>n) << endl; //Apakah m lebih dari n?
    cout << "m < n --> " << (m<n) << endl; //Apakah m kurang dari n
    cout << "m >= n --> " << (m>=n) << endl; //Apakah m lebih dari sama dengan n?
    cout << "m <= n --> " << (m<=n) << endl; //Apakah m kurang dari sama dengan n?
    return 0;
}
