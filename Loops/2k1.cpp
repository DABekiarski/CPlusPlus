//2k+1
#include <iostream>
using namespace std;
int main() {
    int n;
    int num = 1;
    
    cout << "Enter number: " << endl;
    cin >> n;
    
    while (num <= n) {
        cout << num << endl;
        num = num * 2 + 1;
    }
    
    return 0;
}