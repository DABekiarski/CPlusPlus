// C++ Program to how to sort an array using
// std::sort() function
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5, 4, 1, 2, 3};

    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array using std::sort()
    sort(arr, arr + n);

    for (auto i : arr)
        cout << i << " ";
    return 0;
}