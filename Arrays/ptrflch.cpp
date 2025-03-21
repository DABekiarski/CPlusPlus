#include<iostream>
using namespace std;
int main(){
	float flarr[5] = {94.3,11298.3,12.8,34.1,25.2};
	float *ptrflarr;
	
	char charray[6] = {'J','!','#','&'};
	char *ptrcharray;
	
	ptrflarr = flarr;

    cout << *flarr<< endl;
    cout << *(flarr + 1) << endl;
    cout << *(flarr + 2) << endl;
    cout << *(flarr + 3) << endl;
    cout << *(flarr + 4) << endl;
  
    ptrcharray = charray;
    
    cout << *charray<< endl;
    cout << *(charray + 1) << endl;
    cout << *(charray + 2) << endl;
    cout << *(charray + 3) << endl;
      	
    return 0;
}
