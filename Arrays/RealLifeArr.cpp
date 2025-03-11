#include<iostream>
#include<string>
using namespace std;
int main(){
	int ages[10] = {20, 22, 18, 6, 48, 56, 63, 71};
	string daysOfWeek[7] = {"Monday","Tuesday","Wednesday",
		"Thursday","Friday","Saturday","Sunday"};
	string capitals[4] = {"Sofia", "Madrid", "London", "Paris"};
		
	cout<<"ages[0]: "<< ages[0] << endl;
	cout<<"ages[1]: "<< ages[1]<<endl;
	cout<<"ages[2]: "<<ages[2]<<endl;
	cout<<"ages[3]: "<< ages[3]<<endl;
	
	cout<<"daysOfWeek[0]: "<< daysOfWeek[0] << endl;
	cout<<"daysOfWeek[1]: "<< daysOfWeek[1]<<endl;
	cout<<"daysOfWeek[2]: "<<daysOfWeek[2]<<endl;
	cout<<"daysOfWeek[3]: "<< daysOfWeek[3]<<endl;
	
	cout<<"capitals[0]: "<< capitals[0] << endl;
	cout<<"capitals[1]: "<< capitals[1]<<endl;
	cout<<"capitals[2]: "<<capitals[2]<<endl;
	cout<<"capitals[3]: "<< capitals[3]<<endl;
	
	return 0;
}