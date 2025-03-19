#include<iostream>
using namespace std;
int main(){
	int array[6] = {1,32,43,545,65,324};
	int *p;
	p = & array[0];//Pointer - point the beginning of the array.
	int *ptr;
	int arr[5]={1,2,3,4,5};
	
	ptr = arr;

	//ptr + 1 is equivalent to &arr[1];
	//ptr + 2 is equivalent to &arr[2];
	//ptr + 3 is equivalent to &arr[3];
	//ptr + 4 is equivalent to &arr[4];
	
	*ptr == arr[0];
	//*(ptr + 1) is equivalent to arr[1];
	//*(ptr + 2) is equivalent to arr[2];
	//*(ptr + 3) is equivalent to arr[3];
	//*(ptr + 4) is equivalent to arr[4];
	
	
	cout<< array << endl;// Address in the computer memory.
	
	cout<<  p << endl;// Address in the computer memory.          
	cout<< *array << endl;//Returning the first element of the array.
	cout<< *p << endl; //Returning the first element of the array.   
	cout<< *(p+1) << endl; //Returning the second element of the array.
	cout<< *(p+2) << endl; //Returning the third element of the array.
	cout<<"array element 1: "<< array[0]<<endl;//Returning the first element of the array.
	
	return 0;
}
