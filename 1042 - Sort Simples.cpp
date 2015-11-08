#include <iostream>
using namespace std;

int main()
{
    int a, b, c, aux, vetor[3];

    cin >> a >> b >> c;

    vetor[0] = a;
    vetor[1] = b;
    vetor[2] = c;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (vetor[i] < vetor[j])
            {
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }

    cout << vetor[0] << endl;
    cout << vetor[1] << endl;
    cout << vetor[2] << endl << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}
