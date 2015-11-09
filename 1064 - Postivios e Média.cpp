#include <iostream>
using namespace std;

int main()
{
    float valores[6], cont=0, media=0;

    for (int i = 0; i < 6; ++i)
    {
        cin >> valores[i];
        if (valores[i] > 0)
        {
            cont++;
        }
        else continue;

        media = media+valores[i];
    }

    cout << cont << " valores positivos" << endl;
    cout << media/cont << endl;
}
