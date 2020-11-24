//Student 17: Block For:14, 29; Block While:3, 9; Block Series:27, 28;
// Логинов Егор НФИбд-01-20
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N;
    float A;
    cout << "Enter N: \n";
    cin >> N;
    for(int i=1; i <=N; i++){
        cout << "Enter A: ";
        cin >> A;
        cout << "A in power " << i << " = " << pow(A,i) << endl;
    }
    return 0;
}