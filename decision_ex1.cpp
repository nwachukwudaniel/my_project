//
// Created by Daniel Nwachukwu on 22/08/2026.
//

#include <iostream>
using namespace std;
int main () {
    int a;
    int b;
    double c;
    cout << "Enter first numbers: " ;
    cin >> a;
    cout << "Enter second numbers: ";
    cin >> b;
    cout << "Enter third numbers: ";
    cin >> c;

    if (a > b && a > c) {
        cout << "The largest is: " << a;
    }
    else if (b > a && b > c) {
        cout << "The largest is: " << b;
    }
    else {
        cout << "The largest is: " << c;
    }

    return 0;
}