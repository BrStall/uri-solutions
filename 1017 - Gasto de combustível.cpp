#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    float r, r2;
    cin >> a >> b;

    r = b*a;
    r2 = r/12;

    cout << fixed << setprecision(3) << r2 << endl;

    return 0;
}
