 //c++20
#include <algorithm>
#include <iostream>
#include <vector>

namespace ranges = std::ranges;

int main(int argc, char *argv[]) {
  std::vector<int> angka_acak = {7, 5, 2, 4, 8, 0, 1};
  ranges::sort(angka_acak);
  for (int n : angka_acak) {
    std::cout << n << " ";
  }
  std::cout << std::endl;

  ranges::sort(angka_acak, ranges::greater());
  for (int n : angka_acak) {
    std::cout << n << " ";
  }
  std::cout << std::endl;

  return 0;
}
