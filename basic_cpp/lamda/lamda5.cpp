#include <iostream>

int main (int argc, char *argv[]) {
  int b = 3;
  int c = 7;

  auto lamdaSu = [b,c](){
    return b*c;
  };

  std::cout << lamdaSu() <<std::endl;
  return 0;
}
