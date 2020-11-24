//Student 17: Block For:14, 29; Block While:3, 9; Block Series:27, 28;
// Логинов Егор НФИбд-01-20
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N;
    float A, B,dif;
    cout << "Enter N, A and B: \n";
    cin >> N >> A >> B;
    dif = (B-A)/N;
    cout << dif << "\n";
    for (int i=0; i<=N; i++){
        cout << A + i*dif << " ";
    }
    return 0;
}