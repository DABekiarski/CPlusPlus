#include <iostream>
using namespace std;

int main() {
  int dice = 1;

  while (dice <= 6) {
    if (dice < 6) {
      cout << "No 6";
    } else {
      cout << "6!!!";
    }
    dice = dice + 1;
  }

  return 0;
}
