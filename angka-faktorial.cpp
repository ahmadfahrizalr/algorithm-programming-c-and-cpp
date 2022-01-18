#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <windows.h>
using namespace std;
int main ()
{
int angka, tebakan, i;
char main_lagi;
mulai:
system("CLS");
srand (time(NULL));
angka = rand()%100;
cout << "Tebaklah sebuah angka antara " << angka - 5 << " - " << angka + 5;
cout << "\nAnda hanya diberi 3 kesempatan.\n\n";
i = 1;
while (i <= 3)
{
cout << "Tebakan ke - " << i << " = ";
cin >> tebakan;
if (tebakan == angka)
{
cout << "Tebakan Anda BENAR\n";
break;
}
else
{
cout << "<Masih salah, coba lagi>\n";
}
i++;
}
cout << "\nPermainan selesai. Ingin bermain lagi (Y/T) ? ";
cin >> main_lagi;
if (main_lagi == 'Y' || main_lagi == 'y')
{
goto mulai;
}
else
{
cout << "\nTerima Kasih Sudah Bermain\n";
}
return 0;
}
