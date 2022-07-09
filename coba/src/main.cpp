#include <iostream>
#include <cmath>
#include <string>

using namespace std;




int main() {
    int num1, num2;
    char op;

    cout << "PROGRAM KALKULATOR" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter op +, -, *, /: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    int hasil;

    if(op == '+') {
        hasil = num1 + num2;
    } else if(op == '-') {
        hasil = num1 - num2;
    } else if(op == '*') {
        hasil = num1 * num2;
    } else if(op == '/') {
        hasil = num1 / num2;
    } else {
        cout << "invalid op" << endl;
    }

    cout << "hasilnya adalah " << hasil << endl;


}

