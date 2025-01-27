#include<iostream>
using namespace std;
int main(){
	int i;
	char ch; 
	
	for(i = 0; i < 100; i++){ // Endind on 7 
		if(i %10 == 7){
			cout<<i<<endl;
		}
	}
	
	cout<<"alphabet" <<endl; // Prints a,b,c,d,...,z
	
	for(ch = 'a'; i <= 'z'; ch++){
	
			cout<<ch<<endl;
		
	}
	return 0;
}