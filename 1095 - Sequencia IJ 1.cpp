#include <iostream>
using namespace std;

int main()
{
    int i=1;
    for (int j = 60; j >= 0; j--)
    {
        if (j%5==0)
        {
            cout << "I=" << i << " J=" << j << endl;
            i+=3;
        }
    }
}
