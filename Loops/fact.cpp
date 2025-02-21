//Factoriel
#include <iostream>
using namespace std;
int main() {
   int n;
   int fact = 1;
   
   cout << "Enter number: " << endl;
   cin >> n;
  
  do {
  	fact = fact * n;
    n--;
  } while (n > 1);
  
  cout << fact << endl;
  
  return 0;
}