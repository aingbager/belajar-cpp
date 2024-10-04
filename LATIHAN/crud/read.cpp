#include <fstream>
#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  std::ifstream baca_file("create.txt");

  if (!baca_file) {
    std::cerr << "error baca file" << std::endl;
    return 1;
  }

  std::string reader;

  while (std::getline(baca_file, reader)) {
    std::cout << reader << std::endl;
  }
  return 0;
}
