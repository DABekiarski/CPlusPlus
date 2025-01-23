#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  // checks if the number is between 2 and 6
  if (number >= 2 && number <= 6) {
    cout << "You entered a number between 2 and 6: " 
	<< number << endl;
  } else {
  	cout << "You entered a number that is not between 2 and 6: " 
	<< number << endl;
  }
  
  if ( 2 == 2 || 1 == 4 )
	{
    cout << "True" << endl;
	}
		else
	{
    	cout<< "False" << endl;
	}
  
  cout << "This statement is always executed.";

  return 0;
}