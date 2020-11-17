// IF block: 13,18,28 CASE block: 2,7,11
// Логинов Егор Игоревич НФИбд-01-20
#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter year: ";
    cin >> year;
    if( (year%4 == 0 && year%100 != 0) || (year%100 == 0 && year%400 == 0) )
        cout << "366 days in year";
    else cout << "365 days in year";
    return 0;
}