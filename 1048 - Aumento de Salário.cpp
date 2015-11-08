#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float salario, aux;
    string percentual = "0 %";
    cin >> salario;

    aux = salario;
    if (salario <= 400.00)
    {
        salario = salario + ((15.0/100.0)*salario);
        percentual = "15 %";
    }

    else if (salario >= 400.01 && salario <= 800.00)
    {
        salario = salario + ((12.0/100.0)*salario);
        percentual = "12 %";
    }

    else if (salario >= 800.01 && salario <= 1200.00)
    {
        salario = salario + ((10.0/100.0)*salario);
        percentual = "10 %";
    }

    else if (salario >= 1200.01 && salario <= 2000.00)
    {
        salario = salario + ((7.0/100.0)*salario);
        percentual = "7 %";
    }

    else if (salario > 2000.00)
    {
        salario = salario + ((4.0/100.0)*salario);
        percentual = "4 %";
    }

    cout << "Novo salario: " << fixed << setprecision(2) << salario << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << salario-aux << endl;
    cout << "Em percentual: " << fixed << setprecision(2) << percentual << endl;
}
