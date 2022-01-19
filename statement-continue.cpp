#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Karena statemen BREAK, dari 1-15 yang tampil hanya = ";
    for (i = 1; i <= 15; i++)
    {
        if (i == 10)
        {
            break;
        }
        else
        {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Karena statemen CONTINUE, dari 1-15 yang tampil hanya = ";
    for (i = 1; i <= 15; i++)
    {
        if (i == 10)
        {
            continue;
        }
        else
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
