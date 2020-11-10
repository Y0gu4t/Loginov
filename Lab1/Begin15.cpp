#include <iostream>
#include <cmath>
using namespace std;

// Логинов Егор НФИбд-01-20

int main()
{
    float S, D, L, Pi = 3.14;
    cin >> S;
    D = sqrt(4*S/Pi);
    cout << "D= " << D << "\n";
    L = D * Pi;
    cout << "L= " << L;
    return 0;
}
