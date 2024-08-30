#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int b = 2;
  short a = 1;
  while (b == 2) {
    cout << a << endl;
    a += 1;
  }
  return 0;
}
