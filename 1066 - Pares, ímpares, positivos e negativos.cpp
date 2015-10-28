#include <iostream>
using namespace std;

int main()
{
    int vetor[4], p=0, im=0, posi=0, ne=0;

    for (int i = 0; i < 5; i++)
    {
        cin >> vetor[i];

        if (vetor[i]%2 == 0)
        {
            p++;
        }
        else
        {
            im++;
        }

        if (vetor[i] > 0)
        {
            posi++;
        }
        else if (vetor[i] < 0)
        {
            ne++;
        }
    }

    cout << p << " valor(es) par(es)" << endl;
    cout << im << " valor(es) impar(es)" << endl;
    cout << posi << " valor(es) positivo(s)" << endl;
    cout << ne << " valor(es) negativo(s)" << endl;
}
