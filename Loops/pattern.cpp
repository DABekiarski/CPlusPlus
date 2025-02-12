#include<iostream>
using namespace std;
int main(){
	int n = 5;
	
	for (int i = 0; i < n; i++) {

        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j <= i; j++) {

            // Printing stars
            cout << "* ";
        }

        // Ending line after each row
        cout << endl;
    }
	
	return 0;
} 
