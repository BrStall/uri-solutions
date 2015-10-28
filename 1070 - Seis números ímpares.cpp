#include <iostream>
using namespace std;

int main()
{
    int cont=0, n;

    cin >> n;

    while (cont < 6)
    {
        if (n%2 == 1)
        {
            cout << n << endl;
            cont++;
        }
        n++;
    }
}
