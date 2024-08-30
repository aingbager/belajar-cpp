#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<int> angka = {6, 18, 2, 3, 5, 0, 8};

  for (auto it = angka.begin(); it < angka.end(); it++) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  // short
  std::sort(angka.begin(), angka.end());
  for (auto it = angka.begin(); it < angka.end(); it++) {
    std::cout << *it << " ";
  }

  return 0;
}
