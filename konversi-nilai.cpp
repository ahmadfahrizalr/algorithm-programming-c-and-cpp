#include <iostream>


using namespace std;

int main ()
{
int nilai;
cout<<"Tuliskan nilai mahasiswa = ";
cin>>nilai;
if (nilai >= 90)
{cout<<"\n Konversi nilai"<<nilai<<"= A";}
else if (nilai >= 80)
{cout<<"\n Konversi nilai"<<nilai<<"= B";}
else if (nilai >= 70)
{cout<<"\n Konversi nilai"<<nilai<<"= C";}
else if (nilai >= 60)
{cout<<"\n Konversi nilai"<<nilai<<"= D";}
else
{cout<<"\n Konversi nilai"<<nilai<<"= E";}


}
