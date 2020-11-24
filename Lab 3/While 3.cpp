//Student 17: Block For:14, 29; Block While:3, 9; Block Series:27, 28;
// Логинов Егор НФИбд-01-20
#include <iostream>
using namespace std;

int main(){
    int N, K, counter=0;
    cout << "Enter N, K: \n";
    cin >> N >> K;
    while (N>=K){
        N -=K;
        counter++;
    }
    cout << "N/K = " << counter;
    cout << "\nN%K = " << N;
    return 0;
}