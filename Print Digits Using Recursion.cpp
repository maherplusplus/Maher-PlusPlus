// Print Digits Using Recursion

#include <iostream>
using namespace std;

void maherplusplus(int num) {
    if (num == 0) return;

    maherplusplus(num / 10);
    cout << num % 10 << ' ';
}

int main()
{
    int num = 192004;
    cout << "All Digits : ";
    maherplusplus(num);
    // All Digits : 1 9 2 0 0 4 -> :)
}
