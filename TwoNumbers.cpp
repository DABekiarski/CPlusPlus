#include <iostream>
using namespace std;

int main() {
	
	int number, number2, Sum, Subt;	

    cout << "Enter number 1: ";
    cin >> number;
    cout << "Enter number 2: ";
    cin >> number2;
    cout << "The numbers you entered are " << number 
	<< " and " << number2 << endl;
    
    Sum = number + number2;
    cout << "The Sum of the two numbers is " << Sum << endl;
    
	Subt = number - number2;
    cout << "The Subtraction of the two numbers is " << Subt << endl;
        
    return 0;
}