#include <iostream>
int main (int argc, char *argv[]) {
  //belajar lamda
  int x = 5;
  int z = 7;

  auto result = [x,z](){
    return x*z;
  };

  std::cout << result() << std::endl;
  return 0;
}
