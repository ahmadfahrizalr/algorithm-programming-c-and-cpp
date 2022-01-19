#include <iostream>
using namespace std;
int main()
{
    int aziz, *defa, *dewi;
    aziz = 70;
    cout << "Aziz " << aziz << endl;
    cout << "Defa = Aziz\n";
    cout << "Dewi = Aziz + 3 \n\n";
    cout << "a. Berapakah nilai Defa ??\n   Nilai Defa = ";
    defa = &aziz;
    cout << *defa << endl;
    cout << "b. Berapakah nilai Dewi ??\n   Nilai Dewi = ";
    *dewi = aziz+3;
    cout << *dewi << endl << endl;
    cout << "Aziz " << aziz << endl;
    cout << "Defa = &Aziz\n";
    cout << "Dewi = *Aziz + 3 \n\n";
    cout << "a. Berapakah nilai Defa ??\n   Nilai Defa = ";
    defa = &aziz;
    cout << *defa << endl;
    cout << "b. Berapakah nilai Dewi ??\n   Nilai Dewi = ";
    *dewi = aziz+3;
    cout << *dewi << endl << endl << endl;
    return 0;
}
