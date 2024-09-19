#include <iostream>

extern int intGlobal;
int main(int argc, char *argv[]) {

  std::cout << intGlobal << std::endl;
  return 0;
}
