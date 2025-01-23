#include <iostream>
#include<string>
using namespace std;
void display(string s)
{
    cout << "Entered string is: " << s << endl;
}
int main()
{
    string str1,str2;  
    cout << "Enter a string: ";
    getline(cin, str1);
    cout << "Enter another string: ";
 	getline(cin, str2);
    display(str1);
    display(str2);
    return 0;
}