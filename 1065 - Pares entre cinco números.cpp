#include <iostream>
using namespace std;

int main()
{
    int cont=0, a, aux=0;
    while (cont < 5)
    {
        cin >> a;
        if (a%2==0)
        {
            aux++;
        }
        cont++;
    }

    cout << aux << " valores pares" << endl;
}
