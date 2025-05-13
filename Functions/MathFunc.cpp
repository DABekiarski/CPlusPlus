#include <iostream>    
using namespace std;

int Multiply(int a, int b){
	return a * b;
}

void Sum(int a, int b, int c){
	cout<< a + b + c << endl;
}

double getSquare(double num) {              
    return num * num;
}

int main() {
    int d;
    double e;
    
	d = Multiply(5,6);
	cout<< d<<endl;
	
	Sum(2,3,4);
	
	e = getSquare(3.14);
	cout<< e<<endl;
	
    return 0;
}