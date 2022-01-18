#include <iostream>

using namespace std;

int main ()
{
    int V0 = 30; // Kecepatan Awal
    int a = 10; // Percepatan
    int t = 10; // Waktu Setelah 10 Detik
    int S; // Jarak Tempuh

    S = (V0*a)+((t*t)*a)/2; // Rumus menghitung Jarak Tempuh

    cout << "Berapakah jarak tempuh mobil pada kertas! " << S << endl; //Hasil dari jarak tempuh

    return 0;
}
