#include <iostream>
int main(int argc, char *argv[]) {
  int index;
  std::cout << "masukan index array: ";
  std::cin >> index;

  int *number = new int[index];

  for (int i = 0; i < index; i++) {
    number[i] = i * 2;
  }
  for (int i = 0; i < index; i++) {
    std::cout << number[i] << std::endl;
  }

  delete[] number;

  return 0;
}
