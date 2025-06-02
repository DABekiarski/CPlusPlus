//Find the sign
#include <iostream>
using namespace std;

void printSign(int a){
	 cout<<"The number " << a << " is";
	 if(a == 0){
	 	cout<<" zero.";
	 } else {
	 	
		if(a > 0){
	 		cout<<" positive.";
	 	} else {
	 		cout<<" negative.";
		}
	 	
	 }

}

int main() {
	
    int n;
    
    cout<<"Enter number: "<<endl;
    cin >> n;
    
    printSign(n);
    
    return 0;
}