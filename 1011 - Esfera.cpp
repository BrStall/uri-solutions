#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int a, VOLUME;

    cin >> a;

    VOLUME = (4.0/3.0) * 3.14159 * pow(a, 3);

    cout << "VOLUME = " << fixed << setprecision(3) << VOLUME << endl;

  return 0;
}
