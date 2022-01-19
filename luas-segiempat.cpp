//PROGRAM MENENTUKAN LUAS SEGIEMPAT

#include<iostream> //Menentukan file header
using namespace std;
int main()
{
   int luas, panjang, lebar; //Mendeklarasikan nilai
   cout<<"Masukan panjang :"; //Menampilkan perintah
   cin>>panjang; //Memasukkan perintah
   cout<<"Masukan lebar :"; //Menampilkan perintah
   cin>>lebar; //Memasukkan perintah
   luas = panjang * lebar; //Menghitung operasi luas segi empat
   cout<<"Luas segi empat = "<<luas; // Menampilkan hasil nilai
   return 0;
}
