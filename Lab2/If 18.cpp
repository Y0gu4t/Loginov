// IF block: 13,18,28 CASE block: 2,7,11
// Логинов Егор Игоревич НФИбд-01-20
#include <iostream>
using namespace std;

int main(){
     int a, b, c;
     cout << "Enter 3 numbers: \n";
     cin >> a >> b >> c;
     if (a==b){
         cout << "3 - different number";
     }
     else if (a==c){
         cout << "2 - different number";
     }
     else cout << "1 - different number";
    return 0;
}