#include <iostream>
int main (int argc, char *argv[]) {
  enum Honda{beat,vario,pcx};
  Honda motor = Honda::beat;

  std::cout << motor << std::endl;
  return 0;
}
