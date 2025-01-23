#include <iostream> 
using namespace std; 
int main() { 
    bool isLoggedIn = false; 
    if (!isLoggedIn) { 
        cout << "Please log in to access this feature."<< endl; 
    } 
    else { 
        cout << "Welcome to GeeksforGeeks!" << endl; 
    } 
    return 0; 
}