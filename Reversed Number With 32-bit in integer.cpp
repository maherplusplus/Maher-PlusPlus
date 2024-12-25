// Revers Number With 32-bit in integer

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    
    int rev = 0;
    
    while (num){
        // INT_MAX ->  max number in integer -> 2147483647
        // INT_MIN ->  min number in integer -> -2147483648
        if (rev > (INT_MAX / 10) || rev < (INT_MIN / 10)) {
            cout << "Invalid Reverse. . \n";
            return 0;
        }
        
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    
    cout << "Reversed Number = " << rev << "\n";
}
