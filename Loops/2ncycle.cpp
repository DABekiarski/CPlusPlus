//??????? ?? 1 ?? 2*n ? for ?????
#include<iostream>
using namespace std;
int main(){
	int n;
	int num = 1;
	
	cin>>n; 
	
	for(int i = 0; i <= n; i++){ 
			cout<<num<<endl;
			num = num*2;
	}

	return 0;
}