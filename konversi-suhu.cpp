#include <iostream>
using namespace std;
int main()
{
    float F, C, K, R;
    cout<<"Program Konversi Suhu"<<endl<<endl;
    cout<<"Masukkan Suhu Farenheit : ";
    cin>>F;
    C=(F-32)*5/9;
    K=(F-32)*5/9+273;
    R=(F-32)*4/9;
    cout<<endl<<"Hasil Konversi Suhu : "<<endl;
    cout<<C<<" Derajat Celcius"<<endl;
    cout<<K<<" Derajat Kelvin"<<endl;
    cout<<R<<" Derajat Reamur"<<endl;
    return 0;
}
