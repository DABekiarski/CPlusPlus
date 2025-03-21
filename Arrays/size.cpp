#include<iostream>
using namespace std;
int main(){
	int ages[6] = {7, 16, 18, 21, 35, 46};
	int sizeofages = sizeof(ages);
	int sizeofinteger = sizeof(ages[0]);
	int length = sizeof(ages) / sizeof(ages[0]);
	float avg, sum = 0;
	
	sum = ages[0] + ages[1] + ages[2] + ages[3] + ages[4] + ages[5];
    avg = sum / length;

	cout << "The average age is: " << avg << "\n";
	
	return 0;
}