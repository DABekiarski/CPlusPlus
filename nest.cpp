#include <iostream>
using namespace std;

int main() {
      int n = 6;
      
      // Outer if statement
      if (n % 2 == 0) {
      
          // Inner if statement
          if (n % 3 == 0) {
              cout << "Divisible by 2 and 3";
        }
          else {
              cout << "Divisible by 2 but not 3";
        }
      }
      else {
          cout << "Not Divisible by 2";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 2, c = 6;

    // Outermost if else
    if (a < b) {
      
        // Nested if else
        if (c < b) {
            cout << b;
        }
        else {
            cout << c;
        }
    }
    else {
      
        // Nested if else
        if (c < a) {
            cout << a;
        }
        else {
            cout << c;
        }
    }

    return 0;
}