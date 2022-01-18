#include <iostream>

using namespace std;
int main ()
{

    float angka = -25.52, mutlak;

    mutlak = (angka > 0) ? angka : -angka;
    cout << "Bilangan mutlak (absolut) dari " << angka << " = " << mutlak << endl;
    return 0;

}
