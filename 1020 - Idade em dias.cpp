#include <iostream>
using namespace std;
 
int main()
{
    int a;
    int anos, meses, dias;
 
    cin >> a;
 
    anos = a / 365;
    a %= 365;
    meses = a / 30;
    a %= 30;
    dias = a;
/*
    anos = a / 365;
    meses = (a - anos * 365) / 30;
    dias = a - anos * 365 - meses * 30;
*/
 
    cout << anos  << " ano(s)" << endl;
    cout << meses << " mes(es)" <<  endl;
    cout << dias  << " dia(s)" <<  endl;
 
    return 0;
}
