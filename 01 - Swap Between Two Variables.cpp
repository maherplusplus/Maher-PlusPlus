// Swap Between Two Variables Without Another Variable and Without Built-In Function

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b; // 5, 10

    a = a + b; // a = 15, b = 10
    b = a - b; // a = 15, b = 5
    a = a - b; // a = 10, b = 5

    cout << a << ' ' << b;
}
