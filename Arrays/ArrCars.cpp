//  C++ Program to Illustrate How to Access Array Elements
#include <iostream>
#include <string>
using namespace std;

int main(){

    string cars[3];

    // Inserting elements in an array
    cars[0] = "Kia";
    cars[1] = "Opel";
    cars[2] = "Alfa Romeo";

    // Accessing and printing elements of the array
    cout << "cars[0]: " << cars[0] << endl;
    cout << "cars[1]: " << cars[1] << endl;
    cout << "cars[2]: " << cars[2] << endl;

    return 0;
}