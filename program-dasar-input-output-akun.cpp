#include <iostream>
using namespace std;
int main ()
{
    int username = 17101003, password = 17101003, i;
    cout << "SELAMAT DATANG DI AKUN SOSIAL NOWADAYS\n";
    cout << "======================================\n" << endl;
    for (i=1;i<=3;i++)
    {
    cout << "Masukkan username Anda? ";
    cin >> username;
    cout << "Masukkan password Anda? ";
    cin >> password;

    if ((username == 17101003) && (password == 17101003))
    {cout << "Yes, username dan password Anda benar."; break;}
    else
    {cout << "Maaf ya, username dan password Anda salah \n";}
    }
    if ((username != 17101003) && (password != 17101003))
    {cout << "Maaf username dan password yang Anda masukkan sudah tiga kali salah :(" << endl;}
    return 0;
}
