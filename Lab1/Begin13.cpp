#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float R1, R2, S1, S2, Pi = 3.14;
    cin >> R1 >> R2;
    if ( R1 < R2) {
        R1 += R2; R2 = -1*(R2-R1); R1 -= R2;
    }
    S1 = R1*Pi;
    S2 = R2*Pi;
    cout << "S1 = " << S1 << "\n" << "S2 = " << S2 << "\n" << "S3 = " << S1-S2;
    return 0;
}
