#include<iostream>
using namespace std;
int main(){
	int ages[6] = {7, 16, 18, 21, 35, 46};
	int sum;
	int ext;
	int mul;
	float div;
	
	sum = ages[4] + ages[2];
	ext = ages[1] - ages[5];
	mul = ages[0] * ages[5];
	div = ages[2] / ages[3];
	
	cout << sum << endl;
	cout << ext << endl;
	cout << mul << endl;
	cout << div << endl;
	
	return 0;
}