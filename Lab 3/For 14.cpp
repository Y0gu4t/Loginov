//Student 17: Block For:14, 29; Block While:3, 9; Block Series:27, 28;
// Логинов Егор НФИбд-01-20
#include <iostream>
using namespace std;

int main(){
    int N,sum;
    cout << "Enter N: ";
    cin >> N;
    for (int i=1; i <= 2*N-1; i+=2){
        sum+=i;
        cout << sum << " ";
    }
    return 0;
}