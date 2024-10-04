#include <fstream>
#include <iostream>

using off = std::ofstream;

int main(int argc, char *argv[]) {
  // buat files
  off files("file.txt");

  if (!files) {
    std::cerr << "error files.." << std::endl;
    return 1;
  }

  files << "ini baris pertama\n";
  files << "ini baris kedua\n";

  files.close();
  return 0;
}
