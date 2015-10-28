#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int NUMBER, HORAS;
    double SALARY, VALOR;

    cin >> NUMBER;
    cin >> HORAS;
    cin >> VALOR;

    SALARY = HORAS * VALOR;

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << NUMBER << "\nSALARY = U$ " << SALARY << endl;

    return 0;
}
