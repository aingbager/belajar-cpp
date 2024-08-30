#include <iostream>

int main(int argc, char *argv[]) {
  int a = 5;

  if (a == 5) {
    std::cout << "ya ini 5" << std::endl;
  } else if (a == 7) {
    std::cout << "ini 7" << std::endl;
  } else {
    std::cout << "bukan angka uyang dicari" << std::endl;
  }
  return 0;
}
