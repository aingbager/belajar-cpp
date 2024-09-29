#include <iostream>
int main (int argc, char *argv[]) {
  //belajar pointer
  int a = 5;
  int *b = &a;

  std::cout << a << std::endl;
  std::cout << *b << std::endl;

  std::cout << &a << std::endl;
  std::cout << b << std::endl;
  return 0;
}
