#include <iostream>
using namespace std;
int main()
{
int i, N, faktorial;
cout << "Faktorial berapa ? ";
cin >> N;
i = 0;
faktorial = 1;
cout<< "Faktorial dari " << N << "! = ";
do
{
faktorial = faktorial * (N - i);
if (i < N - 1)
cout << N-i << " * ";
else
cout << N-i;
N++;
}
while(i < N);
cout << " = " << faktorial << endl;
return 0;
}
