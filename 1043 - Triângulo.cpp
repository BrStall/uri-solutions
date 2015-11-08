#include <iostream>
#include <iomanip> /** Biblioteca para setar as casas decimais (fixed; setprecision)**/
using namespace std;

int main()
{
    float a, b, c, perimetro, area;

    cin >> a >> b >> c;

    if (a >= b + c || b >= a + c || c >= a + b)
    {
        cout << "Area = " << fixed << setprecision(1) << ((a+b)*c)/2.0 << endl;
    }

    else cout << "Perimetro = " << fixed << setprecision(1) << a+b+c << endl;
}
