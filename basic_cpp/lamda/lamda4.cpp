#include <iostream>

int main(int argc, char *argv[]) {
  int a = 5;
  int b = 2;

  auto lamdasu = [a, b]() { return a * b; };

  std::cout << lamdasu() << std::endl;

  return 0;
}
