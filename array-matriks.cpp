#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, j;
    int M[3] [3] = {{1,2,3},{10,11,12},{100,200,400}};

    cout << "Elemen Matriks M\n\n";
    for (i=0; i<3; i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<setw(7)<<M[i][j];
        }
        cout<<endl;
    }
    return 0;
}
