#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <vector>

using vector = std::vector<int>;

int main(int argc, char *argv[]) {
  // belajar vector
  vector vec3 = {5, 8, 1, 7, 2, 9, 4};

  std::cout << "sebelum diurutkan" << std::endl;

  for (int i = 0; i < std::size(vec3); i++) {
    std::cout << vec3[i] << " ";
  }
  std::cout << std::endl;
  std::cout << std::endl;

  std::cout << "sorting dari yang terkecil" << std::endl;
  std::sort(vec3.begin(), vec3.end());
  for (int i = 0; i < std::size(vec3); i++) {
    std::cout << vec3[i] << " ";
  }

  std::cout << "sorting dari yang terbesar" << std::endl;
  std::sort(vec3.begin(), vec3.end(), std::greater<int>());
  for (int i = 0; i < std::size(vec3); i++) {
    std::cout << vec3[i] << " ";
  }

  return 0;
}
