#include <algorithm>
#include <iostream>
#include <vector>
using vec = std::vector<int>;

bool reverse(int a, int b) { return a > b; }

int main(int argc, char *argv[]) {

  vec angka = {2, 8, 5, 3, 7, 4};
  std::cout << "sebelum diurutkan" << std::endl;
  std::cout << angka[0];
  std::cout << angka[1];
  std::cout << angka[2];
  std::cout << angka[3];
  std::cout << angka[4];
  std::cout << std::endl;

  std::cout << "sesudah diurutkan." << std::endl;
  std::sort(angka.begin(), angka.end());
  for (int i = 0; i < angka.size(); i++) {
    std::cout << angka[i];
  }
  std::cout << std::endl;
  std::cout << "diurutkan terbalik." << std::endl;
  std::sort(angka.begin(), angka.end(), reverse);
  for (int i = 0; i < angka.size(); i++) {
    std::cout << angka[i] ;
  }
  std::cout << std::endl;
  return 0;
}
