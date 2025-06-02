//Billing receipt
#include <iostream>
using namespace std;

void printHeader(){
	cout<<"CASH RECEIPT"<<endl;
	cout<<"--------------------------"<<endl;
}

void printBody(){
	cout<<"Charged to______________"<<endl;
	cout<<"Received by_____________"<<endl;
}

void printFooter(){
	cout<<"--------------------------"<<endl;
	cout<<"(c) Company"<<endl;
}

void printReceipt(){
	printHeader();
	printBody();
	printFooter();
}

int main() {
   
    printReceipt();
    
    return 0;
}