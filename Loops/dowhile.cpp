#include <iostream>
using namespace std;

int main() {
  int i = 0, k;
  
  cout<<"Enter number of cycles: "<<endl;
  cin >> k;
  
  do {
    cout << "Execute "<< i << << " times"<<"\n";
    i++;
  }
  while (i < k);
  
  return 0;
}
