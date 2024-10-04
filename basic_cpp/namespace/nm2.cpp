#include <iostream>
namespace udin {
int angka = 3;
int numner = 5;
} // namespace udin

namespace odon {
int a = 3;
int b = 4;
} // namespace odon
int main(int argc, char *argv[]) {
  // belajar namespace
  std::cout << udin::angka << std::endl;
  std::cout << odon::a << std::endl;
  return 0;
}
