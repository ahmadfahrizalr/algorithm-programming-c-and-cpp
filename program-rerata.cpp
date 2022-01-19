#include <iostream>
using namespace std;
int main()
{
    int i, jum_data = 7;
    float bil, total, rerata;
    do
    {
    rerata = total / jum_data;
    i++;
    }
    i=1;
    while (i <= jum_data);
    {
        cout << "Angka ke - " << i << " = ";
        cin >> bil;
        total+=bil;
    }

    cout << "Total = " << total << endl;
    cout << "Rata-rata = " << rerata << endl;
    return 0;
}
