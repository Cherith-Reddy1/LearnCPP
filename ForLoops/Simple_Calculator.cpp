#include <iostream>
using namespace std;
long long alpha(int a, int b) {
    int sum = a + b;
    cout << "the sum of a and b = " << sum << endl;
    return sum;
}
long long beta(int a, int b) {
    int sub = a - b;
    cout << "the subtraction of a and b = " << sub << endl;
    return sub;
}
long long gamma(int a, int b) {
    int product = a * b;
    cout << "the product of a and b = " << product << endl;
    return product;
}
double delta(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    int quotient = a / b;
    cout << "a divided by b = " << quotient << endl;
    return quotient;
}
int main() {
    char X;
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "What do you want to do? (a: addition, s: subtraction, m: multiplication, d: division): ";
    cin >> X;
    if (X == 'a') {
        alpha(a, b);
    } else if (X == 's') {
        beta(a, b);
    } else if (X == 'm') {
        gamma(a, b);
    } else if (X == 'd') {
        delta(a, b);
    } else {
        cout << "invalid input" << endl;
    }
    return 0;
}
