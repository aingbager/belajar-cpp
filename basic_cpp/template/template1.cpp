#include <iostream>

template <typename T> T add(T a, T b) { return a * b; }

template <typename P> P tambah(P a, P b) { return a + b; }

int main(int argc, char *argv[]) {

  std::cout << add(5, 6) << std::endl;
  std::cout << add(7.7, 5.6) << std::endl;
  std::cout << add(8.9, 5.6) << std::endl;
  std::cout << tambah(5, 8) << std::endl;

  return 0;
}
