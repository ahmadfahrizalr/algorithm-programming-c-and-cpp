#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float A,B,C;
    cout << "Program Menghitung Phytagoras dari sisi A dan sisi B\n";
    cout << "Masukkan nilai sisi A : ";
    cin >> A;
    cout << "Masukkan nilai sisi B : ";
    cin >> B;
    C = sqrt(pow(A,2) + pow (B,2));
    cout << "Maka hasil dari Phytagoras sisi A dan sisi B ialah " << C << "." << endl;
    return 0;
}
