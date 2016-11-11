#include <iostream>

using namespace std;

int main(){

    int n=99999, m=0;

    while(n > 10000){
        cin >> n;
    }

    for(int i=0; i<n; ++i){
        cin >> m;

        if (m > 0 && m%2 == 0){
            cout << "EVEN POSITIVE\n";
        }
        else if (m == 0){
            cout << "NULL\n";
        }
        else if (m < 0 && m%2 == 0){
            cout << "EVEN NEGATIVE\n";
        }
        else if (m > 0 && m%2 != 0){
            cout << "ODD POSITIVE\n";
        }
        else{
            cout << "ODD NEGATIVE\n";
        }
    }
}
