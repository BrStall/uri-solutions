#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double salario;
    cin >> salario;

    if (salario <= 2000.00)
    {
       cout << "Isento" << fixed << setprecision(2) << endl;
    }

    else if (salario >= 2000.01 && salario <= 3000.00)
    {
        cout << "R$ " << fixed << setprecision(2) << (salario - 2000.00)*0.08 << endl;
    }

    else if (salario >= 3000.00 && salario <= 4500.00)
    {
        cout << "R$ " << fixed << setprecision(2) << ((salario - 3000.00)*0.18 + 1000.00*0.08) << endl;
    }

    else if (salario >= 4500.00)
    {
        cout << "R$ " << fixed << setprecision(2) << ((salario - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08) << endl;
    }
}
