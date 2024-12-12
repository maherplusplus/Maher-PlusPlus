// Print digits

#include <iostream>
using namespace std;

int main()
{
    int n = 192004;
    
    while (n > 0){
        // print last digit
        cout << n % 10 << endl;
        
        // delete last digit
        n /= 10;
    }
}
