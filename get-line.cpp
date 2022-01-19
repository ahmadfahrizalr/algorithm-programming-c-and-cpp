#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;
    char Teks[50];
    int i;

    file.open("data.txt");
    while (file.good())
    {
        file.getline (Teks,50,'\n');
        cout << Teks << endl;
    }
    file.close();
    return 0;
}
