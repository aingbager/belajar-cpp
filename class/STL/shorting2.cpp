#include <algorithm>
#include <iostream>
#include <vector>
int main(int argc, char *argv[]) {
  // vector
  std::vector<int> angka = {2, 5, 1, 0, 8, 5, 3, 2};
  std::ranges::sort(angka); // untuk c++20 keatas

  for (int result : angka) {
    std::cout << result << " ";
  }
  std::cout << std::endl;
  return 0;
}
