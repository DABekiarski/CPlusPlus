#include <iostream>
using namespace std;
int main() {
	int number=0;
	do {
		number++;
		cout << number << " ";
	}while(number<10);
    cout << "number = 10 => End of the cycle" << endl;
    return 0;
}