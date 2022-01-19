#include <iostream>
using namespace std;
typedef struct
{
    int x;
    int y;
} Titik;
int main()
{
    Titik F;
    cout << "Masukkan satu koordinT: " << endl << "x1: ";
    cin >> F.x;
    cout << "y1: ";
    cin >> F.y;
    cout << endl << "Koordinat yang anda masukkan: (" <<
    F.x << "," << F.y << ")" << endl;
    return 0;
}
