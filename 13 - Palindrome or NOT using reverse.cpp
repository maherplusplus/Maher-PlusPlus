// Palindrome or NOT using reverse

#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string s){
    string temp = s;
    reverse(temp.begin(), temp.end());
    
    return s == temp;
}

int main()
{
    string s;
    cin >> s;
    
    if (isPalindrome(s)) cout << s << " is Palindrome\n";
    else cout << s << " is NOT Palindrome\n";
}
