#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
int main(int argc, char *argv[]) {
  std::vector<int> angka = {2, 6, 4, 1, 8, 0};
  std::cout << "sebelum diurutkan" << std::endl;
  for (int n : angka) {
    std::cout << n << " ";
  }
  std::cout << std::endl;

  std::sort(angka.begin(), angka.end());
  std::cout << "sesudah diurutkan" << std::endl;
  for (int n : angka) {
    std::cout << n << " ";
  }
  std::cout << std::endl;

  // diurutkan terbalik
  std::sort(angka.begin(), angka.end(), std::greater<int>());
  std::cout << "sesudah diurutkan terbalik" << std::endl;
  for (int n : angka) {
    std::cout << n << " ";
  }
  std::cout << std::endl;

  return 0;
}
