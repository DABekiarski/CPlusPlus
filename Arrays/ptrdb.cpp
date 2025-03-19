#include <iostream> 
using namespace std;
const int MAX = 3; 
int main () {
   int  var[MAX] = {10, 100, 200};
   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double *p;
   
   cout << *(var + 2) << endl;
  
   p = balance;
   
   cout << *(p + 1) << endl;
   cout << *(balance + 1) << endl;
   
   return 0;
}