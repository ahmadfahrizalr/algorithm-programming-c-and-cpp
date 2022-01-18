#include <iostream>

using namespace std;
int main()
{
    char kata [9]="semangat";
    int i;

    cout << "kata asli adalah = " << kata << endl;
    cout << "setelah dibalik = ";

    for (i=7;i>=0;i--)
    {
        cout<<kata[i];
    }
    cout << endl;
    return 0;
}
