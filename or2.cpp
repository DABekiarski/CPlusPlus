#include <iostream>
using namespace std;
int main() {
  int x = 5;
  int y = 3;
  cout << (x > 3 || x < 4); 
  return 0;
}
#include <iostream>
using namespace std;
 int main()
{
    cout << "Enter a number: ";
    int num {};
    cin >> num;
 
    if (num > 0 && num <= 10)
        cout << "Your number is between 1 and 10";
    else
        cout << "Your number is not between 1 and 10";
    return 0;
}
#include <iostream>
using namespace std;
int main() {
     cout << "Enter a number: ";
    int num {};
    cin >> num;
    if(num == 4 || num == 8)
        cout << "You chose a winning number!";
    else
        cout << "Sorry, better luck next time.";
    return 0;
}
#include <iostream>
using namespace std;
 int main()
{
    cout << "Enter a number: ";
    int x {};
    cin >> x;
    
    if (!x == 0)
        cout << "You typed a number other than 0";
    else
        cout << "You typed zero";
 
    return 0;
}
#include <iostream>
using namespace std;
 int main()
{
    int num1 = 3;
    int num2 = 11;
 
    if (!num1 > num2)
        cout << num1 << " is not greater than " << num2;
    else
        cout << num1 << " is greater than " << num2;
 
    return 0;
}