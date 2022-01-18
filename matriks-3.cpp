#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, j;
    cout << "Matriks 3 x 3\n" << endl;
    i = 1;
    while (i <= 3)
    {
        j = 1;
        while (j <= 3)
        {
        cout << setw(5) << i * j;
        j=j+1;
        }
        cout << endl << endl;
    i=i+1;
    }
    cout << endl;
    return 0;
}
