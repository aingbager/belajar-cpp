#include <fstream>
#include <iostream>
int main(int argc, char *argv[]) {
  // belajar buat file
  std::ofstream file("create.txt");

  if (!file) {
    std::cerr << "error bro" << std::endl;
    return 1;
  }

  file << "inputan pertama\n";
  file << "inputan kedua\n";

  file.close();
  return 0;
}
