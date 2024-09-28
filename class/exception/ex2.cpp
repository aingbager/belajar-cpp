// belajar excetion

#include <iostream>
#include <stdexcept>

int pembagian(int a, int b) {
  if (b == 0) {
    // lempar error
    throw std::runtime_error("Error: Tidak boleh dibagi dengan 0");
  }
  return a / b;
}

int main(int argc, char *argv[]) {

  int a = 5;
  int b = 0;

  try {
    int result = pembagian(a, b);
    std::cout << "result: " << result << std::endl;
  } catch (const std::runtime_error &e) {
    std::cerr << "Exception caugh: " << e.what() << std::endl;
  }

  std::cout << "program selesai" << std::endl;

  return 0;
}
