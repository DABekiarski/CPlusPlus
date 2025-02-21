//1 to 100
#include <iostream>
using namespace std;
int main() {
    int n;
       
    cout << "Enter number: " << endl;
    cin >> n;
    
    while (n < 1 || n > 100) {
        cout << "Invalid number!" << endl;
        cin >> n;
    }
    
    cout << "The number is " << n << endl;
    
    return 0;
}