#include <iostream>
using namespace std;
int main()
{
int r, t, volume;
cout<<"Menghitung Volume Tabung"<<endl;
cout<<"Masukan jari-jari :";
cin>>r;
cout<<"Masukan tinggi :";
cin>>t;
volume=22*r*r*t/7;
cout<<"Jadi Volume Tabung dengan jari-jari "<< r <<" dan tinggi "<< t <<" adalah : "<< volume;
return 0;
}
