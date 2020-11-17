// IF block: 13,18,28 CASE block: 2,7,11
// Логинов Егор Игоревич НФИбд-01-20
#include <iostream>
using namespace std;

int main(){
    float a, b, c;
     cout << "Enter 3 numbers: \n";
     cin >> a >> b >> c;
     if (a > b){
         if (b > c) cout << b << " - average number";
         else if (a > c) cout << c << " - average number";
         else cout << a << " - average number";
     }
     else {
         if (c > b) cout << b << " - average number";
         else if (a > c) cout << a << " - average number";
         else cout << c << " - average number";
     }
    return 0;
}