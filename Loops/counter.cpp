#include<iostream>
using namespace std;
int main() {
    int a;
    
    cout << "Enter the Number :";
    cin>>a;
    
    for (int counter = 1; counter <= a; counter++) {
        cout << "Execute " << counter << " time" << endl;
    }

    return 0;
}