//Student 17: Block For:14, 29; Block While:3, 9; Block Series:27, 28;
// Логинов Егор НФИбд-01-20
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N, K=0;
    cout << "Enter N: \n";
    cin >> N;
    while (N>=pow(3,K)){
        K++;
    }
    cout << K;
    return 0;
}