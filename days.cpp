#include <iostream>
using namespace std;
int main() {
  int day = 4;
  switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  }
  return 0;
}
#include <iostream>
using namespace std;
int main() {        
    char x = 'A';
    switch (x) {
    case 'A':
        cout << "A";
        break;
    case 'B':
        cout << "B";
        break;
    default:
        cout << "Other than A and B";
        break;
    }
    return 0;
}