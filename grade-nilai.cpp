#include <iostream>
using namespace std;
int main ()

{

int nilai_mahasiswa;
bool grade_nilai;

cout<<"Tuliskan nilai mahasiswa : ";
cin>>nilai_mahasiswa; //tuliskan 95

grade_nilai = nilai_mahasiswa >= 90;
if (grade_nilai);
{
cout<<"\nNilai kondisi variabel grade nilai = "<< grade_nilai <<endl;
cout<<"Grade mahasiswa dengan nilai "<< nilai_mahasiswa<<" adalah A "<<endl;
}

return 0;

}
