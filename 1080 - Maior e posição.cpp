#include <iostream>
using namespace std;

int main()
{
    int X, pos = 0, maior = 0;

    for (int i = 0; i < 100; i++)
    {
        cin >> X;
        if (X > maior)
        {
            maior = X;
            pos = i;
        }
    }

    cout << maior << endl;
    cout << pos+1<< endl;
}
