// IF block: 13,18,28 CASE block: 2,7,11
// Логинов Егор Игоревич НФИбд-01-20
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int K;
    float weight;
    cout << "Enter number and body weight: \n";
    cin >> K;
    cin >> weight;
    switch(K){
        case 1:
            cout << "Body weight: " << weight << " kilo.";
            break;
        case 2:
            cout << "Body weight: " << weight/pow(10,6) << " kilo.";
            break;
        case 3: 
            cout << "Body weight: " << weight/pow(10,3) << " kilo.";
            break;
        case 4:
            cout << "Body weight: " << weight*pow(10,3) << " kilo.";
            break;
        case 5:
            cout << "Body weight: " << weight*pow(10,2) << " kilo.";
            break;
        default:
            cout << "Error";
            
    }
    return 0;
}