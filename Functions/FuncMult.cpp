//Multiplication of two numbers
#include<iostream>
using namespace std;
int multi (int a, int b){
	int c;
	c = a * b;
	return c;
}

int main(){
	int d;
	
	d = multi(2,3);
	
	cout<<d<<endl;
	cout<<multi(3,4)<<endl;
	
	return 0;
}


