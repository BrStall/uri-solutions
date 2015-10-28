#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    if (str == "vertebrado")
    {
        cin >> str;
        if (str == "ave")
        {
            cin >> str;
            if (str == "carnivoro")
            {
                str = "aguia";
            }

            else str = "pomba";
        }

        if (str == "mamifero")
        {
            cin >> str;
            if (str == "onivoro")
            {
                str = "homem";
            }

            else str = "vaca";
        }
    }

    else
    {
        cin >> str;
        if (str == "inseto")
        {
            cin >> str;
            if (str == "hematofago")
            {
                str = "pulga";
            }

            else str = "lagarta";
        }

        else
        {
            cin >> str;
            if (str == "hematofago")
            {
                str = "sanguessuga";
            }

            else str = "minhoca";
        }
    }

    cout << str << endl;
}
