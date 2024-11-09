#include <iostream>
int main (int argc, char *argv[]) {
  //belajar lamda
  int a = 5;
  int b = 2;

  auto angka = [a,b](){
    return a*b;
  };

  std::cout << angka() << std::endl;

  return 0;
}
