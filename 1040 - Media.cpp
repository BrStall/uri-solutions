#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float n1, n2, n3, n4, ne;
    cin >> n1 >> n2 >> n3 >> n4;

    float media = ((n1*2) + (n2*3) + (n3*4) + n4)/10.0;

    cout << "Media: " << setprecision(2) <<  media << endl;

    if (media >= 7.0) cout << "Aluno aprovado." << endl;
    if (media < 5.0) cout << "Aluno reprovado." << endl;
    if (media >= 5.0 && media <= 6.9)
    {
        cout << "Aluno em exame." << endl;
        cin >> ne;
        cout << "Nota do exame: " << setprecision(2) << ne << endl;

        if ((media+ne)/2.0 >= 5.0) cout << "Aluno aprovado." << endl;
        else cout << "Aluno reprovado." << endl;

        cout << "Media final: " << setprecision(2) << (media+ne)/2.0 << endl;
    }

    return 0;
}
