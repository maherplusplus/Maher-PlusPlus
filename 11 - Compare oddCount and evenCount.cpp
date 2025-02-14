// Compare oddCount and evenCount

#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {7, 4, 2, 8, 3, 6, 1};
    int oddCount{}, evenCount{};
    
    for (int i = 0; i < 7; i++){ // if size = 7
        if (arr[i] % 2 == 0) // even
            evenCount++;
        else 
            oddCount++;
    }
    
    if (evenCount > oddCount)
        cout << "Even\n";
    else if (oddCount > evenCount)
        cout << "Odd\n";
    else
        cout << "oddCount is Equal evenCount !!\n";
}
