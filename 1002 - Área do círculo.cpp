#include <iostream>
#include <iomanip>
using namespace std;
  
int main() {
    double A, p = 3.14159, R;
    cin >> R;
    A = p * R * R;
    cout << fixed << setprecision(4);
    cout << "A=" << A << endl;
    return 0;
}
