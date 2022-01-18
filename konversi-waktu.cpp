#include <iostream>
using namespace std;
int main()
{
const int SECONDS_PER_MINUTE = 60,
SECONDS_PER_HOUR = 60*SECONDS_PER_MINUTE;
int hours, minutes, seconds;
bool kond1, kond2, kond3;
cout << "Program mengubah jumlah detik ke dalam Jam, Menit, Detik dalam Bahasa Inggris\n";
cout << "Masukkan jumlah detik : ";
cin >> seconds;
hours = seconds / SECONDS_PER_HOUR;
seconds = seconds % SECONDS_PER_HOUR;
minutes = seconds / SECONDS_PER_MINUTE;
seconds = seconds % SECONDS_PER_MINUTE;
kond1 = hours > 0;
switch (kond1) {
case 1 : cout << hours;
switch (hours) {
case 1: cout << " hour "; break;
default: cout << " hours "; break; }
break;
}
kond2 = minutes > 0;
switch (kond2) {
case 1: cout << minutes;
switch (minutes) {
case 1: cout << " minute "; break;
default: cout << " minutes "; break; }
break;
}
kond3 = seconds > 0;
switch (kond3) {
case 1 : cout << seconds;
switch (seconds) {
case 0: cout << " second"; break;
default: cout << " seconds"; break; }
break;
}
cout << '\n';
}
