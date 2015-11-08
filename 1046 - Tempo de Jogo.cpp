#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a >= b) cout << "O JOGO DUROU " << b + (24-a) << " HORA(S)" << endl;
    else cout << "O JOGO DUROU " << b-a << " HORA(S)" << endl;
}
