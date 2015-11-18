#include <iostream>
using namespace std;

int main()
{
    int M, N, t;
    while(true)
    {
        cin >> M >> N;
        if (M == N)
        {
            break;
        }
        if (N > M)
        {
            cout << "Crescente" << endl;
        }
        else cout << "Decrescente" << endl;
    }
}
