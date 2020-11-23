// IF block: 13,18,28 CASE block: 2,7,11
// Логинов Егор Игоревич НФИбд-01-20
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char side;
    int N1, N2, direction=0;
    cout << "Enter locator orientation and two commands: \n";
    cin >> side;
    cin >> N1 >> N2;
    switch(side){
        case 'N':
            switch(N1+N2){
                case -2:
                case 2:
                    cout << "Current direction: " << "S";
                    break;
                case 0:
                case 4:
                    cout << "Current direction: " << "N";
                    break;
                case 3:
                    cout << "Current direction: " << "E";
                    break;
                case 1:
                    cout << "Current direction: " << "W";
                    break;
                
            }
            break;
        case 'E':
            switch(N1+N2){
                case -2:
                case 2:
                    cout << "Current direction: " << "W";
                    break;
                case 0:
                case 4:
                    cout << "Current direction: " << "E";
                    break;
                case 3:
                    cout << "Current direction: " << "S";
                    break;
                case 1:
                    cout << "Current direction: " << "N";
                    break;
                
            }
            break;
        case 'S':
            switch(N1+N2){
                case -2:
                case 2:
                    cout << "Current direction: " << "N";
                    break;
                case 0:
                case 4:
                    cout << "Current direction: " << "S";
                    break;
                case 3:
                    cout << "Current direction: " << "W";
                    break;
                case 1:
                    cout << "Current direction: " << "E";
                    break;
                
            }
            break;
        case 'W':
            switch(N1+N2){
                case -2:
                case 2:
                    cout << "Current direction: " << "E";
                    break;
                case 0:
                case 4:
                    cout << "Current direction: " << "W";
                    break;
                case 3:
                    cout << "Current direction: " << "N";
                    break;
                case 1:
                    cout << "Current direction: " << "S";
                    break;
                
            }
            break;
        default:
            cout << "Error";
    }
    return 0;
}
