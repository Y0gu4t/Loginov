// IF block: 13,18,28 CASE block: 2,7,11
// Логинов Егор Игоревич НФИбд-01-20
#include <iostream>
using namespace std;

int main(){
    int K;
    cout << "Enter number: ";
    cin >> K;
    switch(K){
        case 1:
            cout << "Badly";
            break;
        case 2:
            cout << "Unsatisfactory";
            break;
        case 3: 
            cout << "Satisfactory";
            break;
        case 4:
            cout << "Good";
            break;
        case 5:
            cout << "Excellent";
            break;
        default:
            cout << "Error";
            
    }
    return 0;
}